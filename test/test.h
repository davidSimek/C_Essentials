            #ifndef CESS_TEST
#define CESS_TEST

# include <string.h>
# include <stdio.h>

/* Testing module of C essentials
 *
 * This module is made mainly to make testing easier. Most of logic
 * still happens on user side and you are responsible for results you
 * get. It is meant to be used in singlethreaded testing. Ideally in
 * combination with testing part of makfile module of C Essentials.
 */

extern int cess_test_error_count;
extern int cess_test_ok_count;

typedef enum {
	OK,
	ERROR
} log_type;

/* -----------------
 * Assertions macros
 * ----------------- 
 * - print result into stdout
 * - either pass (OK) or fail (ERROR)
 * - increase either cess_test_error_count or cess_test_ok_count by 1
 * - use CESS_TEST_RESULTS() to see final result and reset error/ok counts
 */

// Compare value with == operator
#define CESS_EQUALS(first_value, second_value, description) do {\
    if ((first_value) == (second_value)) {	\
        cess_log(OK, (description));		\
        ++cess_test_ok_count;				\
    } else {								\
        cess_log(ERROR, (description));		\
        ++cess_test_error_count;			\
    }										\
} while (0)

// Dereference and compare n bytes
#define CESS_EQUALS_DEREF(first_pointer, second_pointer, bytes, description) do {\
        if (memcmp((first_pointer), (second_pointer), (bytes)) == 0) {	\
        cess_log(OK, (description));								\
        ++cess_test_ok_count;										\
	} else {														\
        cess_log(ERROR, (description));								\
        ++cess_test_error_count;									\
    }                                                               \
} while (0)

// Ensure value is not NULL
#define CESS_NOT_NULL(pointer, description) do {\
    if ((pointer) == NULL) {                       \
        cess_log(ERROR, (description));        \
        ++cess_test_error_count;               \
    } else {                                   \
        cess_log(OK, (description));           \
        ++cess_test_ok_count;                  \
    }                                          \
} while (0)

// Ensure first_value is greater than second_value
#define CESS_GREATER_THAN(first_value, second_value, description) do {\
    if ((first_value) > (second_value)) {                            \
        cess_log(OK, (description));                                 \
        ++cess_test_ok_count;                                        \
    } else {                                                         \
        cess_log(ERROR, (description));                              \
        ++cess_test_error_count;                                     \
    }                                                                \
} while (0)

// Ensure first_value is smaller than second_value
#define CESS_LESS_THAN(first_value, second_value, description) do {\
    if ((first_value) < (second_value)) {                          \
        cess_log(OK, (description));                               \
        ++cess_test_ok_count;                                      \
    } else {                                                       \
        cess_log(ERROR, (description));                            \
        ++cess_test_error_count;                                   \
    }                                                              \
} while (0)

// Print results of test
#define CESS_TEST_RESULTS(test_name) do {\
    cess_test_results(test_name);        \
} while (0)

// Reset test result values
#define CESS_RESET_RESULTS() do{\
    cess_test_error_count = 0;	\
	cess_test_ok_count = 0;		\
} while (0)
/* -----------------
 * Logging functions
 * -----------------
 * - expects destination file to be opened
 */

void cess_log(log_type type, const char* message);
void cess_log_fd(log_type type, const char* message, int fd);
void cess_log_FILE(log_type type, const char* message, FILE* file);
void cess_test_results(const char* test_name);
#endif
