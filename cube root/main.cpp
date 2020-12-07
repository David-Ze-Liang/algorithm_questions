#include <iostream>

using namespace std;

double cube_root(double num) {
    double l, r, mid;
    l = -22, r = 22;

    while (r - l > 1e-8) {
        mid = (l + r) / 2;
        if (mid * mid * mid >= num)
            r = mid;
        else l = mid;
    }
    return mid;
}


int main() {

    double num;
    cin >> num;
    printf("%.6f", cube_root(num));

    return 0;

}
