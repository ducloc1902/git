#include<stdio.h>
int main (){
	int a[]= { 1,2,3,4,5,6,7,8,9,100};
	int min,max;
	min = a[0];
	max = a[0];
//	for (int i=1;i<10;i++){
//		if(a[i]<min)
//			min=a[i];
//		if(a[i]>max)
//			max=a[i];
//	}
//	printf(" min mang la = %d",min);
//	printf("\n max mang la = %d",max);
	
	int b[10];
	for(int i=0;i<10;i++){
		printf("nhap vao stt #%d: ",(i+1));
		scanf("%d",&b[i]);
	}
	min = a[0];
	max = a[0];
	for(int i=0;i<10;i++){
		if (b[i]<min)
			min =b[i];
		if (b[i]>max)
			max=b[i];
	}
	printf(" min mang la = %d",min);
	printf("\n max mang la = %d",max);
			
}
