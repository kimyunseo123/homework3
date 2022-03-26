#include<stdio.h>
#include<stdlib.h>
void main()
{
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/
    
    int **x; // int형 이중포인터

    // 포인터 변수의 크기는 CPU 크기에 따라 달라짐
    // 일반적인 32bit CPU에서는 1word의 크기가 4byte이므로 포인터변수의 크기도 4byte
    // 이중포인터도 마찬가지
    printf("sizeof(x) = %lu\n", sizeof(x)); // 4 (int (= 4byte))
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // 4
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //4
}
