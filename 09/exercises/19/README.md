## Exercise 9.6.19
Consider the following “mystery" function:

void pb(int n) {
    if (n ! = 0) {
        pb(n / 2 );
        putchar('O' + n % 2);
    }
}

Trace the execution of the function by hand. Then write a program that calls the function, passing it a numher entered by the user. What does the function do?

## Solutuion
pb(5);
    pb(2);
        pb(1);
            pb(0); => '0'
        pb(1);     => '1'
    pb(2);         => '0'
pb(5);             => '1'

Given a number, `pb` converts base 10 to base 2
