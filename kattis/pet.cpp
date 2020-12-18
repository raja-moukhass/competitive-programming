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


int main() {
  int imx, mx = 0;
  for (int i = 0; i < 5; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      int p;
      cin >> p;
      sum += p;
    }
    if (sum > mx) {
      mx = sum;
      imx = i;
    }
  }
  cout << imx + 1 << " " << mx << endl;
  return 0;
}
