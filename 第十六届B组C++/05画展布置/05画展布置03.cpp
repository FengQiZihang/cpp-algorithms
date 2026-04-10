#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
typedef long long ll;
ll a[N];
int n, m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    ll ans = 1e18;
    for (int l = 1; l + m - 1 <= n; ++l) { // 左右指针的感觉
        int r = l+m-1;
        ans = min(ans, a[r]*a[r]-a[l]*a[l]);
    }
    cout << ans << "\n";
    return 0;
}
