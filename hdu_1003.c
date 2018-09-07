nclude<stdio.h>
int main()
{
    int T,N,m;
    int a[100000],i,j,s,e,max,t,x,y;
    scanf("%d",&T);
    m=1;
    while(T--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%d",&a[i]);
        max=a[0];
        t=0;
        s=1;e=1;x=1,y=1;
        for(i=0;i<N;i++)
        {
          t+=a[i];
          if(t>max)
          {
              y=i+1;
              s=x;
              e=y;
              max=t;
          }
          if(a[i]>t)
          {
              x=i+1;
              y=i+1;
              t=a[i];
          }
          if(a[i]>max)
          {
              y=i+1;
              x=i+1;
              max=a[i];
              s=x;
              e=y;
              t=max;
          }
        }
        printf("Case %d:\n",m++);
        printf("%d %d %d\n",max,s,e);
        if(T>0)
            printf("\n");
    }
}
