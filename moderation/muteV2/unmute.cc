{{/*USER VARIABLES*/}}
{{$staff := "Staff"}}

{{/*CODE*/}}
{{if .ExecData}}
	{{$v := .ExecData}}
	{{$silent := execAdmin "unmute" $v "You have been unmuted by a staff member.}}
{{else}}
	{{if hasRoleName $staff}}
	{{$v := .CmdArgs}}
	{{$silent := execAdmin "unmute" $v "You have been unmuted by a staff member."}}
	{{deleteTrigger 1}}
	{{else}}
	Do you look like staff?
	{{sleep 5}}{[deleteResponse 1}}{{end}}
{{end}}
