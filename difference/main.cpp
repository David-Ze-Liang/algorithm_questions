#include <iostream>

using namespace std;

const int N = 100001;
int a[N], d[N];


int main() {
    int m, n;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= n; i++)
        d[i] = a[i] - a[i - 1];

    int l, r, c;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &l, &r, &c);
        d[l] += c;
        if (r + 1 <= n) d[r + 1] -= c;
    }
    int last = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d ", last + d[i]);
        last += d[i];
    }
    return 0;

}
