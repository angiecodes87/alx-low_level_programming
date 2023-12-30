# Search Algorithms

This project implements various search algorithms in the C programming language.

## 0. Linear Search

The first algorithm is the Linear Search algorithm, implemented in the
function `linear_search`. This function searches for a value in an array of
integers and returns the first index where the value is located.
If the value is not present in the array or if the array is NULL,
   the function returns -1.

### Prototype:
```c
int linear_search(int *array, size_t size, int value);

