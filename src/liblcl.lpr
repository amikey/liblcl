//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

{$if FPC_FULLVERSION < 30200}
   {$ERROR 'Requires FPC version>=3.2'}
{$endif}
{$if defined(lclqt) or defined(lclqt5)}
   {$ERROR 'Qt widgets are not supported'}
{$endif}

library liblcl;

{$mode delphi}

// 以后测试
// https://www.freepascal.org/docs-html/prog/progsu25.html
//{$LONGSTRINGS ON}

{$ifndef windows}
  {$define UseCThreads}
{$endif}

uses
{$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,
{$ENDIF}{$ENDIF}
  //LCLTranslator,
{$I UseAll.inc}
  ,Classes,
  SysUtils,
  LCLVersion,
  uFormDesignerFile,
{$IFDEF LCLCocoa}
  uMacOSPatchs,
{$ENDIF}
{$IFDEF LINUX}
  uLinuxPatchs,
{$ENDIF}
  uExceptionHandle,
  uComponents,
  uControlPatchs;

{$IFDEF WINDOWS}
  {$R *.res}
{$ENDIF}

{$I ExtDecl.inc}
{$I LazarusDef.inc}

{$ifndef UsehandleException}
  {$ERROR 'UsehandleException is not enabled'}
{$endif}

{$I uExport1.pas}
{$I uExport2.pas}
{$I uExport3.pas}
{$I uExport4.pas}

begin
  RequireDerivedFormResource := False;
  // 3.2还是多少这个得设置下了，不然收不到消息了
  // 3.0.4不需要设置
{$if FPC_FULLVERSION >= 30200}
  IsMultiThread := True;
{$endif}
  InitLazarusDef;
end.
