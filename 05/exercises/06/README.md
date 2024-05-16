## Exercise 5.1.6
Is the following if statement legal? 

```
if (n == 1-10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when n is equal to 5?

## Solution
It is legal, the `-` has higher precedence so it is executed first.
`5 == -9` will be `false` or `0`
