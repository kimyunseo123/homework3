#include <stdio.h>
#define MAX_SIZE 100 // MAX_SIZE를 100으로 지정

float sum(float [], int); 
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/
    
    for(i=0; i < MAX_SIZE; i++) // (0 <= i < MAX_SIZE(100)) 동안 반복
    input[i] = i; // input[i]의 값 = i
    /* for checking call by reference */
    printf("address of input = %p\n", input); // input의 메모리 주소 = 004070A0
    answer = sum(input, MAX_SIZE); // sum 함수의 return 값을 answer에 저장
    printf("The sum is: %f\n", answer); // answer 값 = 4950.000000
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); // list 의 값 = 004070A0
    printf("address of list = %p\n\n", &list); // list 의 값 = input의 메모리 주소 = 004070A0

    int i;
    float tempsum = 0; // tempsum 값을 0으로 지정

    for(i = 0; i < n; i++) // (0 <= i < n) 동안 반복
    tempsum += list[i]; // tempsum = tempsum + list[i]

    return tempsum; // tempsum 값 return
}
