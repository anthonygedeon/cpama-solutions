## Exercise 5.1.5
Is the following if statement legal? 
```
if (n >= 1 <= 10 )
    printf("n is between 1 and 10\n");
```

If so, what does it do when n is equal to 0?

## Solution
It is legal, but not the way people expect. The programmer was thinking that 
this is a good way to determine if `1` is in between n and 10. If n = 0 then
the result would be 0 as in `false` and then it will be compared against 10. In other words:

`((0 >= 1) <= 10)`
`(0 <= 10)`
`(1)`

What we would want to do instead if the following:
```c
if (n >= 1 && n <= 10) {
    printf("n is always be inbetween 1 and 10 inclusive");
}
```
