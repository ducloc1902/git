#include <iostream>
//NguyenDucLoc_60135998
using namespace std;
typedef struct {
	int tuSo, mauSo;
}PhanSo;

PhanSo Tong(PhanSo a, PhanSo b){
	PhanSo s;
	s.tuSo=a.tuSo*b.mauSo + b.tuSo*a.mauSo;
	s.mauSo = a.mauSo*b.mauSo;
	return s;
}
int main(){
	PhanSo p1={1,2},p2={3,4},tong;
	tong=Tong(p1,p2);
	cout<<tong.tuSo<<"/"<<tong.mauSo;
	return 0;
}
