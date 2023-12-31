
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

function Mouse_Create: TMouse; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  TMouse.Create;
  handleExceptionEnd
end;

procedure Mouse_Free(AObj: TMouse); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_ClassType(AObj: TMouse): TClass; extdecl;
begin
{$ifdef UsehandleException}Result := TClass(nil);{$endif}
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_ClassName(AObj: TMouse): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_InstanceSize(AObj: TMouse): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_InheritsFrom(AObj: TMouse; AClass: TClass): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_Equals(AObj: TMouse; Obj: TObject): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_GetHashCode(AObj: TMouse): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

//CLASSMETHOD:
function Mouse_ToString(AObj: TMouse): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := PChar(nil);{$endif}
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Mouse_GetCapture(AObj: TMouse): HWND; extdecl;
begin
{$ifdef UsehandleException}Result := HWND(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.Capture;
  handleExceptionEnd
end;

procedure Mouse_SetCapture(AObj: TMouse; AValue: HWND); extdecl;
begin
  handleExceptionBegin
  AObj.Capture := AValue;
  handleExceptionEnd
end;

//RETURNISLASTPARAM:
procedure Mouse_GetCursorPos(AObj: TMouse; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.CursorPos;
  handleExceptionEnd
end;

//PARAMS:2=nonPtr
procedure Mouse_SetCursorPos(AObj: TMouse; var AValue: TPoint); extdecl;
begin
  handleExceptionBegin
  AObj.CursorPos := AValue;
  handleExceptionEnd
end;

function Mouse_GetIsDragging(AObj: TMouse): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result :=  AObj.IsDragging;
  handleExceptionEnd
end;

function Mouse_GetWheelScrollLines(AObj: TMouse): Integer; extdecl;
begin
{$ifdef UsehandleException}Result := Integer(0);{$endif}
  handleExceptionBegin
  Result :=  AObj.WheelScrollLines;
  handleExceptionEnd
end;

function Mouse_StaticClassType: TClass; extdecl;
begin
  Result := TMouse;
end;

exports
  Mouse_Create,
  Mouse_Free,
  Mouse_ClassType,
  Mouse_ClassName,
  Mouse_InstanceSize,
  Mouse_InheritsFrom,
  Mouse_Equals,
  Mouse_GetHashCode,
  Mouse_ToString,
  Mouse_GetCapture,
  Mouse_SetCapture,
  Mouse_GetCursorPos,
  Mouse_SetCursorPos,
  Mouse_GetIsDragging,
  Mouse_GetWheelScrollLines,
  Mouse_StaticClassType;

