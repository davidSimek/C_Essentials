# Memory library

This library should help you handle your memory.

I am personally frustrated from choosing, if I want to put X to data structures or allocators. That is why I will just put it into this single library. This library consists of just header file (for declarations) and c file (for deffinitions), because I think it is your thing how you want to compile it. I will include Makefile I would use though.

## style

### naming

I am not really bothered by long names of functions and I like to know what something does just from reading it, so I use very expressive names. If you are so oposed by using long name, maybe you should try out OpenGL.  

Each struct, and function uses 'cess_' prefix. cess stands for "c essentials".  

Everything that allocates continues with 'create', everything that deallocates continues with 'destroy'.  

Middle part is there to describe what it does.  

### handling

Every structure has its "handler" struct. This struct holds data needed for handling this structure.

### returns

Functions that allocate will return bool. Functions that deallocate return nothing.

## planned things

arena
dynamic array
shared pointer
