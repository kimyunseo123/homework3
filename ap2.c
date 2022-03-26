#include <stdio.h>
#include <stdlib.h>
void main()
{
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/

    int list[5]; // 크기가 5인 배열
    int *plist[5]; // 크기가 5인 포인터 배열

    list[0] = 10;
    list[1] = 11;
    plist[0] = (int*)malloc(sizeof(int)); // plist[0]에 'int' type으로 주소 받기

    printf("list[0] \t= %d\n", list[0]); // list[0]의 값 = 10
    printf("address of list \t= %p\n", list); // &list[0] = &list = list = 기본주소(0061FF0C)
    printf("address of list[0] \t= %p\n", &list[0]); // &list[0] = &list = list = 기본주소(0061FF0C)
    printf("address of list + 0 \t= %p\n", list+0); // &list[0] = &list = list (list + 0) = 기본주소(0061FF0C)
    printf("address of list + 1 \t= %p\n", list+1); // list + 1 = &list[1] = 기본주소(0061FF0C) + 4 = 0061FF10
    printf("address of list + 2 \t= %p\n", list+2); // list + 2 = &list[2] = 기본주소(0061FF0C) + 8 = 0061FF14
    printf("address of list + 3 \t= %p\n", list+3); // list + 3 = &list[3] = 기본주소(0061FF0C) + 12 = 0061FF18
    printf("address of list + 4 \t= %p\n", list+4); // list + 4 = &list[4] = 기본주소(0061FF0C) + 16 = 0061FF1C
    printf("address of list[4] \t= %p\n", &list[4]); // &list[4] = list + 4 = 0061FF1C

    free(plist[0]); // 사용을 끝내고, 재사용 가능하도록 설정
}
