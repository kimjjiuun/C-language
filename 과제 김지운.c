#include <stdio.h>
 
int main(void) {
    
    printf("�̸�: ������\n");
    printf("�й�: 202431874\n");
    printf("�а�: �������ڰ��к�\n");

    for (int num = 1000; num < 10000; num++) {
        int fdivi = num / 100;  
        int bdiv = num % 100;   
        int sum = fdivi + bdiv; 

        if (sum * sum == num) {
            printf("Kaprekar ��: %d\n", num);
        }
    }

    return 0;
}
