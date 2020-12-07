#include <iostream>

using namespace std;

const int N = 1001;
int a[N][N], s[N][N];


int main() {
    int m, n, q;
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (i * j == 0)
                s[i][j] = 0;
            else
                s[i][j] = a[i - 1][j - 1] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];

    int x1, y1, x2, y2;
    for (int i = 0; i < q; i++) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1] << endl;
    }

    return 0;

}
