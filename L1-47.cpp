/*
Link:
*/
#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_map>
using namespace std;
using LL = long long;
using PII = pair<int, int>;
unordered_map<string, PII> ha;
int n;

void solve() {
  cin >> n;
  while (n--) {
    string a;
    int b, c;
    cin >> a >> b >> c;
    bool f1 = false, f2 = false;
    if (b >= 15 && b <= 20)
      f1 = true;
    if (c >= 50 && c <= 70)
      f2 = true;
    if (!f1 || !f2)
      cout << a << endl;
  }
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
