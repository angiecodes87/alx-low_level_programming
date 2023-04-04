0.print_listint function
Description
This function prints all the elements of a linked list of type listint_t.

Prototype
size_t print_listint(const listint_t *h);
Parameters
h: a pointer to the head of the linked list.
Return Value
The function returns the number of nodes in the linked list


1.listint_len function
Description
This function returns the number of elements in a linked list of type listint_t.

Prototype
size_t listint_len(const listint_t *h);
Parameters
h: a pointer to the head of the linked list.
Return Value
The function returns the number of elements in the linked list.

2.add_nodeint function
Description
This function adds a new node at the beginning of a linked list of type listint_t.

Prototype
listint_t *add_nodeint(listint_t **head, const int n);
Parameters
head: a pointer to a pointer to the head of the linked list. This allows us to
modify the head pointer if the linked list is currently empty.
n: the integer value to be stored in the new node.

Return Value
The function returns the address of the new element if successful, or
NULL if it failed.

3.add_nodeint_end function
Description
This function adds a new node at the end of a linked list of type listint_t.

Prototype
listint_t *add_nodeint_end(listint_t **head, const int n);
Parameters
head: a pointer to a pointer to the head of the linked list. This allows us to
modify the head pointer if the linked list is currently empty.
n: the integer value to be stored in the new node.
Return Value
The function returns the address of the new element if successful, or NULL

4.free_listint function
Description
This function frees a linked list of type listint_t.

Prototype
void free_listint(listint_t *head);
Parameters
head: a pointer to the head of the linked list.
Return Value
The function does not return anything.


5.free_listint2 function
Description
This function frees a linked list of type listint_t and sets the
head pointer to NULL.

Prototype
void free_listint2(listint_t **head);
Parameters
head: a pointer to a pointer to the head of the linked list.
Return Value
The function does not return anything.


6.pop_listint function
Description
This function deletes the head node of a linked list of type listint_t, and
returns the integer value stored in the deleted node.

Prototype
int pop_listint(listint_t **head);
Parameters
head: a pointer to a pointer to the head of the linked list.
Return Value
If the linked list is empty, the function returns 0.
If the linked list is not empty, the function returns the integer value
stored in the deleted node.


7.get_nodeint_at_index function
Description
This function returns the nth node of a linked list of type listint_t.

Prototype
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Parameters
head: a pointer to the head of the linked list.
index: the index of the node to return, starting at 0.
Return Value
If the node exists, the function returns a pointer to the nth node in the
linked list.
If the node does not exist, the function returns NULL.


8.sum_listint function
Description
This function returns the sum of all the integer values stored in the nodes of
a linked list of type listint_t.

Prototype
int sum_listint(listint_t *head);
Parameters
head: a pointer to the head of the linked list.
Return Value
If the linked list is empty, the function returns 0.
If the linked list is not empty, the function returns the sum of all the
integer values stored in the nodes of the linked list.


9.insert_nodeint_at_index function
Description
This function inserts a new node with a given integer value n at a specific
position idx in a linked list of type listint_t. The linked list can be empty.

Prototype
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
Parameters
head: a pointer to the head of the linked list.
idx: the index of the position where the new node should be added. Index starts
at 0.
n: the integer value that should be stored in the new node.
Return Value
If the function succeeds in adding the new node at the specified position, it
returns a pointer to the newly created node.
If the function fails to add the new node at the specified position,
it returns NULL.


10.Function Description
The function delete_nodeint_at_index deletes the node at the given index of a
linked list. The index is the position of the node in the list, starting from 0
.The function returns 1 if it succeeds in deleting the node, and -1 if it fails

Function Prototype
int delete_nodeint_at_index(listint_t **head, unsigned int index);
Input Parameters
The function takes in the following parameters:
**head: a double pointer to the head node of the linked list.
index: an unsigned integer indicating the index of the node to be deleted.
Return Value
The function returns an integer value of 1 if it succeeds in deleting the node
and -1 if it fails.

Function Behavior
The function delete_nodeint_at_index performs the following tasks:

It checks if the list is empty or the given index is invalid (i.e., greater
than the number of nodes in the list).
If the given index is 0, it deletes the head node and updates the head pointer
to point to the new head node.
If the given index is not 0, it traverses the list to find the node at the give
n index and deletes it by updating the pointers of the previous and next nodes.





























