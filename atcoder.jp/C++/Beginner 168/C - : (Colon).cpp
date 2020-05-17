#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  
  double t = ((h * 5) + (5.0 * m / 60.0) - m) * M_PI / 30.0;
  double ans = sqrt(a * a + b * b - 2.0 * a * b * cos(t));
  cout << setprecision(20) << ans << endl;
  return 0;
}
