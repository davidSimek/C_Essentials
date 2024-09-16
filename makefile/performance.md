# Performance
```
-O3                       # Enable maximum optimization level
-march=native             # Optimize for the host machine’s architecture
-funroll-loops            # Unroll loops to increase performance
-ftree-vectorize          # Enable vectorization to utilize SIMD instructions
-fomit-frame-pointer      # Omit frame pointer to free up a register
-fno-strict-aliasing      # Disable strict aliasing to allow more aggressive optimizations
-flto                     # Enable Link-Time Optimization for better performance
-pipe                     # Use pipes rather than temporary files for faster compilation
-fprofile-generate        # Generate profiling information for future optimizations
-Wl,-O1                   # Optimize linker performance and output
-Wl,--as-needed           # Link only needed libraries to reduce executable size
```
