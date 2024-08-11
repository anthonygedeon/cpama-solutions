### Exercise 16.04

Repeat Exercise 3, but this time using a *type* named `Complex`.

### Solution
(a)
```c
typedef struct {
    double real;
    double imaginary;
} complex;
```

(b)
```c
typedef struct {
    double real;
    double imaginary;
} complex;

int main(void) {
    complex c1;
    complex c2;
    complex c3;
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
    complex c1, c2, c3;
    return 0;
}
```

(c)
```c
complex make_complex(double real, double imaginary) {
    return (complex){ real, imaginary };
}
```
or
```c
complex make_complex(double real, double imaginary) {
    complex c = { real, imaginary };
    return c;
}
```
(d)
```c
complex add_complex(complex c1, complex c2) {
    return (complex){ c1.real + c2.real, c1.imaginary + c2.imaginary };
}
```
or
```c
complex add_complex(complex c1, complex c2) {
    complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}
```
