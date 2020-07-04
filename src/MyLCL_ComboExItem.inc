
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

procedure ComboExItem_Assign(AObj: TComboExItem; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

function ComboExItem_GetNamePath(AObj: TComboExItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

function ComboExItem_ClassType(AObj: TComboExItem): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function ComboExItem_ClassName(AObj: TComboExItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function ComboExItem_InstanceSize(AObj: TComboExItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function ComboExItem_InheritsFrom(AObj: TComboExItem; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function ComboExItem_Equals(AObj: TComboExItem; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function ComboExItem_GetHashCode(AObj: TComboExItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function ComboExItem_ToString(AObj: TComboExItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function ComboExItem_GetIndent(AObj: TComboExItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Indent;
  handleExceptionEnd
end;

procedure ComboExItem_SetIndent(AObj: TComboExItem; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Indent := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetOverlayImageIndex(AObj: TComboExItem): TImageIndex; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.OverlayImageIndex;
  handleExceptionEnd
end;

procedure ComboExItem_SetOverlayImageIndex(AObj: TComboExItem; AValue: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.OverlayImageIndex := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetData(AObj: TComboExItem): Pointer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Data;
  handleExceptionEnd
end;

procedure ComboExItem_SetData(AObj: TComboExItem; AValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.Data := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetCaption(AObj: TComboExItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.Caption);
  handleExceptionEnd
end;

procedure ComboExItem_SetCaption(AObj: TComboExItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Caption := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetImageIndex(AObj: TComboExItem): TImageIndex; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ImageIndex;
  handleExceptionEnd
end;

procedure ComboExItem_SetImageIndex(AObj: TComboExItem; AValue: TImageIndex); extdecl;
begin
  handleExceptionBegin
  AObj.ImageIndex := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetCollection(AObj: TComboExItem): TCollection; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Collection;
  handleExceptionEnd
end;

procedure ComboExItem_SetCollection(AObj: TComboExItem; AValue: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Collection := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetIndex(AObj: TComboExItem): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Index;
  handleExceptionEnd
end;

procedure ComboExItem_SetIndex(AObj: TComboExItem; AValue: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Index := AValue;
  handleExceptionEnd
end;

function ComboExItem_GetDisplayName(AObj: TComboExItem): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.DisplayName);
  handleExceptionEnd
end;

procedure ComboExItem_SetDisplayName(AObj: TComboExItem; AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.DisplayName := AValue;
  handleExceptionEnd
end;

function ComboExItem_StaticClassType: TClass; extdecl;
begin
  Result := TComboExItem;
end;

exports
  ComboExItem_Assign,
  ComboExItem_GetNamePath,
  ComboExItem_ClassType,
  ComboExItem_ClassName,
  ComboExItem_InstanceSize,
  ComboExItem_InheritsFrom,
  ComboExItem_Equals,
  ComboExItem_GetHashCode,
  ComboExItem_ToString,
  ComboExItem_GetIndent,
  ComboExItem_SetIndent,
  ComboExItem_GetOverlayImageIndex,
  ComboExItem_SetOverlayImageIndex,
  ComboExItem_GetData,
  ComboExItem_SetData,
  ComboExItem_GetCaption,
  ComboExItem_SetCaption,
  ComboExItem_GetImageIndex,
  ComboExItem_SetImageIndex,
  ComboExItem_GetCollection,
  ComboExItem_SetCollection,
  ComboExItem_GetIndex,
  ComboExItem_SetIndex,
  ComboExItem_GetDisplayName,
  ComboExItem_SetDisplayName,
  ComboExItem_StaticClassType;
