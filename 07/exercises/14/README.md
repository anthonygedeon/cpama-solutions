## Exercise 7.1.14
Does the following statement always compute the fractional part of f correctly (assuming that f and frac_part are float variables)?

frac_part = f - (int) f;

If not. what’s the problem?

## Solution
No, consider the following:
```c
int main(void) {
    float f = 123.123456;
    float frac_part = f - (int)f;
    printf("%f\n", frac_part);
    return 0;
}
```
This will print out .123459, this is due to how floating-point work in CPU's

