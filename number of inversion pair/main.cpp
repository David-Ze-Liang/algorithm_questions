#include <iostream>
#include <random>
using namespace std;

const int N = 1e6 + 1;
typedef long long LL;

int n, k;
int q[N], t[N];

LL merge_sort(int q[], int l, int r) {
    if (l >= r) return 0;
    LL s = 0, mid = l + r >> 1;
    s = merge_sort(q, l, mid)+merge_sort(q, mid + 1, r);

    int cur = l, i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] <= q[j])
            t[cur++] = q[i++];
        else {
            t[cur++] = q[j++];
            s += mid - i + 1;
        }
    }

    while (i<=mid)
        t[cur++] = q[i++];
    while (j<=r)
        t[cur++] = q[j++];

    for(int k=l; k<=r;k++)
        q[k] = t[k];
    return s;
}

int main() {

    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &q[i]);
    LL ans = merge_sort(q, 0, n - 1);
    cout<<ans;

    return 0;
}
