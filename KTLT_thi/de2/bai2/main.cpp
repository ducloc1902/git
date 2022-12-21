/*
Viet chuong trinh C/ C++ gom cac ham sau
a Ham de quy theo khuon mau bool ToanChuSoChan (int k) tra ve gia tri dung (true) neu k chua toan chu so chan
 (vi du 8204) nguoc lai tra ve (false) (2d, khong dung de quy 1d )
b Viet ham theo khuon dang void InSoChan( int n) in ra man hinh cac so nguyen duong <= n (10 =< n =< 10000 )
 thoa man chua toan chu so chan trong ham nay co su dung ham ToanChuSoChan ()o cau a (1d) 
Vi du
Input n 30
Output 2 4 6 8 20 22 24 26 28
 */
#include <iostream>

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
