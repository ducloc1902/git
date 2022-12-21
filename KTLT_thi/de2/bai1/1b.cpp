/* Created by Hung on 24/08/2022.
*  Viet ham co ten Add() tra ve tong cua cac so nguyen voi so luong doi so khi goi ham co the thay doi tu 1 den 4 
 *Su dung ham Add o tren de viet ham SumOfFive() tra ve tong cua 5 so nguyen
 */

#include <iostream>

using namespace std;

int Add(int a, int b = 0, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int SumOfFive(int a, int b, int c, int d, int e) {
    return Add(a,b,c,d)+e;
}

int main() {
    int a = 1, b = 2, c = 3, d = 4, e=5;
    cout << "Sum = " << SumOfFive(a, b, c, d, e);
}
