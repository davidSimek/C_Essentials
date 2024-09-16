# Bug-Catcher
```
-std=c11                 # Specify C standard version (e.g., c11, c99, gnu11)
-Wall                    # Enable most warning messages
-Wextra                  # Enable extra warning messages not covered by -Wall
-Werror                  # Treat all warnings as errors
-pedantic                # Enforce strict language standards
-Wshadow                 # Warn when a variable declaration shadows another variable
-Wcast-align             # Warn about potential alignment issues when casting pointers
-Wconversion             # Warn about implicit type conversions that may change a value
-Wdouble-promotion       # Warn if a float is promoted to double implicitly
-Wnull-dereference       # Warn if a null pointer dereference is detected
-Wstrict-overflow        # Warn about expressions that might generate undefined overflow
-D_FORTIFY_SOURCE=2 \    # Enable additional compile-time checks for buffer overflows
```
> **_NOTE:_**  These might have dependencies based on your system, but are extremely powerful, so I would strongly suggest to use them.
```
-fsanitize=address      # Use AddressSanitizer to detect memory errors like buffer overflows
-fsanitize=undefined    # Use UndefinedBehaviorSanitizer to catch undefined behavior
-fsanitize=leak         # Use LeakSanitizer to detect memory leaks
```
