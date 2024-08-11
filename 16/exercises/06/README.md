### Exercise 16.06

Write the following function, assuming that the `time` structure contains three
members: `hours`, `minutes` and `seconds` (all of type `int`).

```c
struct time split_time(long total_seconds);
```

`total_seconds` is a time represented as the number of seconds since midnight.
The function returns a structure containing the equivalent time in hours (0-23),
minutes (0-59) and seconds (0-59).

### Solution
See 6.c