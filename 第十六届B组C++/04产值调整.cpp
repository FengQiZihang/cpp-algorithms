#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, k;
        cin >> a >> b >> c >> k;
        for (int i = 0; i < k; i++) {
            int na = (b + c) / 2;
            int nb = (a + c) / 2;
            int nc = (a + b) / 2;
            a = na;
            b = nb;
            c = nc;
            if (a == b && b == c) break;
        }
        cout << a << " " << b << " " << c << "\n";
    }
    return 0;
}
/*
题目链接
https://www.lanqiao.cn/problems/20538/learning/
三个数 通过公式 反复相互赋值, 求最终结果
*/