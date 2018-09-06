#include<stdio.h>
int main()
{
    char a[1002],b[1002],c[1004];
    int n,i,j,t,m,e;
    scanf("%d",&n);
    e=10;
    m=1;
    while(n--)
    {
        scanf("%s%s",a,b);
        for(i=0;i<1002;i++)
            c[i]=0;
        for(i=0;a[i]!='\0';i++);
        for(j=0;b[j]!='\0';j++);
        for(t=0;j>=0&&i>=0;j--,i--)
        {
            c[t]+=a[i]+b[j]-'0';
            if(c[t]>'9')
            {
                c[t]-=e;
                c[t+1]+=1;
            }
            t++;
        }
        while(i>=0)
        {
            c[t]+=a[i];
            if(c[t]>'9')
            {
                c[t]-=e;
                c[t+1]+=1;
            }
            i--;t++;
        }
        while(j>=0)
        {
            c[t]+=b[j];
            if(c[t]>'9')
            {
                c[t]-=e;
                c[t+1]+=1;
            }
            j--;t++;
        }
        if(c[t]==0)
            t--;
        else c[t]+='0';
        printf("Case %d:\n",m++);
        printf("%s + %s = ",a,b);
        while(t>0)
        {
            if(c[t]>='0')
                i=c[t]-'0';
            printf("%d",i);
            t--;
        }
        if(n>0)
        printf("\n\n");
        else
            printf("\n");
    }
}
