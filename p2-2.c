#include <stdio.h>
void print1 (int *ptr, int rows);

int main()
{
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/
    
    int one[] = {0, 1, 2, 3, 4}; // one[0] ~ one[4] 값 지정

    printf("one = %p\n", one); // &one[0] = &one = one = 기본주소(0061FF0C)
    printf("&one = %p\n", &one); // &one[0] = &one = one = 기본주소(0061FF0C)
    printf("&one[0] = %p\n", &one[0]); // &one[0] = &one = one = 기본주소(0061FF0C)
    printf("\n");
    print1(&one[0], 5); // &one[0]의 값(주소)을 *ptr가 받고, 정수 5를 row가 받음

    return 0;
}

void print1 (int *ptr, int rows)
{/* 포인터를 이용해 일차원 배열을 출력 */
    int i;

    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) // (0 <= 0 < rows(5)) 동안 반복
    printf("%p \t %5d\n", ptr + i, *(ptr + i));
    // one(= &one[0])의 주소값 = ptr (ptr + 0) = 0061FF0C // (ptr + 0)이 가리키는 값 반환 = 0
    // (ptr + 1) = (0061FF0C + 4) = 0061FF10 // (ptr + 1)이 가리키는 값 반환 = 1
    // (ptr + 2) = (0061FF0C + 8) = 0061FF14 // (ptr + 2)이 가리키는 값 반환 = 2
    // (ptr + 3) = (0061FF0C + 12) = 0061FF18 // (ptr + 3)이 가리키는 값 반환 = 3
    // (ptr + 4) = (0061FF0C + 16) = 0061FF1C // (ptr + 4)이 가리키는 값 반환 = 4
    printf("\n");
}
