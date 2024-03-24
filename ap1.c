#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("----- 이한결  20210410556 -----\n");
    int list[5];
    int *plist[5] = {NULL,};                    // 포인터 배열의 모든 요소를 NULL로 초기화  
    plist[0] = (int *)malloc(sizeof(int));      // plist배열의 0번째 인덱스에 int형 크기만큼 동적 할당
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;
    printf("list[0] = %d\n", list[0]);          // list의 0번째 인덱스에 저장된 값 출력
    printf("&list[0] = %p\n", &list[0]);        // list의 0번째 인덱스의 주소 출력
    printf("list = %p\n", list);                // list의 주소 출력 (배열의 이름은 배열의 첫 번째 요소의 주소와 같음)
    printf("&list = %p\n", &list);              // list의 주소 출력 (&로도 주소를 출력할 수 있음)
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);          // list의 1번째 인덱스에 저장된 값 출력
    printf("&list[1] = %p\n", &list[1]);        // list의 1번째 인덱스의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1));    // list의 1번째 인덱스에 저장된 값 출력 (포인터 연산)
    printf("list+1 = %p\n", list+1);            // list의 1번째 인덱스의 주소 출력
    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]);      // plist의 0번째 인덱스에 저장된 값 출력
    printf("&plist[0] = %p\n", &plist[0]);      // plist의 0번째 인덱스의 주소 출력
    printf("&plist = %p\n", &plist);            // plist의 주소 출력
    printf("plist = %p\n", plist);              // plist의 주소 출력
    printf("plist[0] = %p\n", plist[0]);        // 동적 할당한 plist의 0번째 인덱스의 주소 출력
    printf("plist[1] = %p\n", plist[1]);        // plist의 1번째 인덱스의 주소 출력 (NULL)
    printf("plist[2] = %p\n", plist[2]);        // plist의 2번째 인덱스의 주소 출력 (NULL)
    printf("plist[3] = %p\n", plist[3]);        // plist의 3번째 인덱스의 주소 출력 (NULL)
    printf("plist[4] = %p\n", plist[4]);        // plist의 4번째 인덱스의 주소 출력 (NULL)
    free(plist[0]);                             // 동적 할당된 메모리 해제
}