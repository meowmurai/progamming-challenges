#include <algorithm>
#include <iostream>
#include <ostream>
using namespace std;

int main() {
  string str;
  cin >> str;
  int n = str.length();
  int dp[n];
  dp[0] = 1;
  for( int i = 1; i < n; i++ ) {
    int j = i - 1 - dp[i-1];
    char k = j >= 0 ? str[j] : char(int(str[i])+1);
    dp[i] = max((str[i] == k)*(dp[i-1] + 2), 1 + (str[i] == str[i-1]));
  }
  int max = 0;
  int lastIndexOfLPS = 0;
  for (int i = 0; i < n; i++) {
    if (dp[i] > max) {
      max = dp[i];
      lastIndexOfLPS = i;
    }
  }
  cout << str.substr(lastIndexOfLPS - max + 1, max) << endl;
}
