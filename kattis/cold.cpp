#include <iostream>


using namespace std;
int     main()
{
    int a;
    int j = 0;
     int m;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin >> m;
        if (m < 0)
        j++;
       
    }
     cout<< j <<endl;
}