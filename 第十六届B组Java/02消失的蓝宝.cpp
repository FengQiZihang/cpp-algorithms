#include <iostream>
using namespace std;
using ll = long long;

int main() {
    // 先枚举出符合条件一的 N 的值, 再判断是否满足条件二
    // N+20250412 能被 20240413 整除 <=> N + 20250412 = 20240413 * k 
    // 即 N = 20240413 * k - 20250412
    for (int k = 1; ; ++k) {
        ll N = (ll)20240413 * k - 20250412;
        if ((N + 20240413) % 20250412 == 0) {
            cout << N << "\n";
            break;
        }
    }
    return 0;
}
/*
https://www.lanqiao.cn/problems/20553/learning/
1. N+20250412 能被 20240413 整除
2. N+20240413 能被 20250412 整除
求符合以上两点要求的最小正整数 N
*/