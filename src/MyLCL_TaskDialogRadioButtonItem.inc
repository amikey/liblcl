
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function TaskDialogRadioButtonItem_Create(AOwner: TCollection): TTaskDialogRadioButtonItem; extdecl;
begin
  handleExceptionBegin
  Result :=  TTaskDialogRadioButtonItem.Create(AOwner);
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_Free(AObj: TTaskDialogRadioButtonItem); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetNamePath(AObj: TTaskDialogRadioButtonItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_Assign(AObj: TTaskDialogRadioButtonItem; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_ClassType(AObj: TTaskDialogRadioButtonItem): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_ClassName(AObj: TTaskDialogRadioButtonItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_InstanceSize(AObj: TTaskDialogRadioButtonItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_InheritsFrom(AObj: TTaskDialogRadioButtonItem; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_Equals(AObj: TTaskDialogRadioButtonItem; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetHashCode(AObj: TTaskDialogRadioButtonItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_ToString(AObj: TTaskDialogRadioButtonItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetModalResult(AObj: TTaskDialogRadioButtonItem): TModalResult; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ModalResult;
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_SetModalResult(AObj: TTaskDialogRadioButtonItem; AValue: TModalResult); extdecl;
begin
  handleExceptionBegin
  AObj.ModalResult := AValue;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetCaption(AObj: TTaskDialogRadioButtonItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_SetCaption(AObj: TTaskDialogRadioButtonItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetDefault(AObj: TTaskDialogRadioButtonItem): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Default;
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_SetDefault(AObj: TTaskDialogRadioButtonItem; AValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.Default := AValue;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetCollection(AObj: TTaskDialogRadioButtonItem): TCollection; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Collection;
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_SetCollection(AObj: TTaskDialogRadioButtonItem; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetIndex(AObj: TTaskDialogRadioButtonItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_SetIndex(AObj: TTaskDialogRadioButtonItem; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_GetDisplayName(AObj: TTaskDialogRadioButtonItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DisplayName);
  handleExceptionEnd
end;

procedure TaskDialogRadioButtonItem_SetDisplayName(AObj: TTaskDialogRadioButtonItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DisplayName := AValue;
  handleExceptionEnd
end;

function TaskDialogRadioButtonItem_StaticClassType: TClass; extdecl;
begin
  Result := TTaskDialogRadioButtonItem;
end;

exports
  TaskDialogRadioButtonItem_Create,
  TaskDialogRadioButtonItem_Free,
  TaskDialogRadioButtonItem_GetNamePath,
  TaskDialogRadioButtonItem_Assign,
  TaskDialogRadioButtonItem_ClassType,
  TaskDialogRadioButtonItem_ClassName,
  TaskDialogRadioButtonItem_InstanceSize,
  TaskDialogRadioButtonItem_InheritsFrom,
  TaskDialogRadioButtonItem_Equals,
  TaskDialogRadioButtonItem_GetHashCode,
  TaskDialogRadioButtonItem_ToString,
  TaskDialogRadioButtonItem_GetModalResult,
  TaskDialogRadioButtonItem_SetModalResult,
  TaskDialogRadioButtonItem_GetCaption,
  TaskDialogRadioButtonItem_SetCaption,
  TaskDialogRadioButtonItem_GetDefault,
  TaskDialogRadioButtonItem_SetDefault,
  TaskDialogRadioButtonItem_GetCollection,
  TaskDialogRadioButtonItem_SetCollection,
  TaskDialogRadioButtonItem_GetIndex,
  TaskDialogRadioButtonItem_SetIndex,
  TaskDialogRadioButtonItem_GetDisplayName,
  TaskDialogRadioButtonItem_SetDisplayName,
  TaskDialogRadioButtonItem_StaticClassType;
