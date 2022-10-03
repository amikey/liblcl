﻿// main.c : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "liblcl.h" 

 
#ifdef _WIN32
// UTF8解码
char *UTF8Decode(char* str) {
    int len = MultiByteToWideChar(CP_UTF8, 0, str, -1, 0, 0);
    wchar_t* wCharBuffer = (wchar_t*)malloc(len * sizeof(wchar_t) + 1);
    MultiByteToWideChar(CP_UTF8, 0, str, -1, wCharBuffer, len);

    len = WideCharToMultiByte(CP_ACP, 0, wCharBuffer, -1, 0, 0, 0, NULL);
    char* aCharBuffer = (char*)malloc(len * sizeof(char) + 1);
    WideCharToMultiByte(CP_ACP, 0, wCharBuffer, -1, aCharBuffer, len, 0, NULL);
    free((void*)wCharBuffer);

    return aCharBuffer;
}
#endif


// 控件全局定义
TMemo mmoText;
TForm form2;
TOpenDialog dlgOpen;

// 按钮单击事件
void onButton1Click(TObject sender) {
    ShowMessage("Hello world!");
}


void onBtnOpenFileClick(TObject sender) {
    if (OpenDialog_Execute(dlgOpen)){
		TStrings lines = Memo_GetLines(mmoText);
		Strings_LoadFromFile(lines, OpenDialog_GetFileName(dlgOpen));
	}
}

// 文件拖放事件
void onOnDropFiles(TObject sender, void* aFileNames, intptr_t len) {
    printf("aFileNames: %p, len=%d\n", aFileNames, len);
    intptr_t i;
	// GetStringArrOf 为一个从Lazarus的string数组中获取成员的函数。
    for (i = 0; i < len; i++) {
        
#ifdef _WIN32
        // 由于liblcl使用的是UTF-8编码，所以获取或者传入的在Windows下都要经过UTF-8编/解码 
        char *filename = UTF8Decode(GetFPStringArrayMember(aFileNames, i));
#else
	    // Linux与macOS默认都是UTF-8，则无需编/解码
        char *filename = GetFPStringArrayMember(aFileNames, i);
#endif
        if (mmoText) {
            Memo_Append(mmoText, filename);
        }
        printf("file[%d]=%s\n", i+1, filename);
#ifdef _WIN32
        free((void*)filename);
#endif
    }
}

// 窗口键盘按下事件
void onFormKeyDown(TObject sender, Char* key, TShiftState shift) {
    printf("key=%d, shift=%d\n", *key, shift);
    if (*key == vkReturn) {
        ShowMessage("press Enter!");
    }

    TShiftState s = Include(0, ssAlt);
    if (InSet(s, ssAlt)) {
        printf("ssAlt1\n");
    }
    s = Exclude(s, ssAlt);
    if (!InSet(s, ssAlt)) {
        printf("ssAlt2\n");
    }
}

void onListBoxDrawItem(TListBox control, int32_t index, TRect* aRect, TOwnerDrawState state) {
    TCanvas canvas = ListBox_GetCanvas(control);
    TStrings items = ListBox_GetItems(control);
	Brush_SetStyle(Canvas_GetBrush(canvas), bsClear);
    char* s = Strings_GetStrings(items, index);
	if(index % 2 == 0) 
		Font_SetColor(Canvas_GetFont(canvas), clRed);
	else
		Font_SetColor(Canvas_GetFont(canvas), clGreen);
    Canvas_TextOut(canvas, aRect->left, aRect->top, s);
}

// 编辑框内容改变事件
void onEditChange(TObject sender) {
    printf("%s\n", Edit_GetText(sender));
}

void onBtn2Click(TObject sender) {
    if (form2) {
        Form_Show(form2);
    }
}

