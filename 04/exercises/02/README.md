## Exercise 4.1.2
If i and j are positive integers, does (- i) / j always have the same value as - (i/j ) ? Justify your answer.

## Solution
Yes and No, It depends entirely on your compiler. If you're using c89 then could get two different answers but c99 will give you a truncated value so -9/7 will be -1.2 but in c99 this will be -1 
