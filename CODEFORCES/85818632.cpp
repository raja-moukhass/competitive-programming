
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
int main()
{
    string str;
    string btr;
    cin >>str>>btr;
    reverse(btr.begin(),btr.end());
    if(btr == str)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}
