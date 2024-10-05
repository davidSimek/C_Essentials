# Test
Library, that makes testing a bit easier. You can use function defined in this library "yourself" or let predefined macros use them for you.
## Log types
Logs have 2 types. `OK`, `ERROR`

```c
typedef enum {
    OK,
	ERROR,
} log_type;
```

## Functions
You can write log into STDOUT using `cess_log` function  h
- `void cess_log(log_type type, char* message)`

To write to different file, you can use `cess_log_fd` or `cess_log_FILE` functions. Of course these files have to be opened!!!  
- `void cess_log_fd(log_type type, char* message, int fd)`  
  - log into file described by file descriptor
- `void cess_log_FILE(log_type type, char* message, FILE* file)`  
  - log into file described by FILE*

## Macros
Macros resolve into conditions, that log into STDOUT based on result
- `CESS_EQUALS(first_value, second_value, description)`
  - pass if values equal
- `CESS_EQUALS_DEREF(first_pointer, second_pointer, bytes, description)`
  - pass if n bytes of data under pointers equal
- `CESS_NOT_NULL(pointer, description`
  - pass if pointer in not equal to NULL
- `CESS_GREATER_THAN(first_value, second_value, description)`
  - pass if first value is greater than second one
- `CESS_LESS_THAN(first_value, second_value, description)`
  - pass if firest value is smaller than second one
- `CESS_TEST_RESULTS()`
  - print results of test
- `CESS_RESET_RESULTS()`
  - sets results to 0

## Example
```c
int main(void) {
    
}
```
