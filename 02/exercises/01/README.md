### Exercise 2.01
Create and run Kernighan and Ritchie's famous "hello, world" program:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it
go away?


### Solution
No warning detected when compiled with c99
```bash
gcc -pedantic -Wall -W -std=c99 1.c
```

A warning message was shown when compiled with c89
```bash
gcc -pedantic -Wall -W -std=c89 1.c
```
Output:
```
1.c: In function ‘main’:
1.c:5:1: warning: control reaches end of non-void function [-Wreturn-type]
    5 | }
      | ^
```

