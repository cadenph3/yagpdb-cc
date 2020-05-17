{{$chan := 693593756926214165}}
{{$count := (.Guild.MemberCount)}}
{{$topic := joinStr " " "Welcome to our Discord server! | Member Count:" $count }}
{{editChannelTopic $chan $topic}}
