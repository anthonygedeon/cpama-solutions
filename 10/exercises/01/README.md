## Exercise
The following program outline shows only function definitions and variable declarations,

```c
int a;

void f(int b) {
    int c;
}

void g(void) {
    int d; 
    {
        int e; 
    }
}

int main(void) {
    int f;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope:

(a) The f function

(b) The g function

(c) The block in which e is declared

(d) The main function

## Solution
(a) The f function
- static duration: a
- block/local: b, c

(b) The g function
- static: a
- block/local: d

(c) The block in which e is declared
- a, d

(d) The main function
- a, f
