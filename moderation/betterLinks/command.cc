{{/*Enter whitelisted domain name here */}}
{{$wl := "jailsmc.net"}}

{{$mCont := (.Message.Content)}}
{{$name := (.Channel.Name)}}
{{$nameEx := (reReplace `[^0-9]` $name "")}}
{{$norm := not $nameEx}}
{{if not $norm}}
{{else if (reFind $wl $mCont) }}
{{else}}
{{deleteTrigger 1}}
{{end}}
