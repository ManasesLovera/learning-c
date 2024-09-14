# Learning C language

[learn-c.org](https://www.learn-c.org/)

### C has several types of variables, but there are a few basic types:

- Integers - whole numbers which can be either positive or negative. Defined using `char`, `int`, `short`, `long` or `long long`.
- Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
- Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
- Structures - will be explained later, in the Structures section.

### C does not have a boolean type. 
Usually, it is defined using the following notation:

```c
#define BOOL char
#define FALSE 0
#define TRUE 1
```

_