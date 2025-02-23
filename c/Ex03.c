#include <stdio.h>

// 함수 선언, int형이므로 정수형을 반환
int isPerfectNum(int num) {
    int sum = 0;

    for (int i=1; i<num; i++) {
        if (num % i == 0) // num값을 i로 나누었을 때 나머지가 0인 경우
            sum += i;     // sum에 i 값 누적
    }

    if (num == sum) return 1; // num값과 sum값이 같을 때 true 반환
    else return 0;            // 같지 않으면 false 반환
}

int main() {
    int r = 0;

    for(int i=1; i<=100; i++) // i가 1부터 100까지 반복
    if(isPerfectNum(i))       // i가 완전수일때만 그 값을 누적
        r += i;

    printf("%d", r);
}