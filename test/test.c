#include "test.h"

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int cess_test_error_count;
int cess_test_ok_count;

#ifdef PLATFORM_WINDOWS
#include <windows.h>
#define RED() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY)
#define GREEN() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define RESET() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE)
#elif PLATFORM_LINUX
#define RED() printf("\033[31m")
#define GREEN() printf("\033[32m")
#define RESET() printf("\033[0m")
#else
#define RED()
#define GREEN()
#define RESET()
#endif

void cess_log(log_type type, const char* message) {
    printf("[ ");
    if (type == OK) {
        GREEN();
        printf("OK");
        RESET();
    } else {
        RED();
        printf("ERROR");
        RESET();
    }
    printf(" ] %s\n", message);
}

void cess_test_results(const char* test_name) {
    printf("┏━━ %s ", test_name);
    if (cess_test_error_count > 0) {
        RED();
        printf("FAILED");
        RESET();
    } else {
        GREEN();
        printf("PASSED");
        RESET();
    }
    printf("\n┃ passed: %d\n┃ failed: %d\n\n", cess_test_ok_count, cess_test_error_count);
}

void cess_log_fd(log_type type, const char* message, int fd) {
    if (type == OK) {
        write(fd, "[ OK ] ", 7);
        write(fd, message, strlen(message));
        write(fd, "\n", 1);
    } else {
        write(fd, "[ ERROR ] ", 10);
        write(fd, message, strlen(message));
        write(fd, "\n", 1);
    }
}

void cess_log_FILE(log_type type, const char* message, FILE* file) {
    fprintf(file, "[ ");
    if (type == OK) {
        fprintf(file, "OK");
    } else {
        fprintf(file, "ERROR");
    }
    fprintf(file, " ] %s\n", message);
}
