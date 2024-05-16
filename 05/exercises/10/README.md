## Exercise 5.1.10
What output does the following program fragment produce? (Assume that i is an integer variable.)
```
i = 1;

switch (i % 3) {
    case 0: printf("zero"); 
    case 1 : printf("one"); 
    case 2: printf("two");
}
```
## Solution
`onetwo` because `case 1` is matched but doesn't have a `break` so it falls through and executes the next statement.
