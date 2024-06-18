## Exercise 9.3.9
What will be the output of the following program?

```c
#include <stdio.h>

void swap(int a, int b) ;

int main(void) {
    int i = 1 , j = 2; 
    swap(i, j) ;
    printf('i = %d, j = %d\n", i, j); 
    return 0;
}

void swap(int a, int b) {
    int temp = a; 
    a = b; 
    b = temp;
}
```

## Solution
The same output so `i = 1, j = 2` because the function is copying the values into the parameters `a` and `b`

In more detail, here's the same function in x86, let's see what it does and prove that our premise is correct
// TODO

