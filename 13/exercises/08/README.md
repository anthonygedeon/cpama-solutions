### Exercise 13.08
What will be the value of the string `str` after the following statements have
been executed?

## Solution
The first statement is executed and `str` is "tire-bouchon"
The second statement is executed and `str` becomes `tired-or-wi\0` because strcpy added the `\0` terminator which cut off `bouchon` and finally, `strcat` appends `"red?"` which writes to the string replacing the `\0` and adding a `\0` to the end of `str`

=> "tired-or-wired"
