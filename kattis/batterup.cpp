#include <iostream>
using namespace std;
int     main()
{
    double n,i,d,f;
    d=0;
    f=0;
    cin >> n;
    for(i=0;i<n;++i)
    {
        double m ;
        cin>>m;
        if(m != -1)
{
        d +=m;        
        f++;
}

    }

   // cout<<d<<endl;
    //cout<<f<<endl;
    cout<<d/f<<endl;

}