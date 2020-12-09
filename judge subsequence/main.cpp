#include <iostream>

using namespace std;

const int N = 100001;
int a[N], b[N];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    int i = 0;
    for (int j = 0; j < m && i < n; j++) {
        if (a[i] == b[j]) i++;
    }

    if (i == n) cout << "Yes";
    else cout << "No";

    return 0;

}
