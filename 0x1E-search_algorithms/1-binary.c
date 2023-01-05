#include "search_algos.h"
/**
* binary_search - check code
* @array:is a pointer to the first element
* @size: the size array
* @value: the value of an array
* Return: If value is not present in array return -1
**/
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid;
	int i;

  while (start <= end) {
    printf("Searching in array: ");
    for (i = start; i <= end; i++) {
      printf("%d, ", array[i]);
    }
    printf("\n");

    mid = start + (end - start) / 2;

    if (array[mid] == value) {
      return mid;
    }

    if (value < array[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

