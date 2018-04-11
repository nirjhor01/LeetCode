#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,c=0;;
    while(cin>>a>>b&&(a||b)!=1)
    {
        for(int i=a;a<=b;i++)
        {
            if(b%2!=0)
            {
                sum=(3*b)+1;
                c++;
            }
            else
            {
                sum=b/2;
                c++;
            }
        }
    }
    cout<<c<<endl;
}
