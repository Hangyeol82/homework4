#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("----- 이한결  20210410556 -----\n");
    int list[5];
    int *plist[5];
    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int));       // plist의 0번째 인덱스에 int형 크기만큼 동적 할당
    printf("list[0] \t= %d\n", list[0]);        // list의 0번째 인덱스에 저장된 값 출력
    printf("list \t\t= %p\n", list);            // list의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]);      // list의 0번째 인덱스의 주소 출력
    printf("list + 0 \t= %p\n", list+0);        // list의 0번째 인덱스의 주소 출력
    printf("list + 1 \t= %p\n", list+1);        // list의 1번째 인덱스의 주소 출력
    printf("list + 2 \t= %p\n", list+2);        // list의 2번째 인덱스의 주소 출력
    printf("list + 3 \t= %p\n", list+3);        // list의 3번째 인덱스의 주소 출력
    printf("list + 4 \t= %p\n", list+4);        // list의 4번째 인덱스의 주소 출력
    printf("&list[4] \t= %p\n", &list[4]);      // list의 4번째 인덱스의 주소 출력
    free(plist[0]);
}