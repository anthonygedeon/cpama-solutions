### Exercise 2.02
Consider the following program:

```c
#include <stdio.h>

int main(void) {
    printf("Parkinson 1 s Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}
```

(a) Identify the directives and statements in this program.
(b) What output does the program produce?

### Solution
(a)

1. 
```c
#include <stdio.h>
```
2. 
```c
printf("Parkinson 1 s Law:\nWork expands so as to ");
```
3. 
```c
printf("fill the time\n");
```
4. 
```c
printf("available for its completion.\n");
```
5. 
```c
return 0;
```

(b)
```
    Parkinson 1 s Law:
    Work expands so as to fill the time
    available for its completion.
```

And then sends a status code of `0` to the OS
