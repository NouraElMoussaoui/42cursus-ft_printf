# ft_printf

This project is an implementation of a subset of the C standard library function `printf`.

# Description

The `ft_printf` function is a variadic function that formats and prints its arguments, following a format string provided as an argument. It supports printing of different types of data like strings, integers, characters, and pointers.

## Functions
 * arg_type(va_list args, char c): This function takes a variable argument list and a character as parameters. The character is expected to be a format specifier (like 'c', 's', 'd', 'i', 'u', 'x', 'X', '%', 'p'). Depending on the format specifier, it fetches the next argument from the variable argument list using va_arg and prints it using the appropriate function. It returns the total number of characters printed.

 * ft_putchar(int c): This function prints a character. It's used when the format specifier is 'c' or '%'.

 * ft_putstr(char *s): This function prints a string. It's used when the format specifier is 's' or when printing the "0x" prefix for pointers.

 * ft_putnbr(int n): This function prints an integer. It's used when the format specifier is 'd' or 'i'.

 * ft_putunb(unsigned int n): This function prints an unsigned integer. It's used when the format specifier is 'u'.

 * ft_puthexa(unsigned int n, char c): This function prints an unsigned integer in hexadecimal format. The second parameter determines whether the hexadecimal digits should be in lowercase ('x') or uppercase ('X').

 * ft_putptr(unsigned long p): This function prints a pointer, which is essentially an unsigned long. It's used when the format specifier is 'p'.

 * ft_printf(const char *str, ...): This is the main function that mimics the behavior of the standard printf function. It takes a format string and a variable number of arguments.

 #### The va_list is a type to hold the information needed by va_start, va_arg, va_end, and va_copy macros. These are used to handle variable argument functions in C, like printf.
 
## Building and Running
  ### To build the project, you can use the provided Makefile:
  * make
  ### To run the project, you can use the following command:
  * ./ft_printf