int main()
{
    // 加载库
#ifdef _WIN32
    if (load_liblcl("liblcl.dll")) {
#endif
#ifdef __linux__
    if (load_liblcl("liblcl.so")) {
#endif
#ifdef __APPLE__
    if (load_liblcl("liblcl.dylib")) {
#endif

        // 主窗口显示在任务栏，仅Windows有效
		Application_SetMainFormOnTaskBar(Application, TRUE); 
		// 应用程序标题，影响到：比如ShowMessage的标题。
		Application_SetTitle(Application, "Hello LCL"); 
		// 初始化应用程序
        Application_Initialize(Application);

        // 创建窗口
        TForm form = Application_CreateForm(Application);
		// 设置窗口标题
        Form_SetCaption(form, "LCL Form");
		// 设置窗口位置
        Form_SetPosition(form, poScreenCenter);

        // --- 拖放文件测试 ---
		// 接受文件拖放
        Form_SetAllowDropFiles(form, TRUE); 
	    // 拖放文件事件
        Form_SetOnDropFiles(form, onOnDropFiles);

        // 窗口优先接受按键，不受其它影响
        Form_SetKeyPreview(form, TRUE);

        // 窗口按键事件
        Form_SetOnKeyDown(form, onFormKeyDown);
        
		// ---------- 从内存流或者文件加载UI布局文件 ----------
        // 从文件加载窗口设置
        // 从流加载
        //TMemoryStream mem = NewMemoryStream();
        //MemoryStream_Write(mem, data, datalen);
		//MemoryStream_SetPosition(mem, 0); 
        //ResFormLoadFromStream(mem, form);
        //MemoryStream_Free(mem);
		
        // 从文件加载
        //ResFormLoadFromFile("./Form1.gfm", form);

        // ----------  动态创建控件 ---------- 
        // 创建一个按钮
        TButton btn = Button_Create(form);
		// 设置子父窗口
        Button_SetParent(btn, form);
		// 设置按钮单击事件
        Button_SetOnClick(btn, onButton1Click);
		// 设置按钮标题
        Button_SetCaption(btn, "button1");
		// 设置按钮在Parent的左边位置
        Button_SetLeft(btn, 100);
		// 设置按钮在Parent的顶边位置
        Button_SetTop(btn, 100);
		
		
		dlgOpen = OpenDialog_Create(form);
		OpenDialog_SetFilter(dlgOpen, "Text File(*.txt)|*.txt|C Files(*.h;*.c)|*.h;*.c");
		
		TButton btnOpenFile = Button_Create(form);
		Button_SetParent(btnOpenFile, form);
		Button_SetCaption(btnOpenFile, "Open File");
		Button_SetLeft(btnOpenFile, 100);
		Button_SetTop(btnOpenFile, Button_GetTop(btn) - 40);
		Button_SetOnClick(btnOpenFile, onBtnOpenFileClick);

        //form2
        form2 = Application_CreateForm(Application);
        Form_SetPosition(form2, poScreenCenter);
        TStringGrid grid = StringGrid_Create(form2);
        StringGrid_SetParent(grid, form2);
        StringGrid_SetAlign(grid, alClient);
        // 10x10
        StringGrid_SetColCount(grid, 10);
        StringGrid_SetRowCount(grid, 10);
        int i, j, n;
        int buffLen = 20;
        char *buff = (char*)malloc(buffLen);
        // 横第一行
        for (i = 0; i < StringGrid_GetColCount(grid); i++){
            n = sprintf_s(buff, buffLen, "%d", i);
            buff[n] = 0;
            StringGrid_SetCells(grid, i, 0, buff);
        }
        // 竖第一行
        for (j = 0; j < StringGrid_GetColCount(grid); j++) {
            n = sprintf_s(buff, buffLen, "%d", j);
            buff[n] = 0;
            StringGrid_SetCells(grid, 0, j, buff);
        }
        // 九九乘法表
        for (i = 1; i <= 9; i++) {
            for (j = i; j <= 9; j++) {
                n = sprintf_s(buff, buffLen, "%dx%d=%d", i, j, i*j);
                buff[n] = 0;
                StringGrid_SetCells(grid, i, j, buff);
            }
        }
        free((void*)buff);
         


        // btnOpenForm2 
        TButton btn2 = Button_Create(form);
        Button_SetParent(btn2, form);
        Button_SetLeft(btn2, Button_GetLeft(btn));
        Button_SetTop(btn2, Button_GetTop(btn) + 40);
        Button_SetWidth(btn2, 120);
        Button_SetCaption(btn2, "Open Form2");
        Button_SetOnClick(btn2, onBtn2Click);
		
        // 创建一个单行文件框（多行为TMemo）
        TEdit edit = Edit_Create(form);
		// 设置子父窗口
        Edit_SetParent(edit, form);
		// 设置左边
        Edit_SetLeft(edit, 10);
		// 设置顶边
        Edit_SetTop(edit, 10);
		// 设置编辑器内容改变事件
        Edit_SetOnChange(edit, onEditChange);
        Edit_SetWidth(edit, 200);

        // TMemo
        mmoText = Memo_Create(form);
        Memo_SetParent(mmoText, form);
        Memo_SetLeft(mmoText, 10);
        Memo_SetTop(mmoText, 10);
        Memo_SetWidth(mmoText, 400);
        //Memo_SetHeight(mmoText, 300);
        Memo_SetAlign(mmoText, alRight);
        Memo_SetScrollBars(mmoText, ssAutoVertical);
		// font set
		TFont font = Memo_GetFont(mmoText);
		Font_SetSize(font, 12);
		Font_SetName(font, "Courier New");


        // TListBox
        TListBox listbox = ListBox_Create(form);
        ListBox_SetParent(listbox, form);
        ListBox_SetItemHeight(listbox, 30);
        ListBox_SetStyle(listbox, lbOwnerDrawFixed);
        ListBox_SetLeft(listbox, 10);
        ListBox_SetTop(listbox, Button_GetTop(btn2) + Button_GetHeight(btn2) + 10);
        ListBox_SetWidth(listbox, 200);
        ListBox_SetHeight(listbox,100);
        ListBox_SetOnDrawItem(listbox, onListBoxDrawItem);

        TStrings items = ListBox_GetItems(listbox);
        for (i = 0; i<10; i++) {
            Strings_Add(items, "item");
        }


        // 运行app
        Application_Run(Application);

        // 释放liblcl库
        close_liblcl();
    }
    return 0;
}