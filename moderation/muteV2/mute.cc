{{/*USER VARIABLES*/}}
{{$staff := "Staff"}}

{{/*CODE*/}}
{{ $v := ""}}{{ $d := ""}}
{{if hasRoleName $staff}}
{{$args := .Args}}
{{if gt (len $args) 0}}
	{{$temp := split $args  " "}}
	{{ $v := (index $temp 0)}}
	{{ $silent := (execAdmin "mute" $v "0" "You have been permanantly muted!")}}
	{{deleteTrigger 1}}{{deleteResponse 2}}
{{end}}
{{if gt (len $args) 1}}
	{{$temp := split $args  " "}}
	{{ $v := lower (index $temp 0)}}
	{{ $d := lower (index $temp 1)}}
	{{ $silent := (execAdmin "mute" $v "0" "You have been temporarily muted!")}}
 
{{deleteTrigger 1}}{{deleteResponse 2}}
{{end}}
 
{{else}}**:warning:Do You Look Like Staff? :x:**
{{sleep 5}}
{{deleteResponse 2}}
{{deleteTrigger 2}}
{{end}}
