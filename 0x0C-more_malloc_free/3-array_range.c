#include "main.h"
/**
*array_range- prints array from min to max
*@min: minimum value
*@max: maximum value
*
*Return:
*/
int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
{
return (NULL);
}
size = sizeof(arr)/sizeof(arr[0]);

arr = malloc(size * sizeof(int));

if (arr == NULL)
{
return (NULL);
}
for (i = 0; i; min <= max; i++)
{
arr[i] = min;
m++;
}
return (arr);
}
