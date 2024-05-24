## Exercise 7.1.12
Suppose that i is a variable of type int. f is a variable of type float, and d is a variable of type double. Explain what conversions take place during the execution of the following statement:

d = i + f;
## Solution
i is promoted to float and since the right operand is also a float, the expression is float until the `=` operator converts it to a double

The expression on the right side is always converted
to the type of the variable on the left side. This converts the float to a double.
