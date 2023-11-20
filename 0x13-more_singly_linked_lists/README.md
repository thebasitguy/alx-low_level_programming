0x13. C - More singly linked lists

Tasks

0-print_listint.c
A function that prints all the elements of a listint_t list.

1-listint_len.c
A function that returns the number of elements in a linked listint_t list.

2-add_nodeint.c
A function that adds a new node at the beginning of a listint_t list.
Return: the address of the new element, or NULL if it fails.

3-add_nodeint_end.c
A function that adds a new node at the end of a listint_t list.
Return: the address of the new element, or NULL if it fails.

4-free_listint.c
A function that frees a listint_t list.

5-free_listint2.c
A function that frees a listint_t list. The function sets the head to NULL.

6-pop_listint.c
A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n). If the linked list is empty it returns 0.

7-get_nodeint.c
A function that returns the nth node of a listint_t linked list.
index is the index of the node, starting at 0. If the node does not exist, it returns NULL.

8-sum_listint.c
A unction that returns the sum of all the data (n) of a listint_t linked list.
If the list is empty, it returns 0.

9-insert_nodeint.c
A function that inserts a new node at a given position.
idx is the index of the list where the new node is added and index starts at 0.
Returns: the address of the new node, or NULL if it fails.

10-delete_nodeint.c
A function that deletes the node at index index of a listint_t linked list.
index is the index of the node that is deleted and starts at 0.
Returns: 1 if it succeeds and -1 if it fails.

100-reverse_listint.c
A function that reverses a listint_t linked list.
Returns: a pointer to the first node of the reversed list
Only 1 loop is allowed, malloc, free or arrays are not allowed.
Maximum of two variables allowed to be declared.

101-print_listint_safe.c
A function that prints a listint_t linked list.
Returns: the number of nodes in the list
The function can print lists with a loop.
It goes through the list only once.
If the function fails,it exits the program with status 98.

102-free_listint_safe.c
A function that frees a listint_t list.
The function can free lists with a loop.
It goes through the list only once.
Returns: the size of the list that was free’d.
The function sets the head to NULL

103-find_loop.c
A function that finds the loop in a linked list.
malloc, free or arrays are not allowed.
Maximum of two variables allowed to be declared.
Returns: The address of the node where the loop starts, or NULL if there is no loop

