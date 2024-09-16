# Makefile
This module includes:
- 2 Makefile templates
- 3 flag guides

## Templates

### Makefile_debug_release
This Makefile allows you to easily set up the project build system.  
You need to specify:
- Compiler flags for the debug configuration
- Compiler flags for the release configuration
- Source directory (directory containing `.c` files)

You can build it with:
- `make debug`             -> Debug build
- `make` or `make release` -> Release build

### Makefile_test_debug_release
This Makefile allows you to easily set up the project build system.  
You need to specify:
- Compiler flags for the test configuration
- Compiler flags for the debug configuration
- Compiler flags for the release configuration
- Source directory (directory containing `.c` files)

You can build it with:
- `make test`              -> Test build
- `make debug`             -> Debug build
- `make` or `make release` -> Release build

**Note**: You must have a `test.c` file containing a `main` function in the source directory.

## Flag Guides

This module also includes three guides that provide useful information about various compiler flags:

- **bug_catcher.md**: Guides you on how to use flags that help catch errors and bugs during compilation.
- **performance.md**: Explains flags that can optimize and improve the performance of your builds.
- **security.md**: Details flags that can enhance the security of your compiled code.


