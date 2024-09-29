# Debug
flags to make debugging easier

## debugging information
Allows you to debug executable binary. Most usefull for debugging software like gdb. Largely affects execution speed.
### notation
`-g<level>`
### example
- `-g0` no debug info
- `-g1` minimal debug info
- `-g`  default debug info
- `-g3` maximal debug info


## warning flags
Affects build logs. Makes it easier to catch issues while building. I recommend using these on every single debug build.
### notation
`-W<something>`
### example
- `-Werrors` treats warnings like errors
- `-Wpedantic` gives you strict warnings based on ISO C for your c version
- `-Wall` enables all warnings (those which are disabled on default)
- `-Wextra` enables extra warnings


## checks for std string functions
Adds additional checks for functions like `memcpy`, `memset`, `strncpy` ...
### notation
`-D_FORTIFY_SOURCE=<mode>`
### example
- `-D_FORTIFY_SOURCE=1` allow compile time checks
- `-D_FORTIFY_SOURCE=2` allow compile and runtime checks


## sanitization
Finds even more problems gcc itself can't. Might require installing additional dependencies, slows down compilation. Really worth it, if you need your code to be safe. Might add additional runtime cost.
### notation
`-fsanitize=<mode/subject>`
### example
- `-fsanitize=address` detects memory errors
- `-fsanitize=undefined` catches undefined behaviour


