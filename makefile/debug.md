# Debug
flags to make debugging easier

## `-g<level>`
Allows you to debug executable binary. Most usefull for debugging software like gdb. Largely affects execution speed.
#### example
- `-g0` no debug info
- `-g1` minimal debug info
- `-g`  default debug info
- `-g3` maximal debug info


## `-W<something>`
Affects build logs. Makes it easier to catch issues while building. I recommend using these on every single debug build.
#### example
- `-Werrors` treats warnings like errors
- `-Wpedantic` gives you strict warnings based on ISO C for your c version
- `-Wall` enables all warnings (those which are disabled on default)
- `-Wextra` enables extra warnings


## `-D_FORTIFY_SOURCE=<mode>`
Adds additional checks for functions like `memcpy`, `memset`, `strncpy` ...
#### example
- `-D_FORTIFY_SOURCE=1` allow compile time checks
- `-D_FORTIFY_SOURCE=2` allow compile and runtime checks


## `-fsanitize=<mode/subject>`
Finds even more problems gcc itself can't. Might require installing additional dependencies, slows down compilation. Really worth it, if you need your code to be safe. Might add additional runtime cost.
#### example
- `-fsanitize=address` detects memory errors
- `-fsanitize=undefined` catches undefined behaviour


