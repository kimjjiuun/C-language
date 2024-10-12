#include <stdio.h>

int check_conditions(int phone_last4, int car_plate) {

    int phone = 0, temp = phone_last4;
    while (temp > 0) {
        phone = phone * 10 + temp % 10;
        temp /= 10;
    }
    if (phone != car_plate) {
        return 0; 
    }
    int A = car_plate / 1000;      
    int B = (car_plate / 100) % 10;
    int C = (car_plate / 10) % 10;  
    int D = car_plate % 10;         

 
    if (A == 0 || B == 0 || C == 0 || D == 0 || A == B || A == C || A == D || B == C || B == D || C == D) {
        return 0; 
    }
    if (A != D + 2) {
        return 0; 
    }
    if (B <= C) {
        return 0; 
    }

    return 1; 
}

int main() {
    printf("이름: 김지운\n");
    printf("학번: 202431874\n");
    printf("학과: 전기전자공학부\n");

    int 강좌번호 = 16456; 
    int 전화번호뒤4자리, 차번호판;

    for (전화번호뒤4자리 = 1000; 전화번호뒤4자리 <= 9999; 전화번호뒤4자리++) {
        for (차번호판 = 1000; 차번호판 <= 9999; 차번호판++) {
            if (전화번호뒤4자리 + 차번호판 == 강좌번호) {
                if (check_conditions(전화번호뒤4자리, 차번호판)) {
                    printf("차 번호판 숫자: %d\n", 차번호판);
                    return 0; 
                }
            }
        }
    }
}
