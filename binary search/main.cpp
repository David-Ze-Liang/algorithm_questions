#include <iostream>
#include <random>

using namespace std;

const int N = 1e6 + 1, Q = 1e4 + 1;

int n, q;
int a[N], k[Q];

int binary_search_start(int query, int l, int r) {
    // 1,2,3,3,3,4,4
    if (l == r)
        if (a[l] == query)
            return l;
        else
            return -1;
    int mid = l + r >> 1;
    if (query <= a[mid])
        return binary_search_start(query, l, mid);
    else
        return binary_search_start(query, mid + 1, r);
}


int main() {

    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < q; i++) scanf("%d", &k[i]);
    int query, start, end;
    for (int i = 0; i < q; i++) {
        query = k[i];
        start = binary_search_start(query, 0, n - 1);
        end = start;
        if (start != -1)
            while (end < n - 1 && a[end + 1] == query)
                end++;
        cout << start << ' ' << end << endl;
    }

    return 0;

}
