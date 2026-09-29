#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total_collected, sales, country_tax, state_tax, total_tax;
    char month[20];

    while (1){
        printf("Enter total amount collected:");
        scanf("%f",&total_collected);

        if (total_collected== -1){
            break;
        }
         printf("Enter name of month:");
         scanf("%s", &month);

         sales = total_collected / 1.09;
         country_tax = sales * 0.05;
         state_tax = sales * 0.04;
         total_tax = country_tax + state_tax;

         printf("\n Total Collctions: $%.2f\n", total_collected);
         printf("\n Country tax: $%.2f\n", country_tax);
         printf("\nState tax: $%.2f\n", state_tax);
         printf("\n Total tax:$%.2f\n",total_tax);
    }
    return 0;
}
