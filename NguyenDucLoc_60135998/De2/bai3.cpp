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

void PrintArray(int a[], int n, int start, int end) {
    for (int i = start; i <= end; i++)
        printf("%d  ", a[i]);
}

int TongLe(int a[], int n) {
    if (n == 0) 
		return 0;
    else {
        if (a[n - 1] % 2 == 1) 
			return a[n - 1] + TongLe(a, n - 1);
        else return TongLe(a, n - 1);
    }
}

int main() {
    int a[MAX], n;
    char fname[]="array.txt";
    ReadArray(fname, a, n);
    printf("Mang doc tu file:\n");
    PrintArray(a, n, 0, n - 1);
	printf("\nTong cac so le la : %d\n ",TongLe(a,n));
}

