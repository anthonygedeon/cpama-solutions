### Exercise 16.05

Write the following functions, assuming that the `date` structure contains three
members: `month`, `day` and `year` (all of type `int`).

(a) `int day_of_year(struct date d);`

Returns the day of the year (an integer between 1 and 366) that corresponds to
the date `d`.

(b) `int compare_dates(struct date d1, struct date d2);`

Returns -1 if `d1` is an earlier date than `d2`, +1 if `d1` is a later date than
`d2`, and 0 if `d1` and `d2` are the same.

### Solution
See 5.c
