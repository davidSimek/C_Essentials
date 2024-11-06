# C Essentials

C is a powerful language, but sometimes we wonder why some basic utilities aren't included in its standard library. **C Essentials** aims to fill this gap by providing a set of essential modules to make C development more convenient and efficient.

## makefile
### goal:
Aims to make building and initial setup as easy as copying Makefile and changing some variables in it for your needs. Provides you with way to build for Gnu/Linux and Windows platforms. Includes 3 build configurations. Release, Debug and Test. Test is special, because it uses its own main file `main_test.c`, which is dedicated to just run tests.
### includes:
- Makefile preset
  - in `$/makefile/Makefile_program`
  - Gnu/Linux & Windows
  - Relesase & Debug & Test
- compiler flag explanations
  - for each build
    - `$/makefile/always_use.md`
  - debuggin flags
    - `$/makefile/debug.md`
  - performance flags
    - `$/makefile/performance.md`
