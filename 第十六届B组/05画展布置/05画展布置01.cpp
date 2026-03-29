#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M; cin >> N >> M;
    vector<ll> a(N); // 开ll存储平方后的数, 避免溢出
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        a[i] = a[i] * a[i]; // 平方后的数仅仅是对原数缩放, 不会改变数的相对大小, 这里提前计算好.
    }
    // 正向排序
    sort(a.begin(), a.end()); 

    vector<ll> cha(N - 1); // 存储相邻数的平方差
    for (int i = 0; i < N - 1; i++) {
        cha[i] = a[i + 1] - a[i];
    }

    // 先建第一个窗口, 长度为M-1
    ll L = 0;
    for (int i = 0; i < M - 1; i++) L += cha[i];

    ll ans = L; // 初始化最小的变化程度为第一个窗口的差值和
    // 从第M-1个差值开始, 每次移动窗口, 更新差值和
    for (int i = M - 1; i < N-1; i++) {
        L += cha[i]; // 加入新的差值
        L -= cha[i - (M - 1)]; // 移除旧的差值
        ans = min(ans, L); // 更新最小的变化程度
    }

    cout << ans << "\n";
    return 0;
}
