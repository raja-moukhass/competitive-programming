#include <iostream>
#include <cmath>
using   namespace std;

int     main()
{
    int a;
    cin >> a;
    for(int i =0; i <a; ++i)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((b - c)>a)
        cout<<"advertise"<<endl;
        else if
        ( b -c == a)
        cout<<"does not matter"<<endl;
        else
        cout << "do not advertise"<<endl;


    }
}