/*
Link:
*/
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
using LL = long long;
using PII = pair<int, int>;
double a, b;
void solve() {
  cin >> a >> b;
  if (a != 0 && b > 0) {
    printf("%.0lf/%.0lf=%.2lf", a, b, a / b);
  } else if (a == 0 || b == 0) {
    printf("%.0lf/%.0lf=Error", a, b);
  } else if (a != 0 && b < 0) {
    printf("%.0lf/(%.0lf)=%.2lf", a, b, a / b);
  }
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
