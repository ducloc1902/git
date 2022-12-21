/*
Viet Chuong trinh C/C++ gom cac ham sau:
Ham de quy theo khuon mau int TongChuSo(int k) tra ve tong 
cac chu so nguyen duong k
Su dung ham TongChuSo() o tren de viet ham void InSoBu(int n) 
in ra man hinh n so bu dau tien, biet so bu la so tu nhien co 
tong cac chu so chia het cho 10.
vi du
Input: n = 5
Output: 19  28  37  46  55
 */
#include <iostream>

using namespace std;

int TongChuSo(int k) {
    if (k <= 0) return 0;
    return k % 10 + TongChuSo(k / 10);
}

void InSoBu(int n) {
    int i = 1, count = 0;
    while (count < n) {
        if (TongChuSo(i) % 10 == 0) {
            cout << i << " ";
            count++;
        }
        i++;
    }
}

int main() {
    int n;
    do {
        cout << "n = ";
        cin >> n;
    } while (n <= 0);
    cout << n << " so bu dau tien: " << "\n";
    InSoBu(n);
    return 0;
}
