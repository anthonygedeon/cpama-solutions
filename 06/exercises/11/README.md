## Exercise 6.1.11
What output does the following program fragment produce?

```
int sum = 0;

for (i = 0; i < 10; i++) { 
    if (i % 2) 
        continue; 
    sum += i;
}

printf("%d\n", sum);
```
## Solution
sum = 0 + 2 + 4 + 6 + 8 = 20
