#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal, rate, interest;
    int days;

    printf("Enter the loan principal:");
    scanf("%f", &principal);

    while (principal != -1){
        printf("Enter the inerest rate:");
        scanf("%f", & rate);

        printf("Enter term of the loan in days:");
        scanf("%d", &days);

        interest = principal * rate * days /365;

         printf("The interest charge is UGX%.2f\n\n", interest);

         printf("Enter loan principal:");
         scanf("%f", &principal);
    }

    printf("No more loans to give");
    return 0;
}
