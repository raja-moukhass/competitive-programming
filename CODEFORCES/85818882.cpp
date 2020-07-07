
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
  int n ;
  cin >> n;
  if(n%5 == 0)
  cout << n/5<<endl;
  else
  cout <<(n/5) + 1<<endl;
}
