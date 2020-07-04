
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function Collection_Create(AOwner: TCollectionItemClass): TCollection; extdecl;
begin
  handleExceptionBegin
  Result :=  TCollection.Create(AOwner);
  handleExceptionEnd
end;

procedure Collection_Free(AObj: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Free;
  handleExceptionEnd
end;

function Collection_Owner(AObj: TCollection): TPersistent; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Owner;
  handleExceptionEnd
end;

function Collection_Add(AObj: TCollection): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Add;
  handleExceptionEnd
end;

procedure Collection_Assign(AObj: TCollection; Source: TPersistent); extdecl;
begin
  handleExceptionBegin
  AObj.Assign(Source);
  handleExceptionEnd
end;

procedure Collection_BeginUpdate(AObj: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.BeginUpdate;
  handleExceptionEnd
end;

procedure Collection_Clear(AObj: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.Clear;
  handleExceptionEnd
end;

procedure Collection_Delete(AObj: TCollection; Index: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

procedure Collection_EndUpdate(AObj: TCollection); extdecl;
begin
  handleExceptionBegin
  AObj.EndUpdate;
  handleExceptionEnd
end;

function Collection_FindItemID(AObj: TCollection; ID: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.FindItemID(ID);
  handleExceptionEnd
end;

function Collection_GetNamePath(AObj: TCollection): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.GetNamePath);
  handleExceptionEnd
end;

function Collection_Insert(AObj: TCollection; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Insert(Index);
  handleExceptionEnd
end;

function Collection_ClassType(AObj: TCollection): TClass; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.ClassType;
  handleExceptionEnd
end;

function Collection_ClassName(AObj: TCollection): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  ToPChar(AObj.ClassName);
  handleExceptionEnd
end;

function Collection_InstanceSize(AObj: TCollection): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InstanceSize;
  handleExceptionEnd
end;

function Collection_InheritsFrom(AObj: TCollection; AClass: TClass): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.InheritsFrom(AClass);
  handleExceptionEnd
end;

function Collection_Equals(AObj: TCollection; Obj: TObject): LongBool; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Equals(Obj);
  handleExceptionEnd
end;

function Collection_GetHashCode(AObj: TCollection): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.GetHashCode;
  handleExceptionEnd
end;

function Collection_ToString(AObj: TCollection): PChar; extdecl;
begin
  handleExceptionBegin
  Result :=  PChar(AObj.ToString);
  handleExceptionEnd
end;

function Collection_GetCount(AObj: TCollection): Integer; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Count;
  handleExceptionEnd
end;

function Collection_GetItems(AObj: TCollection; Index: Integer): TCollectionItem; extdecl;
begin
  handleExceptionBegin
  Result :=  AObj.Items[Index];
  handleExceptionEnd
end;

procedure Collection_SetItems(AObj: TCollection; Index: Integer; AValue: TCollectionItem); extdecl;
begin
  handleExceptionBegin
  AObj.Items[Index] := AValue;
  handleExceptionEnd
end;

function Collection_StaticClassType: TClass; extdecl;
begin
  Result := TCollection;
end;

exports
  Collection_Create,
  Collection_Free,
  Collection_Owner,
  Collection_Add,
  Collection_Assign,
  Collection_BeginUpdate,
  Collection_Clear,
  Collection_Delete,
  Collection_EndUpdate,
  Collection_FindItemID,
  Collection_GetNamePath,
  Collection_Insert,
  Collection_ClassType,
  Collection_ClassName,
  Collection_InstanceSize,
  Collection_InheritsFrom,
  Collection_Equals,
  Collection_GetHashCode,
  Collection_ToString,
  Collection_GetCount,
  Collection_GetItems,
  Collection_SetItems,
  Collection_StaticClassType;
