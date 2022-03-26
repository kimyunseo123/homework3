#include <stdio.h>
#include <stdlib.h>
void main()
{
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/

    int list[5]; // 크기가 5인 배열
    int *plist[5] = {NULL,}; // 크기가 5인 포인터 배열

    plist[0] = (int *)malloc(sizeof(int)); // plist[0]에 'int' type으로 주소 받기
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200; 

    printf("value of list[0] = %d\n", list[0]); // list[0]의 값 = 1
    printf("address of list[0] = %p\n", &list[0]); // &list[0] = list[0] 메모리 주소 = 0061FF1C
    printf("value of list = %p\n", list); // &list[0] = &list = list = 기본주소(0061FF1C)
    printf("address of list (&list) = %p\n", &list); // &list[0] = &list = 0061FF1C
    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); // list[1]의 값 = 100
    printf("address of list[1] = %p\n", &list[1]); // &list[1] = list[1] 메모리 주소 = 0061FF10 (기본주소 + sizeof(int))
    printf("value of *(list+1) = %d\n", *(list + 1)); // *(list + 1) = list[1]의 값 = 100
    printf("address of list+1 = %p\n", list+1); // &list[1] = (list + 1) = 0061FF10
    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); // *plist[0]의 값 = 200
    printf("&plist[0] = %p\n", &plist[0]); // &plist[0] = plist[0] 메모리 주소 = 0061FEF8
    printf("&plist = %p\n", &plist); // &plist[0] = &plist = plist = 기본주소(0061FEF8)
    printf("plist = %p\n", plist); // &plist[0] = &plist = 0061FEF8
    printf("plist[0] = %p\n", plist[0]); // plist[0]의 값 = 008316C8 (malloc으로 받은 값)
    printf("plist[1] = %p\n", plist[1]); // plist[1]의 값 = null (00000000)
    printf("plist[2] = %p\n", plist[2]); // plist[2]의 값 = null (00000000)
    printf("plist[3] = %p\n", plist[3]); // plist[3]의 값 = null (00000000)
    printf("plist[4] = %p\n", plist[4]); // plist[4]의 값 = null (00000000)

    free(plist[0]); // 사용을 끝내고, 재사용 가능하도록 설정
}
