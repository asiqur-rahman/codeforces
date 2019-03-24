#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, first=0, back=0, ans=0, cnt=0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      first++;
    } 
	else 
      break;
  }

  for (int i = n - 1; i > -1; i--) {
    if (a[i] == 1) {
      back++;
    } 
	else 
      break;
  }
  
  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      cnt++;
    } else {
      cnt = 0;
    }
    ans = max(ans, cnt);
  }
  cout << max(ans, first+back) << endl;
  return 0;
}

//hints take from # Kantuni
