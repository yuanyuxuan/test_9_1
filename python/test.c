#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	 int sum = a ;
        while(b!=0)
        {
            sum = a^b;
	printf("a&b=%d\n",a&b);
            b=(a&b)<<1;
	    printf("b=%d\n",b);
            a=sum;
        }
	printf("%d\n",sum);
}
