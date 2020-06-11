#include <iostream>

using namespace std;
int reversed(int x)
{
    int p=0,r;
    while(x!=0)
    {
        r=x%10;
        x=x/10;
        p=p*10 +r;
    }
    return p;
}

int main()
{long int i,n;
int a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c=reversed(a)+reversed(b);
        cout<<reversed(c)<<endl;
    }
    return 0;
}
