#include <iostream>
//NguyenDucLoc_60135998
using namespace std;
typedef struct {
	int tuSo, mauSo;
}PhanSo;
void CongTru(PhanSo a, PhanSo b, PhanSo &tong){
	tong.tuSo=a.tuSo*b.mauSo + b.tuSo*a.mauSo;
	tong.mauSo = a.mauSo*b.mauSo;
	
}
int main(){
	PhanSo p1={1,2},p2={3,4},tong;
	CongTru(p1,p2,tong);
	cout<<tong.tuSo<<"/"<<tong.mauSo;
	return 0;
}
