#include <iostream>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>

using namespace std;

// int     main()
// {
//     string str;
//     int A = 0;
//     int counta = 0;
//     int countd = 0;
//     int D;
//     int inp;
    
    
//      while (cin>>inp)
//     {
//     for(int i=0 ; i <inp;i++)
//     {
//         cin>>str;
//         if(str[i] == 'A')
//         A++;

//         if(str[i] == 'D')
//         D++;   
//     }
//     }
//     counta += A
//     countd  += D;
//     if(counta > countd)
//     cout<<"Anton"<<endl;
//     else if (counta<countd)
//     cout <<"Danik"<<endl;
//     else 
//     cout<<"Friendship"<<endl;
// }
// #include <iostream>
// using namespace std;

int main ()
{
    int n,i,a,d;
    char ch;

    while (cin >> n)
    {
        a = 0;
        d = 0;

        for (i=1; i<=n; i++)
        {
            cin >> ch;

            if (ch == 'A')
                a = a + 1;
            else
                d = d + 1;
        }
        if(a > d)
            cout<<"Anton"<< endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }

    return 0;
}
// int a;

// while(cin>>a)
// {
//     char b;
//     for(int i= 1; i<=a; i++)
//     {
        
//         cin>>b;

//     }

// }
// }