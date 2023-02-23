#include <locale.h>
#include "find_narcissistic.h"

int main()
{
    int min, max, function;
    printf(" Enter the range of Armstrong numbers: \n");
    printf(" Least number : ");
    scanf_s("%d", &min);
    printf(" Highest number: ");
    scanf_s("%d", &max);
    printf("Armstrong numbers in the range between %d and %d: \n", min, max);
    function = ArmstrongNumbersCheck(min, max);
    return 0;
}
