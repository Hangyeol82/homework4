#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
    printf("----- 이한결  20210410556 -----\n");
    int one[] = {0, 1, 2, 3, 4};
    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);                               // 함수 호출 
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);                                   // 함수 호출               
    return 0;
}
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));     // ptr의 i번째 인덱스의 주소와 값을 출력
    printf("\n");
}