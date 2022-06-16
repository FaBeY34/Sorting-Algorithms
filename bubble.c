#include <stdio.h>
// Function to swap elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// bubble sort function
void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}
// Function to print the elements of an array
void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
}
// Main Function
int main(int argc, char *argv[])
{
    int array[] = {-64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    printf("Sorted array: \n");
    printArray(array, n);
    return 0;
}