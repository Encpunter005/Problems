/*
Link:
*/
#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using LL = long long;
using PII = pair<int, int>;
vector<int> ar, idx;
string str;
void solve() {
  getline(cin, str);
  for (auto &x : str)
    ar.push_back(x - '0');
  sort(ar.begin(), ar.end(), greater<int>());
  ar.erase(unique(ar.begin(), ar.end()), ar.end());

  cout << "int[] arr = new int[]{";
  int cnt = ar.size() - 1;
  for (auto &x : ar) {
    cout << x;
    if (cnt) {
      cout << ", ";
      cnt--;
    }
  }
  cout << "};\n";
  for(auto &x: str) {
    int ans = x - '0';
    for(int i = 0; i < ar.size(); i ++)
      if(ar[i] == ans) {
        idx.push_back(i);
        break;
      } 
  }
  
  cout << "int[] new index = new int[]{";
  cnt = idx.size() - 1;
  for(auto &x : idx) {
    cout << x;
    if(cnt) {
      printf(", ");
      cnt --;
    }
  }
  cout << "};";
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();

  return 0;
}
