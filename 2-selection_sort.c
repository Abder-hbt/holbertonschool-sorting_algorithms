/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the selection sort algorithm.
 * @array: Pointer to the array of integers.
 * @size: The size of the array.
 *
 * Description: This function implements the selection sort algorithm.
 * It repeatedly selects the minimum element from the unsorted part of
 * the array and swaps it with the first unsorted element. After each swap,
 * the current state of the array is printed.
 */


#include"sort.h"

void selection_sort(int *array, size_t size)

{

size_t i, j, temp, min;

if (array == NULL || size <= 1)
{

return;

}

for (i = 0; i < size; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{

if (array[j] < array[min])
{
min = j;
}

}

if (min != i)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;

print_array(array, size);
}
}
}
