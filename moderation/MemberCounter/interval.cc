{{$chan := 693593756926214165}}
{{$count := (.Guild.MemberCount)}}
{{$topic := joinStr " " "play.jailsmc.net | buy.jailsmc.net | Member Count:" $count }}
{{editChannelTopic $chan $topic}}
