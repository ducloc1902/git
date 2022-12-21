#include<stdio.h>
int main (){
	
	int a[]={5,6,7,800,9,100,122};
	int min = a[0];
	int pos =0;
	int tmp;
	for ( int i =0; i<7;i++)
		if (a[i]< min){
			min = a[i];
			pos = i;
		}
	if ( pos>0){
		tmp=a[0];
		a[0]= a[pos];
		a[pos]= tmp;	
	}
	printf ( "after \n");
	for ( int i =0; i<7;i++)
		printf("\t %d",a[i]);
}

