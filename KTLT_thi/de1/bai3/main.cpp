/* Created by Hung on 24/08/2022.
Cho tap tin van ban chua du lieu mang mot chieu cac so nguyen, theo cau truc sau:
- Dong dau tien chua so luong phan tu cua mang;
- Dong tiep theo chua gia tri cac phan tu cua mang, cach nhau boi khoang trang.
Viet chuong trinh gom co cac ham sau:
a. Ham ReadArray(char fname[], int a[], int &n) de doc mang mot chieu tu tap tin duoc xac dinh boi tham so fname, cac phan tu duoc dua vao mang a, so luong phan tu dua vao tham so n. (1d)
b. Ham de quy tra ve tong cac phan tu chan cua mang. (1d, neu giai theo cach khong de quy: 0.5d)
c. Ham tim va in ra mang con dai nhat chua cac phan tu tang dan lien tiep. (1.5d)
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

int TongChan(int a[], int n) {
    if (n == 0) return 0;
    else {
        if (a[n - 1] % 2 == 0) return a[n - 1] + TongChan(a, n - 1);
        else return TongChan(a, n - 1);
    }
}

void FindLongestAscendingSubArray(int a[], int n, int &max_start, int &max_end) {
    int max_len = 0, start = 0, end = 0;
    max_start = 0, max_end = 0;
    // Xét lan luot cac phan tu tu dau den ap chot
    int i = 0;
    while (i < n - 1)
        // Neu a[i] > a[i+1] thi xet phan tu ke tiep
        if (a[i] > a[i + 1])
            i++;
            // Nguoc lai, neu a[i] <= a[i+1] thi i là vi tri bat dau cua day con tang dan
        else {
            start = i;
            end = start;
            // Tim vi tri cuoi cua day con tang dan bat dau tu i
            while (a[end] <= a[end + 1] && end < n - 1)
                end++;
            // Neu day con dang xet dai hon day con truoc do thi ghi nhan vi tri & do dai cua no
            if (end - start > max_len) {
                max_start = start;
                max_end = end;
                max_len = end - start;
            }
            // Chuyen sang vi tri bat dau tim day con tiep theo
            i = end;
        }
}

int main() {
    int a[MAX], n;
    int max_arr_start, max_arr_end;
    ReadArray("E:\\MON_HOC\\NMLT\\KTLT_thi\\de1\\bai3\\array.txt", a, n);
    printf("Mang doc tu file:\n");
    PrintArray(a, n, 0, n - 1);
    printf("\nTong cac phan tu chan = %d\n", TongChan(a, n));
    FindLongestAscendingSubArray(a, n, max_arr_start, max_arr_end);
    printf("\nMang con tang dan dai nhat:\n");
    PrintArray(a, n, max_arr_start, max_arr_end);
}

