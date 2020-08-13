/*
    The code is automatically generated by the genBind tool.
    Author: ying32
    https://github.com/ying32
*/
##
#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(dead_code)]
#![allow(non_upper_case_globals)]
##
##


{{/* WM消息常量定义 */}}
##

{{$buff := newBuffer}}

{{range $el := .Messages}}
    {{if not (isEmpty $el.Name)}}

        {{$buff.Write "pub const " $el.Name}}

        {{if inStrArray $el.Name "LBN_ERRSPACE" "CBN_ERRSPACE"}}
            {{$buff.Write ": i32"}}
        {{else}}
            {{$buff.Write ": u32"}}
        {{end}}
        {{$buff.Write " = "}}

        {{$buff.Write $el.Value}}
        {{if not (isEmpty $el.Value2)}}
            {{$buff.Write " + " $el.Value2}}
        {{end}}
        {{$buff.Write ";"}}
        {{if not (isEmpty $el.Comment)}}
            {{$buff.Write " // " $el.Comment}}
        {{end}}
        {{$buff.Writeln}}

    {{else}}
        {{$buff.Writeln "##"}}
        {{$buff.Writeln "// " $el.Comment}}
    {{end}}
{{end}}


{{$buff.ToStr}}

