#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int x, y; cin >> x >> y;
    cout << gcd(x,y) << " " << lcm(x,y);
}