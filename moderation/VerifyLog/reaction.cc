{{/*Config Options*/}}

{{$msgID := 708538517604532516}}
{{$oe := "✅"}}
{{$log := 703043667321028688}}
{{$MemberRole := "Members"}}

{{/*Code*/}}

{{$RID := .ReactionMessage.ID}}
{{$user := joinStr " " (toString (.User.ID)) "aka" (.User.String)}}
{{if (and (.ReactionAdded) (eq $RID $msgID) (eq .Reaction.Emoji.Name $oe))}}
	{{if not (hasRoleName $MemberRole)}}

{{/*If you wish to edit the log message, do so here*/}}
  {{$msg := "Member has verified their account"}}
	{{ $embed := cembed "title" $user "description" $msg "color" 9021952 "timestamp"  currentTime }}
	

  {{$msgID := sendMessageNoEscapeRetID $log $embed}}
	{{end}}
{{end}}
