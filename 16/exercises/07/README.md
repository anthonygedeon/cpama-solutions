### Exercise 16.07

Assume that the `fraction` structure contains two members: `numerator` and
`denominator` (both of type `int`). Write functions that perform the following
operations on fractions:

(a) Reduce the fraction `f` to lowest terms. *Hint:* To reduce a fraction to
lowest terms, first compute the greates common divison (GCD) of the numerator
and denominator. Then devide both the numerator and denominator by the GCD.  
(b) Add the fractions `f1` and `f2`.  
(c) Subtract the fraction `f2` from the fraction `f1`.  
(d) Multiply the fractions `f1` and `f2`.  
(e) Divide the fraction `f1` by the fraction `f2`.

The fractions `f`, `f1` and `f2` will be arguments of type `struct fraction`:
each function will return a value of type `struct fraction`. The fractions
returned by the functions in parts (b)-(e) should be reduced to lowest terms.
*Hint:* You may use the function from part (a) to help write the functions in
parts (b)-(e).

### Solution
See 7.c
