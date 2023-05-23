#include <stdio.h>

#define debug_print(num)                                          \
    _Generic((num),                                               \
        int: printf("%s: %d\n", #num, num),                       \
        float: printf("%s: %f\n", #num, num),                     \
        double: printf("%s: %lf\n", #num, num),                   \
        char: printf("%s: %c\n", #num, num),                      \
        unsigned int: printf("%s: %u\n", #num, num),              \
        short int: printf("%s: %hd\n", #num, num),                \
        long int: printf("%s: %ld\n", #num, num),                 \
        long long int: printf("%s: %lld\n", #num, num),           \
        unsigned short int: printf("%s: %hu\n", #num, num),       \
        unsigned long int: printf("%s: %lu\n", #num, num),        \
        unsigned long long int: printf("%s: %llu\n", #num, num),  \
        signed char: printf("%s: %hhd\n", #num, num),             \
        unsigned char: printf("%s: %hhu\n", #num, num),           \
        char *: printf("%s: %s\n", #num, num),                    \
        void *: printf("%s: %p\n", #num, num),                    \
        int *: printf("%s: %p\n", #num, num),                     \
        float *: printf("%s: %p\n", #num, num),                   \
        double *: printf("%s: %p\n", #num, num),                  \
        long int *: printf("%s: %p\n", #num, num),                \
        long long int *: printf("%s: %p\n", #num, num),           \
        short int *: printf("%s: %p\n", #num, num),               \
        unsigned int *: printf("%s: %p\n", #num, num),            \
        unsigned short int *: printf("%s: %p\n", #num, num),      \
        unsigned long int *: printf("%s: %p\n", #num, num),       \
        unsigned long long int *: printf("%s: %p\n", #num, num),  \
        signed char *: printf("%s: %p\n", #num, num),             \
        unsigned char *: printf("%s: %p\n", #num, num),           \
        void **: printf("%s: %p\n", #num, num),                   \
        char **: printf("%s: %p\n", #num, num),                   \
        float **: printf("%s: %p\n", #num, num),                  \
        double **: printf("%s: %p\n", #num, num),                 \
        long int **: printf("%s: %p\n", #num, num),               \
        long long int **: printf("%s: %p\n", #num, num),          \
        short int **: printf("%s: %p\n", #num, num),              \
        unsigned int **: printf("%s: %p\n", #num, num),           \
        unsigned short int **: printf("%s: %p\n", #num, num),     \
        unsigned long int **: printf("%s: %p\n", #num, num),      \
        unsigned long long int **: printf("%s: %p\n", #num, num), \
        signed char **: printf("%s: %p\n", #num, num),            \
        unsigned char **: printf("%s: %p\n", #num, num),          \
        void ***: printf("%s: %p\n", #num, num),                  \
        char ***: printf("%s: %p\n", #num, num),                  \
        float ***: printf("%s: %p\n", #num, num),                 \
        double ***: printf("%s: %p\n", #num, num),                \
        int ***: printf("%s: %p\n", #num, num))

// =========== For C++ ===========
// bool: printf("%s: %d\n", #num, num),\
// bool *: printf("%s: %p\n", #num, num),\
// std::string: printf("%s: %s\n", #num, num),\
// std::string *: printf("%s: %p\n", #num, num)

#define DEBUG_PRINT1(a) \
    debug_print(a);

#define DEBUG_PRINT2(a, ...) \
    debug_print(a);          \
    debug_print(__VA_ARGS__)

#define DEBUG_PRINT3(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT2(__VA_ARGS__)

#define DEBUG_PRINT4(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT3(__VA_ARGS__)

#define DEBUG_PRINT5(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT4(__VA_ARGS__)

#define DEBUG_PRINT6(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT5(__VA_ARGS__)

#define DEBUG_PRINT7(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT6(__VA_ARGS__)

#define DEBUG_PRINT8(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT7(__VA_ARGS__)

#define DEBUG_PRINT9(a, ...) \
    debug_print(a);          \
    DEBUG_PRINT8(__VA_ARGS__)
#define DEBUG_PRINT10(a, ...) \
    debug_print(a);           \
    DEBUG_PRINT9(__VA_ARGS__)

int main()
{
    // ================== Test ==================
    int i1 = 0;
    float f1 = 10.5;
    double d1 = 1.1;
    char c1 = 'a';
    char *str1 = "I did it!";
    int *p1 = &i1;
    DEBUG_PRINT6(i1, f1, d1, c1, str1, p1);

    return 0;
}