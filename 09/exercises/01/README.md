## Exercise 
The following function, which computes the area of a triangle, contains two errors. Locate the errors and show how to fix them. {Hint: There are no errors in the formula.)

```c
double triangle_area(double base, height) 
double product;
{
    product = base * height; 
    return product / 2;
}
```

## Solution
1. provide a type for the height paramter
2. Remove the declaration of `product` and put it in the function body
3. EXTRA: initialize product to the product of base and height

See here:
```c
double triangle_area(double base, double height) {
    double product = base * height;
    return product / 2;
}
```
