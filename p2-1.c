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
    printf("address of input = %p\n", input); // input의 메모리 주소값 = 004070A0

    answer = sum(input, MAX_SIZE); // sum 함수의 return 값을 answer에 저장
    /* input의 주소를 list가 받아, input 배열을 list를 통해 접근
    값을 그대로 변수 n에 복사하여, n이 변경되도 caller의 값이 변하지 않음 */

    printf("The sum is: %f\n", answer); // answer 값 = 4950.000000
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list); // input(= &input[0])의 주소값 = list = 004070A0
    printf("address of list = %p\n\n", &list); // list 의 메모리 주소값 = 0061FF00

    int i;
    float tempsum = 0; // tempsum 값을 0으로 지정

    for(i = 0; i < n; i++) // (0 <= i < n) 동안 반복
    tempsum += list[i]; // tempsum = tempsum + list[i]

    return tempsum; // tempsum 값 return
}
