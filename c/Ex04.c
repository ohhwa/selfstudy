#include <stdio.h>

// 함수 선언, int형이므로 정수형을 반환
int f(int n) {
    if (n<=1) return 1;     // n이 1보다 작거나 같으면 true 반환 (반복)
    else return n * f(n-1); // 그렇지 않으면 n * f(n-1) 반환
}

int main() {
    printf("%d", f(7)); // f함수의 인자에 7 입력
}