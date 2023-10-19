C - More pointers, arrays and strings

0-strcat.c
Function that concatenates two strings. 
This function appends the src string to the dest string, overwriting the terminating null byte  (\0) at the end of dest, and then adds a terminating null byte.
Returns a pointer to the resulting string dest.
 
1-strncat.c
Function that concatenates two strings.
The _strncat _function is similar to the _strcat _function, except that it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes.
Return a pointer to the resulting string dest.

2-strncpy.c
Function that copies a string exactly like strncpy.

3-strcmp.c
Function that compares two strings exactly like strcmp.

4-rev_array.c
Function that reverses the content of an array of integers. 
Take n as the number of elements of the array.

5-string_toupper.c
Function that changes all lowercase letters of a string to uppercase.

6-cap_string.c
Function that capitalizes all words of a string.
Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7-leet.c
Function that encodes a string into 1337.
	Letters a and A should be replaced by 4
	Letters e and E should be replaced by 3
	Letters o and O should be replaced by 0
	Letters t and T should be replaced by 7
	Letters l and L should be replaced by 1
Only using one if in the code, two loops, no switch and no other ternary operation.

100-rot13.c
Function that encodes a string using rot13 using only one if statement, two loops, no switch and no ternary operation.

101-print_number.c
Function that prints an integer using only _putchar _function to print.
No use of long, arrays, pointers,or hard-code of special values.

102-magic.c
Add one line to a provided code so that the program prints a[2] = 98, followed by a new line.
No use of the variable a in new line of code, p not modified, only one statement required, no use of , , no additional code at the expected line and code on line 19, before ;. Standard library is allowed.

103-infinite_add.c
Function that adds two numbers, n1 and n2. r is the buffer that the function will use to store the result, size_r is the buffer size, and returns a pointer to the result.
Assuming we will always get positive numbers or 0, n1 and n2 will be only strings in the digits and never empty. If the result cannot be stored in r, the function returns 0.

104-print_buffer.c
Function that prints a buffer. 
The function prints the content of size bytes of the buffer pointed by b, output printed is 10 bytes per line.
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0 and shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space. Each line also shows the content of the buffer. If the byte is a printable character, print the letter, if not, print . and ends with a new line \n. 
If size is 0 or less, the output will be a new line only \n. 
Use of standard library is allowed.
