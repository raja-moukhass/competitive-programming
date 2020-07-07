#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>


using namespace std;

int     main()
{
    string tour,bour;
    cin >> tour >> bour;
    transform(tour.begin(), tour.end(), tour.begin(), ::tolower);
    transform(bour.begin(), bour.end(), bour.begin(), ::tolower);
    //cout <<tour <<" ";
    //cout << bour << " ";

    if(tour==bour)
    {
        cout << 0 <<endl;
    }
    else if (tour > bour)
    {
        cout<< 1 <<endl;
    }
    else 
    {
        cout<< -1 <<endl;
    }
}
