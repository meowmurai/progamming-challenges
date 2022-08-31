#include <queue>
#include <iostream>

using namespace std;

int main() {
  int a,b,c;
  priority_queue<int> q;
  cin >> a >> b >> c;
  q.push(a);
  q.push(b);
  q.push(c);
  while(!q.empty()) {
    cout << q.top();
    q.pop();
  }
  return 0;
}
