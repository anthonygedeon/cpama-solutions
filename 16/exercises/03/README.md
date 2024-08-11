### Exercise 16.03

(a) Show how to declare a tag named `complex` for a structure with two members,
`real` and `imaginary`, of type `double`.

(b) Use the `complex` tag to declare variables named `c1`, `c2` and `c3`.

(c) Write a function named `make_complex` that stores its two arguments (both of
type `double`) in a `complex` structure, then returns the structure.

(d) Write a function named `add_complex` that adds the corresponding members of
its arguments (both `complex` structures), then returns the result (another
`complex` structure).

### Solution
(a)
```c
struct complex {
    double real;
    double imaginary;
}
```

(b)
```c
struct complex {
    double real;
    double imaginary;
} 

int main(void) {
    struct complex c1;
    struct complex c2;
    struct complex c3;
    return 0;
}
```
or 
```c
struct complex {
    double real;
    double imaginary;
} 

int main(void) {
    struct complex c1, c2, c3;
    return 0;
}
```

(c)
```c
struct complex make_complex(double real, double imaginary) {
    return (struct complex){ real, imaginary };
}
```
or
```c
struct complex make_complex(double real, double imaginary) {
    struct complex c = { real, imaginary };
    return c;
}
```
(d)
```c
struct complex add_complex(struct complex c1, struct complex c2) {
    return (struct complex){ c1.real + c2.real, c1.imaginary + c2.imaginary };
}
```
or
```c
struct complex add_complex(struct complex c1, struct complex c2) {
    struct complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
```
