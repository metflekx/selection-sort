#include <stdio.h>

int main(void)
{
    int array[] = {4, 5, 2, 3, 7, 1, 9, 6, 8, 10};
    int lengthOfArray = 10;

    for (int i = 0; i < lengthOfArray - 1; i++)
    {
        // making an inner loop to find index of minimum number
        int index = i;
        for (int j = i + 1; j < lengthOfArray; j++)
        {
            if (array[j] < array[index])
            {
                index = j;
            }

            if (index != i)
            {
                // swapping
                int tmp = array[i];
                array[i] = array[index];
                array[index] = tmp;
            }
        }
    }
    // printing the sorted array
    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("a[%d] = %d\n", i, array[i]);
    }
}