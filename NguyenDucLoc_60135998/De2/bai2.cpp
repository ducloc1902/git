#include <iostream>
//NguyenDucLoc_60135998
using namespace std;

bool ToanChuSoChan(int k) {
    if (k < 10) {
        if (k % 2 == 0) return 1;
        else return 0;
    } else {
        if ((k % 10) % 2 == 0) 
			return ToanChuSoChan(k / 10);
        else 
			return false;
    }
}

void InSoChan(int n) {
    for (int i = 2; i <= n; i++)
        if (ToanChuSoChan(i)) cout << i << " ";
}

int main() {
    int n=40;
    InSoChan(n);
    return 0;
}
