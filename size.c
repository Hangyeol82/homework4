#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("-----[이한결]-----[2021041055]-----\n");
    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x));         // int ** 형의 값을 나타내기 때문에 8바이트
    printf("sizeof(*x) = %lu\n", sizeof(*x));       // int * 형의 값을 나타내기 때문에 8바이트
    printf("sizeof(**x) = %lu\n", sizeof(**x));     // int 형의 값을 나타내기 때문에 4바이트
}