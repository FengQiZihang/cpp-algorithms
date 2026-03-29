#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<ll> a(N);  // 开ll存储平方后的数, 避免溢出
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        a[i] = a[i] * a[i];  // 平方后的数和原数 仅仅是缩放,
                             // 不会改变数的相对大小, 这里提前计算好.
    }
    sort(a.begin(), a.end());

    ll ans = LLONG_MAX;
    for (int i = 0; i < N - M + 1; i++) {
        ll L = a[i + M - 1] - a[i];  // 计算选取的M个数的平方差
        ans = min(ans, L);           // 更新最小的变化程度
    }
    cout << ans << "\n";
    return 0;
}
