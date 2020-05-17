{{/*USER VARIABLES*/}}
{{$staff := "Staff"}}
{{$uCCID := 27}}

{{/*CODE*/}}
{{ $v := ""}}{{ $d := ""}}
{{$args:= (joinStr " " (slice .Args 1))}}

{{if hasRoleName $staff}}
	{{$temp := split $args (reFind " " $args)}}
	{{ $v :=  (index $temp 0)}}
	{{ $d := (index $temp 1)}}
	{{$silent := execAdmin "mute" $v "0" "You have been temporarily muted"}}
	{{$duration := toDuration $d}}
	{{scheduleUniqueCC (toInt $uCCID) nil $duration.Seconds 69 $v}}
	{{deleteTrigger 1}}
{{else}}
Do you look like staff?
{{sleep 5}}{{deleteResponse 1}}{{deleteTrigger 1}}
{{end}}
