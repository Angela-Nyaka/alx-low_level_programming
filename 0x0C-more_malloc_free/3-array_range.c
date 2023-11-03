#include "main.h"
/**
*array_range- prints array from min to max
*@min: minimum value
*@max: maximum value
*
*Return: pointer to new array
*/
int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
{
return (NULL);
}
size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
{
return (NULL);
}
for (i = 0;  min <= max; i++)
{
arr[i] = min++;
}
return (arr);
}
