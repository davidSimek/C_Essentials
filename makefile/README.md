# Makefile
This module includes:
- 2 Makefile templates
- 4 flag guides

## Templates
### Program template
`Makefile`, that allows you to define your release, debug and test flags and build for Linux and Windows. It also provides `PLATFORM_LINUX` or `PLATFORM_WINDOWS` preprocessor constants for you.

#### adapt for your needs
You can or/and have to change some values in template to make it work.
- LDFLAGS (linking flags) for both Windows and Gnu/Linux build
- SRC_DIR (directory containing you source files)
- PROGRAM_NAME
- += LDFLAGS shared for both platforms
- RELEASE_FLAGS
- DEBUG_FLAGS
- TEST_FLAGS
- CC (not recommended, untill you know consequences)
#### build
To build, you can supply 2 arguments
- B (build)
    - R (release)
    - D (debug)
    - T (test)
- P (platform)
    - L (Gnu/Linux)
    - W (Windows)
You can see examples and usecase in Makefile itself.
If it doesn't build, but should, I recomment using `-B` flag for make.

### Library template
!!! in progress

## Flag Guides

This module also includes three guides that provide useful information about various compiler flags:

- **always_use.md**: for every build
- **bug_catcher.md**: debugging
- **performance.md**: optimization
- **security.md**: exec format, stack protection ...
