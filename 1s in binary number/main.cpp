#include <iostream>

using namespace std;

const int N = 100001;
int a[N];

int count_ones(int num) {
    int sum = 0;
    for (int i = 0; i < 30; i++)
        sum += (num >> i) & 1;
    return sum;
}

int main() {
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", count_ones(a[i]));


    return 0;

}
