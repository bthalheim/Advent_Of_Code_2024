# Advent of Code 2024 - VIM Day 2



## Part 1 


```

:%s/\v (\d+) @=/ \1,\1/g⟨Enter⟩
:%s/\v(\d+) (\d+)/\=submatch(2)-submatch(1)/g⟨Enter⟩
:se isk+=-⟨Enter⟩
:g/\v[04-9]|\d\d|.*<-&.*<\d/d⟨Enter⟩
⟨Ctrl+G⟩

```








## Part 2 







```







```








