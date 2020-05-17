#include <iostream>

using namespace std;

int     main()
{
    int a;
    cin >> a;
    while(a != -1)
    {
        int sum = 0,tst = 0;
        for(int i =0; i <a; ++i)
        {
            int m,f;
            cin >> m >>f;
            sum += m *(f -tst);
            tst = f;

        }
        cout <<sum << " "<<"miles"<< endl;
        cin >> a;
    }
}