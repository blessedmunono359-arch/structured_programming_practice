#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, count = 0;

    for ( int i =1; i<=99; i+=2){
            printf("%d\n", i);
        sum +=i;
        count ++;
    }
    printf("\nSum :%d\n", sum);
    printf("Count :%d\n",count);

    return 0;
}
