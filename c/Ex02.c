#include <stdio.h>

// 구조체 정의
struct insa {
    char name[10];
    int age;
    struct insa* impl_a;
    struct insa* impl_b;
};

int main() {

    // 구조체 생성
    struct insa p1 = {"Kim", 28, NULL, NULL};
    struct insa p2 = {"Lee", 36, NULL, NULL};
    struct insa p3 = {"Park", 41, NULL, NULL};

    // 주소 저장
    p1.impl_a = &p2;
    p2.impl_b = &p3;

    // 저장된 값 확인
    printf("p1.impl_a: %c \n", p1.impl_a); //x00(16) > 0(10)
    printf("p2.impl_b: %c \n", p2.impl_b); //xe0(16) > e × 16^1 + 0 × 16^0 = 14 × 16 + 0 = 224(10)

    printf("%s \n", p1.impl_a->name); // p1.impl_a 가 가리키는 곳의 name 값 출력, Lee
    printf("%d", p2.impl_b->age);     // p2.impl_b 가 가리키는 곳의 age 값 출력, 41
}