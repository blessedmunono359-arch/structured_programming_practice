#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1, num_2, sum, product, difference, quotient;
    float remainder;

     printf("Enter the fist number:");
     scanf("%d", &num_1);

     printf("Enter the second number:");
     scanf("%d", & num_2);

     sum = num_1 + num_1;
     printf("sum: %d\n", sum);

     product = num_1 * num_2;
     printf("product: %d\n", product);

     difference = num_1 - num_2;
     printf("difference: %d\n", difference);

     quotient = num_1 / num_2;
     printf("quotient: %d\n",quotient);

     remainder = num_1 % num_2;
     printf("reminder: %.2f\n",remainder);



    return 0;
}
