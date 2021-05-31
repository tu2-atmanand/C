#include <stdio.h>
int main()
{
	long i,j,coef;
	printf("enter the line whose coefficients are neded\n");
	scanf("%d",&i);
	for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            printf("%d\t", coef);
        }
        return 0;
}
