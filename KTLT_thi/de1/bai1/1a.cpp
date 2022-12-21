// Created by Hung on 24/08/2022.
#include<stdio.h>
#define Square(x) x*x
int main()
{
    int a=6, b=2;
    printf("%d", Square(a + b));
    return 0;
}

/*
 * Ket qua khi chay chuong trinh la 20
 * Giai thich : tu dinh nghia macro, Spuare(6+2) = 6+2*6+2=20
 */
