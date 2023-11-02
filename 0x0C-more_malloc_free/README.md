0x0C. C - More malloc, free

Tasks

0-malloc_checked.c
A function that allocates memory using malloc.
Returns a pointer to an allocated memory.
f malloc fails, the malloc_checked _ function should cause normal process termination with a status value of 98.


1-string_nconcat.c
A function that concatenates two strings.
The returned pointer points to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated.
If the function fails, it returns NULL.
If n is greater or equal to the length of s2, it uses the entire string s2.
If NULL is passed, treat it as an empty string.


2-calloc.c
A function that allocates memory for an array, using malloc.
The _calloc _function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero.
If nmemb or size is 0, then _calloc _returns NULL.
If malloc fails, then _calloc _returns NULL.


3-array_range.c
A function that creates an array of integers.
The array created contains all the values from min (included) to max (included), ordered from min to max.
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL


100-realloc.c
A function that reallocates a memory block using malloc and free.
Where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size).
old_size is the size, in bytes, of the allocated space for ptr and new_size is the new size, in bytes of the new memory block.
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes.
If new_size > old_size, the “added” memory is not be initialized.
If new_size == old_size do not do anything and return ptr.
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size.
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL.
Don’t forget to free ptr when it makes sense.


101-mul.c
Usage: mul num1 num2
num1 and num2 will be passed in base 10.
Prints the result, followed by a new line.
If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of 98.
num1 and num2 should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98.
