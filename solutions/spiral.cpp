#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n,m,result;
  cout << "Nhap n, m: ";
  cin >> n >> m;
  int layer = min(n/2, m/2);

  if (n == 2) result = 2;
  else if (n == 1) result = 0;
  else if (m == 1) result = 1;
  else result = layer*3 + (layer-1) + (n == m && n&1) + (n > m ? 2 : 1); 
  cout << "robot can re " << result << " lan" << "\n";
  return 0;
}
