/* Created by Hung on 24/08/2022.
 * Viet ham khuon mau MaxOfTwo (int , int) tra ve so lon hon
 trong 2 so nguyen.
 * Su dung lai ham MaxofTwo ( int , int) o tren de viet ham theo 
 khuon mau MaxOfFour ( int,int,int,int) tra ve so lon nha trong 4
 so nguyen
 */

#include <iostream>

using namespace std;

int MaxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int MaxOfFour(int a, int b, int c, int d) {
    return MaxOfTwo(MaxOfTwo(a, b), MaxOfTwo(c, d));
}

int main() {
    int a = 9, b = 5, c = 85, d = 7;
    cout << "Max = " << MaxOfFour(a, b, c, d);
}


