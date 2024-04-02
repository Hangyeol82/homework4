#include <stdio.h>
struct student
{
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    printf("-----[이한결]-----[2021041055]-----\n");
    struct student pst;
    printf("size of student = %ld\n", sizeof(struct student));      // 가장 큰 자료형 (int형)을 기준으로 구조체를 정렬한다 13(lastName) + 3(padding) + 4(studentId) + 2(grade) + 2(padding) = 24
    printf("size of int = %ld\n", sizeof(int));                     // int형은 4바이트
    printf("size of short = %ld\n", sizeof(short));                 // short형은 2바이트
    return 0;
}s