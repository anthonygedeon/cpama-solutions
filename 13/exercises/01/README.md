## Exercise
The following function calls supposedly write a single newline character, but some are incorrect. Identify which calls don't work and explain why.

(a) printf("%c", '\n');
(b) printf("%c", "\n");
(c) printf("%s", '\n');
(d) printf("%s", "\n");
(e) printf('\n');
(f) printf("\n");
(g) putchar('\n');
(h) putchar("\n");
(i) puts('\n');
(j) puts("\n");
(k) puts("");

## Solution
(b) %c is expecting a character but `"\n"` is a `char *`
(c) %s is expecting a `char *` but the argument is type `char`
(e) The prototype for `printf` is expecting a `char *`
(h) Fails because you're passing a `char *`
(i) Fails because it's expecting a `char *`

