#include <iostream>
using namespace std;

int main() {
    int n, x;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x != 1) ans++;
    }
    cout << ans << endl;
    return 0;
}

/*
题目链接
https://www.lanqiao.cn/problems/20545/learning/
对于一个正整数X, 能否表示为 长度>=3的连续递增整数的和
*/