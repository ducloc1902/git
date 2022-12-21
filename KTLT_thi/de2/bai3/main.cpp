/* Created by Hung on 24/08/2022.
Cho tap tin van ban chua du lieu mang mot chieu cac so nguyen, theo cau truc sau:
- Dong dau tien chua so luong phan tu cua mang;
- Dong tiep theo chua gia tri cac phan tu cua mang, cach nhau boi khoang trang.
Viet chuong trinh gom co cac ham sau:
a. Ham ReadArray(char fname[], int a[], int &n) de doc mang mot chieu tu tap tin duoc xac dinh boi tham so fname,
 cac phan tu duoc dua vao mang a, so luong phan tu dua vao tham so n. (1d)
b. Ham de quy tra ve phan tu lon nhat cua mang. (1d, neu giai khong de quy: 0.5d)
c. Ham tim va in ra mang con dai nhat chua cac phan tu giam dan lien tiep. (1.5d)
d. Chuong trinh chinh lan luot goi cac ham tren de minh hoa. (0.5d)
*/
#include<stdio.h>

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

int MaxArray(int a[], int n) {
    if (n == 1) return a[0];
    else {
        if (a[n - 1] > MaxArray(a, n-1)) return a[n - 1];
        else return MaxArray(a, n - 1);
    }
}

void FindLongestDescendingSubArray(int a[], int n, int &max_start, int &max_end) {
    int max_len = 0, start = 0, end = 0;
    max_start = 0, max_end = 0;
    // Xét l?n lý?t các ph?n t? t? ð?u ð?n áp chót
    int i = 0;
    while (i < n - 1)
        // N?u a[i] < a[i+1] th? xét ph?n t? k? ti?p
        if (a[i] < a[i + 1])
            i++;
        // Ngý?c l?i, n?u a[i] >= a[i+1] th? i là v? trí b?t ð?u c?a d?y con gi?m d?n
        else {
            start = i;
            end = start;
            // T?m v? trí cu?i c?a d?y con gi?m d?n b?t ð?u t? i
            while (a[end] >= a[end + 1] && end < n - 1)
                end++;
            // N?u d?y con ðang xét dài hõn d?y con trý?c ðó th? ghi nh?n v? trí & ð? dài c?a nó:
            if (end - start > max_len) {
                max_start = start;
                max_end = end;
                max_len = end - start;
            }
            // Chuy?n sang v? trí b?t ð?u t?m d?y con ti?p theo:
            i = end;
        }
}

int main() {
    int a[MAX], n;
    int max_arr_start, max_arr_end;
    ReadArray("d:\\array.txt", a, n);
    printf("Mang doc tu file:\n");
    PrintArray(a, n, 0, n - 1);
    printf("\nPhan tu lon nhat la %d\n", MaxArray(a, n));
    FindLongestDescendingSubArray(a, n, max_arr_start, max_arr_end);
    printf("\nMang con giam dan dai nhat:\n");
    PrintArray(a, n, max_arr_start, max_arr_end);
}

