VIM Solves For Day 1
===============================================



```
:sor n{Enter}
{Ctrl+V}Gwhd@:P
:%s/\v(\d+)\s+(\d+)/\=submatch(1)-submatch(2){Enter}
:%s/^-*/+{Enter}
vipJ0C{Ctrl+R)={Ctrl+R}-{Enter}{Esc}

```

+ Line 1: sort the first numerical column on the left and sorts. 

+ Line 2:
  + Swtich to Visual Block mode with the Ctrl+V
  + Capital G selects the to the end, since this is in block mode it selects the first column to the end of the file. 
  + w selects to the start of the next word
  + the h walks is back one
  + d yanks the text into register x
  + @: is a command to rerun the last ran ':' command. This means it will rerun the "sor n" to sort the column
  + The capital P will paste the text block before the cursor 

+ Line 3:
  + %s starts a find and replace on all lines 
  + \v triggers not having to escape special charachters in the vim regex
  + Capture the 2 colums split by whitespace, captures in submatches 
  + \= means to replace the text slected with and expression, in this case running the math on the 2 columns. 

+ Line 4:
  + %s starts a find and replace on all lines
  + replace   

+ Line 5: 








```

w⟨Ctrl+V⟩}dG2o⟨Esc⟩p:%s/ \+⟨Enter⟩
vip:sor|'<,'>!uniq -c⟨Enter⟩Gvip@:
:sor/\d /|%!uniq -Df1⟨Enter⟩:g/^/j⟨Enter⟩
:%s/\v(\d+) (\d+) (\d+).*/+\2*\1*\3⟨Enter⟩
vipJ0C⟨Ctrl+R⟩=⟨Ctrl+R⟩-⟨Enter⟩⟨Esc⟩


```






