## Exercise 6.1.4
Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
```
(a) for (i = 0; i < 10; i++) ...

(b) for (i = 0; i < 10 ; ++i) ...

(c) for (i = 0; i++ <10; ) ...
```
## Solution
(c) On the first pass, `i` will become `1` instead of `0` because how a for-loop works
is that the it goes through these steps:

1. initialize
2. check condition
3. execute states in for-loop body
4. perform incrementation

then after it has done 1 round of these steps it will only perform
steps 2-4
