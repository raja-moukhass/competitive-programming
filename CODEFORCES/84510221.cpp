#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> pair, impair;
    for(int i = 1; i <= 2*n; i++) {
        int a; cin >> a;
        if (a%2)
            impair.push_back(i);
        else
            pair.push_back(i);
    }
    if (impair.size() > 1) {
        impair.pop_back();
        if (impair.size()%2 == 0)
            pair.pop_back();
        else
            impair.pop_back();
    } else {
        pair.pop_back();
        if (pair.size()%2 == 0)
            impair.pop_back();
        else
            pair.pop_back();
    }
    for(int i = 0; i < impair.size(); i+= 2)
        cout << impair[i] << " " << impair[i + 1] << endl;
    for(int i = 0; i < pair.size(); i+= 2)
        cout << pair[i] << " " << pair[i + 1] << endl;
  }
}
