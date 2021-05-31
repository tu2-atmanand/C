#include <stdio.h>
#include <string.h>
int fact(int z);
int main()
{
	long n, r, ncr,flag=0;
    char ch[10];
	do
	{
      printf("\n Enter the value for N and R \n");
      scanf("%d%d", &n, &r);
      ncr = fact(n) / (fact(r) * fact(n - r));
      printf("\n The value of ncr is: %d\n", ncr);
      printf("do yo want to continue\ny:yes\tn:no\n");
      scanf("%c",ch);
      if(strcasecmp(ch,"y"))
      flag=1;
      if(strcasecmp(ch,"n"))
      flag=0;
    }while(flag==0);
    return 0;
}
 
int fact(int z)
{
    int f = 1, i;
    if (z == 0)
    {
        return(f);
    }
    else
    {
        for (i = 1; i <= z; i++)
	{
            f = f * i;
	}
    }
    return(f);
}
