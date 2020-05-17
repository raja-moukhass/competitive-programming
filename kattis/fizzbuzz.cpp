#include <iostream>

using namespace std;

int     main()
{
    int a,b,c,i;
    cin >>a>>b>>c;
    for( i=1; i <=c; i++)
    {
      // cout << i<<endl;
           if((i%b == 0)&& (i%a == 0))
                   cout<<"FizzBuzz"<<endl;


       else  if(i%a == 0)
        cout<<"Fizz"<<endl;
        else if(i%b == 0)
        cout<<"Buzz"<<endl;
        else
                cout<<i<<endl;


    }
}