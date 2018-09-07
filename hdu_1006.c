nclude<iostream>
#include<string>
using namespace std;
int main()
{
    string s[1000],x;
    int N,i,j,a,b,c,k;
    cin>>N;
    while(N!=0)
    {
        b=0;c=0;
        for(i=0;i<N;i++)
            cin>>s[i];
        for(i=0;i<N;i++)
        {
            a=0;
            for(j=i;j<N;j++)
        {
            if(s[j]==s[i])
                a++;
        }
        if(a>b)
        {
            b=a;c=i;
            if(a>N/2)
                break;

        }
        }
        cout<<s[c]<<endl;
        cin>>N;
    }
}
