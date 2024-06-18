## Exercise 9.2.7
Suppose that the function f has the following definition: int f (int a, int b) { ... }

Which of the following statements are legal? (Assume that i has type int and x has type double.)

(a) i = f (83, 12);
(b) x = f (83, 12);
(c) i = f (3.15, 9.28);
(d) x = f (3.15, 9.28);
(e) f (83, 12);

## Solution
(a) legal, a = 83 and b = 12 which are valid ints and i accepts an int as the return type
(b) legal, a = 83 and b = 12 which are valid ints and x will convert the return type to a double
(c) legal,
(d) legal,
(e) legal, but discards the returned value
