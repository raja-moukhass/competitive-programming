#include <iostream>

using namespace std;
#define ll long long

int     main()
{
    ll a,b;
    int i=0;
    cin>>a>>b;
    while(a <=b)
    {
        a *=3;
        b *=2;
        i++;
    }
    cout<<i<<endl;
}
