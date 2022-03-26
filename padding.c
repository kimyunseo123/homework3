#include <stdio.h>
struct student {
    char lastName[13]; // 13 bytes (char (=1byte) * 13)
    int studentId; // 4 bytes (int (=4byte))
    short grade; // 2 bytes (short (=2byte))
};

int main()
{
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/
    
    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student)); // 24byte (= 16byte + 4byte + 4byte)
    /* 구조체는 기본적으로 4byte 단위로 메모리 공간을 구성하므로
       char lastName[13]은 13byte 대신 16byte를, short grade은 2byte 대신 4byte를 구성함 */
    printf("size of int = %ld\n", sizeof(int)); // 4 bytes (int ( =4byte))
    printf("size of short = %ld\n", sizeof(short)); // 2 bytes (short ( =2byte))

    return 0;
}
