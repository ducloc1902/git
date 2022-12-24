#include<stdio.h>
//NguyenDucLoc_60135998
const int MAX = 100;

void ReadArray(char fname[], int a[], int &n) {
    FILE *fp = fopen(fname, "rt");
    if (fp == NULL)
        printf("Khong mo duoc file!");
    else {
        fscanf(fp, "%d", &n);
        for (int i = 0; i < n; i++)
            fscanf(fp, "%d", &a[i]);
        fclose(fp);
    }
}

void PrintArray(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}

int SoChan(int a[], int n, int dem){
	if(n==0)
		return dem;
	if(a[n-1]%2==0)	
		return SoChan(a,n-1,dem+1);
	return SoChan(a,n-1,dem);
}


int main() {
    int a[MAX], n;
    char fname[]="array.txt";
    ReadArray(fname, a, n);
    printf("Mang doc tu file:\n");
    PrintArray(a, n);
	printf("\nSo luong phan tu chan la : %d",SoChan(a,n,0 ));
}

