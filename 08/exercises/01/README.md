## Exercise 8.1.1
We discussed using the expression sizeof (a) / sizeof (a [0] ) to calculate the number of elements in an array. The expression sizeof (a) / sizeof ( t ), where t is the type of a’s elements, would also work, hut it’s considered an inferior technique. Why?

## Solution
Changing the type for the array would be problematic because you would have to change it in two places. One in 
the array declaration and in the macro definition
