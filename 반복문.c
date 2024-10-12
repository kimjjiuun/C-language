// 나머지 연산자 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
    int cupsize;
    printf("컵의 사이즈 입력: ");  // Prompt the user to enter a score
    scanf("%d", &cupsize);            // Read the score

    // Determine the grade based on the score and print the appropriate message
    if (cupsize < 100) {
        printf("small");
    }
    else if (100<=cupsize<200) {
        printf("Medium");
    }
    else if (cupsize >= 200) {
        printf("Large");
    }

    

    return 0;  // Return from main
}