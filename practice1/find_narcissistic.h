#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "find_narcissistic.c"

PUBLIC int ArmstrongNumbersCheck(int min, int max)

{
    int Armstong_Number;
    int value, number;
    int* arr = NULL;
    arr = realloc(arr, sizeof(int) * 100);
    int size = 0;


    for (Armstong_Number = min; Armstong_Number <= max; Armstong_Number++)
    {
        // Value of sumand step fallow as number
        int index = 0;
        int sum = 0;


        value = Armstong_Number;

        // Cycle by step up (1 - 1, 10 - 2, 100 - 3...)
        while (value > 0)
        {
            value /= 10;
            index++;
        }
        value = Armstong_Number;

        // Check coincidence
        while (value > 0)
        {
            number = value % 10;
            sum += pow(number, index);
            value /= 10;
        }

        if (sum == Armstong_Number)
        {
            *(arr + size) = Armstong_Number;
            size++;
        }

    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return;

    free(arr);
    arr = NULL;

}

