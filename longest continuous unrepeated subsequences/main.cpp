#include <iostream>

using namespace std;

const int N = 100001;
int a[N], record[N];

int main() {
    int n, maxlen = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0, j = 0; i < n; i++) {
        record[a[i]] += 1;
        if (record[a[i]] > 1) {
            while (a[i] != a[j]) {
                record[a[j]] -= 1;
                j++;
            }
            record[a[j]] -= 1;
            j++;
        }
        maxlen = max(maxlen, i - j + 1);
    }
    cout << maxlen;

    return 0;

}
