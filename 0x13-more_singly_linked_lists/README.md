0x13. C - More singly linked lists

Task 0  Write a function that prints all the elements of a listint_t list.

Task 1  Write a function that returns the number of elements in a linked listint_t list.

Task 2  Write a function that adds a new node at the beginning of a listint_t list.

Task 3  Write a function that adds a new node at the end of a listint_t list.

Task 4  Write a function that frees a listint_t list.

Task 5  Write a function that frees a listint_t list.

Task 6  Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n). 
 
Task 7  Write a function that returns the nth node of a listint_t linked list.

Task 8  Write a function that returns the sum of all the data (n) of a listint_t linked list.

Task 9  Write a function that inserts a new node at a given position.

Task 10 Write a function that deletes the node at index index of a listint_t linked list.

Task 11 Write a function that reverses a listint_t linked list.

Task 12 Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format

Task 13  Write a function that frees a listint_t list.

Prototype: size_t free_listint_safe(listint_t **h);
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL

Task 14 Write a function that finds the loop in a linked list.

Prototype: listint_t *find_listint_loop(listint_t *head);
Returns: The address of the node where the loop starts, or NULL if there is no loop
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
