## Exercise 
Suppose that high, low. and middle are all pointer variables of the same type, and that low and high point to elements of an array. Why is the following statement illegal, and how could it be fixed?

middle = (low + high) / 2;

## Solution
The statement above is illegal adding two pointers make no sense, `low` and `high` are addresses and adding them together will only give you an address that is too high.

i.e

```c
    int a[7] = { 0, 1, 2, 3, 4, 5, 6 };
    int* low = a, *high = a + 6;
    int* middle = ((high - low) / 2) + low; 
```
