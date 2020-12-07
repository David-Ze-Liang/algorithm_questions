#include <iostream>

using namespace std;

const int N = 100001;
int a[N];


int main() {
    int m, n, l, r;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d ", &a[i]);
    for (int i = 1; i < n; i++)
        a[i] = a[i] + a[i - 1];
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &l, &r);
        if (l == 1)
            cout << a[r - 1] << endl;
        else
            cout << a[r - 1] - a[l - 2] << endl;
    }

    return 0;

}
