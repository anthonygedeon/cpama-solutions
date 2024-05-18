## Exercise 6.1.3
What output does the following for statement produce?

```
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) 
    printf("%d ", i);
```

## Solution
   i = 5, j = 4
5, i = 4, j = 3
4, i = 3, j = 2
3, i = 2, j = 1
2, i = 1, j = 0 

once `j` equals 0, the control expression turns to false immediately ignoring 
the value of `i`
