/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the bubble sort algorithm.
 * @array: Pointer to the array of integers to sort.
 * @size: The size of the array.
 *
 * Description: This function performs a
 * bubble sort on the given array. It repeatedly
 * compares adjacent elements and swaps them if
 * they are in the wrong order. The process
 * continues until the array is sorted.
 * The array is printed after each swap.
 *
 * Return: None.
 */

#include"sort.h"


void bubble_sort(int *array, size_t size)

{

size_t i, l;
int v, s;

for (i = 0; i < size - 1; i++)
{

s = 0;

for (l = 0; l < size - i - 1; l++)
{

if (array[l] > array[l + 1])
{
v = array[l];
array[l] = array[l + 1];
array[l + 1] = v;
print_array(array, size);
s = 1;
}

}

if (s == 0)
break;

}

}
