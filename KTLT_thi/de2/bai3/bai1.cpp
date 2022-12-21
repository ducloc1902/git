#include<stdio.h>

typedef struct
{
    int tuSo, mauSo;
}Phanso;


void Tong(Phanso a , Phanso b){
	Phanso s;
	s.mauSo = a.mauSo * b.mauSo;
	s.tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
	return s;
}
int main()
{
	int p1,p2;
    Phanso p1(1,2), p2(3,4), tong;
    tong = Tong(p1, p2);
    printf(" Tong 2 phan so : %d",tong);
}

