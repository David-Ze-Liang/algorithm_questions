#include <iostream>

using namespace std;

const int N = 100001;
int a[N], b[N];

int main() {
    int n, m, x;
    scanf("%d%d%d", &n, &m, &x);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);

    int i = 0, j = 0;
    while (i < n - 1 and a[i] + b[0] < x) i++;
    while (j < m) {
        while (a[i] + b[j] > x) i--;
        if (a[i] + b[j] == x) {
            printf("%d %d", i, j);
            break;
        }
        j++;
    }

    return 0;

}
