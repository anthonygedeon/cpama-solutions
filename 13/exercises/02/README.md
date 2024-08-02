## Exercise
Suppose that p has been declared as follows: 
```
char *p = "abc";
```
Which of the following function calls are legal? Show the output produced by each legal call, and explain why the others are illegal.

(a) putchar(p);
(b) putchar(*p);
(c) puts (p) ;
(d) puts(*p) ;

## Solution
(a) Illegal because `putchar` is expecting an int and p holds an address
(b) Legal because the dereference is type `char` so it will print `a` => a
(c) Legal because the prototype of `puts` expects a `char *` => abc\n
(d) Illegal because the deference will be the type `char`
