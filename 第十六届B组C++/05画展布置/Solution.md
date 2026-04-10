# 05 画展布置

相关链接: [`Problem`](./Problem.md) · [`Math`](./Math.md) · [`最终代码`](./05画展布置02.cpp)

## 题目链接
- https://www.lanqiao.cn/problems/20532/learning/

## 题意梳理
- `N` 个正整数中挑选 `M` 个数, 使 `M` 个数的变化程度最小, 输出最小的变化程度 `L`.
- $$ L = \sum_{i=1}^{M-1} \left| B_{i+1}^2 - B_i^2 \right| $$

## 题解源码
推荐直接看最终版: [`05画展布置02.cpp`](./05画展布置02.cpp)

```cpp
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
        a[i] = a[i] * a[i];  // 平方后的数和原数仅仅是缩放, 不会改变数的相对大小, 这里提前计算好.
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
```

### 少量解释
- `Ai` 最大到 `10^5`, 平方为 `10^10 > 2.1 × 10^9`, 所以开 `long long`.
- 对原数平方后排序, 直接枚举连续区间的首尾差, 答案就是最小的首尾差.

## 高阶内容

### 相关题解版本
[`05画展布置01.cpp`](./05画展布置01.cpp)
- 第一次尝试, 多了一个 `cha` 数组, 没有意识到公式化简即为首尾差, 能 AC 所有.
- 可取之处: 滑动窗口先新建, 再滑动.

[`05画展布置03.cpp`](./05画展布置03.cpp)
- 老师的最终版本, 提前定义常量, 数组下标从 `1` 开始.
- 可取之处: `for` 循环判断条件和 `l`、`r` 的定义, 直接写成 `for (int l = 1; l + m - 1 <= n; ++l)`, `int r = l + m - 1`, 思路更清晰.

### 链接到已有算法模板
- 头文件和最值设置: [`../../备赛经验和技巧.md`](../../备赛经验和技巧.md)

### 本题特色
- 表面像 `选数 + 绝对值求和`.
- 实际核心是: **排序后, 式子 telescoping sum 化简, 只剩首尾差**.
- 因而从 `组合选择问题` 降成 `连续区间最值问题`.

### 数学解释
- 详细推导见: [`Math.md`](./Math.md)
- 复习时重点记住两句:
  1. 排序后绝对值可去掉.
  2. 总和只和区间两端有关, 因此最优解一定落在某个长度为 `M` 的连续段上.
