#include <iostream>

using namespace std;

const int N = 1e6 + 1;

int n,k;
int q[N];

int quickselect(int q[], int k, int l, int r)
{
    if(l==r) return q[l];

    int pivot = q[(l+r)>>1], i=l-1, j = r+1;
    while(i<j){
        do i++; while (q[i]<pivot);
        do j--; while (q[j]>pivot);
        if(i<j) swap(q[i], q[j]);
    }
    if(j-l+1<k) return quickselect(q, k-(j-l+1), j+1, r);
    else return quickselect(q,k,l,j);
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", &q[i]);

    int ans = quickselect(q, k, 0, n - 1);

    cout<<ans<<endl;

    return 0;
}
