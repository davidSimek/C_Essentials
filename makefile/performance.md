# Performance
flags to use for higher performance

## binary optimization
Optimizes size and execution time of your binary.
#### notation
`-O<level>`
#### example
- `-O0` no optimization
- `-O3` high level of optimization, mostly for speed
- `-Oz` optimizes for small size of binary, even for cost of execution time
- `-Og` optimzes in a way, that still lets you comfortably debug


## pipes
Makes compilation faster by using pipes instead of files.
#### notation
`-pipe`


## architecture extensions
Makes code use extensions like AVX to make code faster. Might make binary unusable by other cpus.
#### notation
`-march=<cpu-type>`
#### example
- `-march=native` Uses extension supported by local cpu.
- `-march=<specific architecture>` This has very specific usecases and you probably don't need to care about this at all.


## linking optimization
Helps with "dead code" reduction and linking in general.
#### notation
`-flto` Has to be specified in all compilation steps.


## unrolling loops
Possibly reduces execution time by decreasing need for program to jump that much in short loops. Might increase binary size.
#### notation
`-funroll-loops` This allows copiler to unroll, if it feels like it will help with time. It doesn't force it!


