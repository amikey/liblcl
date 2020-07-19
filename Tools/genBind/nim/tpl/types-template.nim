#[ 
   The code is automatically generated by the genBind tool. 
   Author: ying32
   https://github.com/ying32  
]#
##
type
{{/* 基础类型定义 */}}

{{range $tidex, $el := .BaseTypes}}
{{if isEmpty $el.FieldArch}}
  {{if eq $el.Kind "struct"}}
##
  {{$el.Name}}* = object
    {{range $field := $el.Fields}}
    {{covKeyword $field.Name}}*: {{if $field.IsArr}}array[0..{{Dec $field.ArrLength}}, {{end}}{{covType $field.Type}}{{if $field.IsArr}}]{{end}}
    {{end}}
  {{else if eq $el.Kind "set"}}
##
  {{$el.Name}}* = set[{{$el.SetOf}}]
  {{else}}
##
  {{$el.Name}}* = {{covType $el.Type}}
  {{end}}
{{end}}
{{end}}



{{/* 类型，包含结构和枚举 */}}
{{range $el := .Types}}
  {{if eq $el.Kind "struct"}}
##
  {{$el.Name}}* = object
    {{range $field := $el.Fields}}
    {{covKeyword $field.Name}}*: {{if $field.IsArr}}array[0..{{Dec $field.ArrLength}}, {{end}}{{covType $field.Type}}{{if $field.IsArr}}]{{end}}
    {{end}}
  {{else if eq $el.Kind "enum"}}
##
  {{$el.Name}}* = enum
    {{range $enum := $el.Enums}}
    {{$enum.Name}}{{if not (isEmpty $enum.Value)}} = {{$enum.Value}}{{end}},{{if not (isEmpty $enum.Comment)}} # {{$enum.Comment}}{{end}}
    {{end}}
  {{else if eq $el.Kind "set"}}
##
  {{$el.Name}}* = set[{{$el.SetOf}}]
  {{else}}
##
  {{$el.Name}}* = {{covType $el.Type}}
  {{end}}
{{end}}


{{/* 基础类型定义，只找arch的 */}}

{{range $tidex, $el := .BaseTypes}}
{{if not (isEmpty $el.FieldArch)}}
  {{if eq $el.Kind "struct"}}
##
when defined({{$el.FieldArch}}):
  type
    {{$el.Name}}{{if ne $el.Name "TDWordFiller"}}*{{end}} = object
    {{range $field := $el.Fields}}
      {{covKeyword $field.Name}}{{if not (or (eq $field.Name "_UnusedMsg") (eq $field.Type "TDWordFiller"))}}*{{end}}: {{if $field.IsArr}}array[0..{{Dec $field.ArrLength}}, {{end}}{{covType $field.Type}}{{if $field.IsArr}}]{{end}}
    {{end}}
  {{end}}
{{end}}
{{end}}

##
when defined(linux):
  type
    PGdkWindow* = pointer
    TXId* = usize
    PGtkFixed* = pointer
##
##
when defined(macos):
  type
    MyNSWindow* = pointer
##



{{/* 事件定义 */}}
##
type
{{range $el := .Events}}
  {{if isEmpty $el.ReDefine}}
##
  {{$el.Name}}* = proc({{range $idx, $ps := $el.Params}}{{if gt $idx 0}}, {{end}}{{$ps.Name}}: {{if isObject $ps.Type}}pointer{{else}}{{if $ps.IsVar}}var {{end}}{{covType $ps.Type}}{{end}}{{end}}) {.nimcall.}
  {{else}}
##
  {{$el.Name}}* = {{$el.ReDefine}}
  {{end}}
{{end}}


{{/* 常量定义 */}}
##
const
{{range $el := .Consts}}
  {{if not (isEmpty $el.Name)}}
  {{$el.Name}}* = {{$el.Value}}{{if not (isEmpty $el.Value2)}} + {{$el.Value2}}{{end}}{{if not (isEmpty $el.Comment)}} # {{$el.Comment}}{{end}}
  {{else}}
##
  # {{$el.Comment}}
  {{end}}
{{end}}