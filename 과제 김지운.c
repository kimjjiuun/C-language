#include <stdio.h>
 
int main(void) {
    
    printf("이름: 김지운\n");
    printf("학번: 202431874\n");
    printf("학과: 전기전자공학부\n");

    for (int num = 1000; num < 10000; num++) {
        int fdivi = num / 100;  
        int bdiv = num % 100;   
        int sum = fdivi + bdiv; 

        if (sum * sum == num) {
            printf("Kaprekar 수: %d\n", num);
        }
    }

    return 0;
}
