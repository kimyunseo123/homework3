#include <stdio.h>
struct student1 { // student1 구조체 생성
    char lastName;
    int studentId;
    char grade;
};

typedef struct { // (typedef를 사용하여) student2 구조체 생성
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    /*****************성명, 학번이 출력되도록 수정*****************/
    printf("[----- [Kim Yun Seo] [2020021016] -----]\n\n");
    /************************************************************/
    
    struct student1 st1 = {'A', 100, 'A'}; // 구조체 student1를 배열을 사용하여 초기화
    // 구조체 student1의 st1 생성
    // (lastName = A, studentId =100, grade = A 로 초기화)
    printf("st1.lastName = %c\n", st1.lastName); // A
    printf("st1.studentId = %d\n", st1.studentId); // 100
    printf("st1.grade = %c\n", st1.grade); // A

    student2 st2 = {'B', 200, 'B'}; // 구조체 student2를 배열을 사용하여 초기화
    // 구조체 student2의 st2 생성
     // (lastName = B, studentId =200, grade = B 로 초기화)
    printf("\nst2.lastName = %c\n", st2.lastName); // B
    printf("st2.studentId = %d\n", st2.studentId); // 200
    printf("st2.grade = %c\n", st2.grade); // B

    student2 st3; // 구조체 student2의 st3 생성
    st3 = st2; //st2 와 st3 가 같도록 초기화 (= (student2 st3 = {'B', 200, 'B'}) )
    printf("\nst3.lastName = %c\n", st3.lastName); // B
    printf("st3.studentId = %d\n", st3.studentId); // 200
    printf("st3.grade = %c\n", st3.grade); // B

    // equality test (식에 산술 또는 포인터 형식이 있어야 하는데 구조체 형식이 있어서 오류 발생)
    /*
    if(st3 == st2) // not working
    printf("equal\n");
    else
    printf("not equal\n");
    */

    return 0;
}
