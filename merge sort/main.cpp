#include <iostream>

using namespace std;

const int N = 1e6 + 1;

int n, k;
int q[N], t[N];

void cpy_t_to_p(int i, int j) {
    for (i; i <= j; i++) q[i] = t[i];
}

void merge_sort(int q[], int l, int r) {
    if (r - l <= 0) return;
    int mid_idx = (l + r) >> 1;
    merge_sort(q, l, mid_idx);
    merge_sort(q, mid_idx + 1, r);
    int i = l, j = mid_idx + 1;
    int cur = l;
    while (i <= mid_idx and j <= r) {
        if (q[i] < q[j]) t[cur++] = q[i++];
        else t[cur++] = q[j++];
    }
    if (i <= mid_idx)
        while (cur <= r) t[cur++] = q[i++];
    if (j <= r)
        while (cur <= r)
            t[cur++] = q[j++];

    cpy_t_to_p(l, r);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &q[i]);

    merge_sort(q, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%d ", q[i]);

    return 0;
}
