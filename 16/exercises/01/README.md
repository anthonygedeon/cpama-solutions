### Exercise 16.01

In the following declarations, the `x` and `y` structures have members named `x`
and `y`:

```c
struct { int x, y;} x;
struct { int x, y;} y;
```

Are these declarations legal on an individual basis? Could both declarations
appear as shown in a program? Justify your answer.

### Solution
The declaration is legal since the struct declaration list can be listed as `type identifier, identifier, ...` and the struct name can be `x` or `y` since you have to use the `.` to access the fields
