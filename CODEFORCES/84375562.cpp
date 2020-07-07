#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

int     main()
{
    string tour;
    cin >> tour;
    putchar(toupper(tour[0]));
    tour.erase(tour.begin());
    cout<<tour<<endl;

}
