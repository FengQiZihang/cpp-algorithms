#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int N = 2025;
    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        ll num = (ll)i * i * i;
        if (num % 10 == 3) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
/*
https://www.lanqiao.cn/problems/20560/learning/
*/