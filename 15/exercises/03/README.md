### Exercise 15.03

We saw that writing `#include <`*file*`>` instead of `#include "`*file*`"` may
not work if *file* is one that we've written. Would there by any problem with
writing `#inlude "`*file*`"` instead of `#include <`*file*`>` if *file* is a
system header?

### Solution
Yes, `<>` will check for header files in the `/usr/include` dir and won't look for any header files in the current directory or in other words, in your project
