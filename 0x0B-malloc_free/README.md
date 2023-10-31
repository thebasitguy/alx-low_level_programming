0x0B. C - malloc, free

Tasks

0-create_array.c
A function that creates an array of chars, and initializes it with a specific char.
Returns a pointer to the array, or NULL if it fails or if size = 0.


1-strdup.c
A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
The _strdup() _function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
On success, the _strdup _function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.


2-str_concat.c
A function that concatenates two strings.
The returned pointer points to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated.
If NULL is passed,it treats it as an empty string.


3-alloc_grid.c
A function that returns a pointer to a 2 dimensional array of integers.
Each element of the grid is initialized to 0.
The function returns NULL on failure. If width or height is 0 or negative, it returns NULL.


4-free_grid.c
A function that frees a 2 dimensional grid previously created by your alloc_grid function.


100-argstostr.c
A function that concatenates all the arguments of a program.
Returns NULL if ac == 0 or av == NULL.
It returns a pointer to a new string, or NULL if it fails.
Each argument is followed by a \n in the new string.


101-strtow.c
A function that splits a string into words.
The function returns a pointer to an array of strings (words).
Each element of this array should contain a single word, null-terminated.
The last element of the returned array is NULL.
Words are separated by spaces.
Returns NULL if str == NULL or str == "".
If the function fails, it returns NULL.
