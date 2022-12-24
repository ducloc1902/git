#include<stdio.h>
//NguyenDucLoc_60135998
int TongChuSo(int n){
	if(n==0)	
		return 0;
	else
		 return n%10 +TongChuSo(n/10);
}
void InSoBu(int n){
	for(int i=1;i<=n;i++){
		if(TongChuSo(i)%10==0)
			printf("%d ",i);
	}
}
	
int main (){
	int n;
	printf("Nhap so nguyen duong: ");
	scanf("%d",&n);
	printf("%d",TongChuSo(n));	
	printf("\n");
	InSoBu(n);
}

