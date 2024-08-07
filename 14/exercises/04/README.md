### Exercise 14.04

For each of the following macros, give an example that illustrates a problem
with the macro and show how to fix it.

(a) `#define AVG(x,y) (x-y)/2`  
(b) `#define AREA(x,y) (x)*(y)`

### Solution

(a) The `AVG` suffers from expressions being passes as arguments i.e `AVG(1*5, 2-1)`
    Fix: `#define AVG(x,y) ((x)-(y))/2)`

(b) The expression needs to be grouped into `()` or an operator might have a higher precedence
    Fix: `define AREA(x, y) ((x)*(y))`
