#include <bits/stdc++.h>
using namespace std;
      int ans = 0; 
int main() {

  long long n, m;
  cin >> n >> m;
  
  if (m % n == 0) {
    long long d = m / n;
    if (d == 1 or d % 2 == 0 or d % 3 == 0) {

      while (d % 2 == 0) {
        d /= 2;
        ans++;
      }
      while (d % 3 == 0) {
        d /= 3;
        ans++;
      }
      if (d == 1) {
        cout << ans << endl;
      } else {
        cout << -1 << endl;
      }
    } else {
      cout << -1 << endl;
    }
  } 
  else {
    cout << -1 << endl;
  }
  return 0;
}
