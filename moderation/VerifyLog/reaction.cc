{{/*Config Options*/}}
 
{{$msgID :=  708538517604532516}}
{{$oe := "✅"}}
{{$MemberRole := "Members"}}
 
{{$log := 703043667321028688}}
 
{{/*Code*/}}
 
{{$RID := .ReactionMessage.ID}}
{{$UID := (toString (.User.ID)) }}
{{$USN := (toString (.User.String))}}
{{$msg := "User has verified their account"}}
{{$avatar := (.User.AvatarURL "32")}}
{{if (and (.ReactionAdded) (eq $RID $msgID) (eq .Reaction.Emoji.Name $oe))}}
	{{if not (hasRoleName $MemberRole)}}
		{{ $embed := cembed "image" (sdict "url" $avatar)  "fields" (cslice  (sdict "name" "User ID:" "value" $UID "inline" true)  (sdict "name" "Username:" "value" $USN "inline" true) (sdict "name" "Content" "value" $msg "inline" false)) "color" 9021952 "timestamp"  currentTime }}
		{{sendMessageNoEscape $log $embed}}
	{{end}}
{{end}}
