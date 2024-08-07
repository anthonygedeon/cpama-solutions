### Exercise 14.07

Let `GENERIC_MAX` be the following macro:

```c
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
```

(a) Show the preprocessor's expansion of `GENERIC_MAX(long)`.  
(b) Explain why `GENERIC_MAX` doesn't work for basic types such as `unsigned
long`.  
(c) Describe a technique that would allow us to use `GENERIC_MAX` with basic
types such as `unsigned long`. *Hint:* Don't change the definition of
`GENERIC_MAX`.

### Solution
(a)
```c
long long_max(long x, long y) 
{
    return x > y ? x : y;
}
```

(b) because `unsigned long` contains a space

(c) create an alias for `unsigned long` such as `typedef unsigned long u_long`

