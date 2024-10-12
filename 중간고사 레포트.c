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
    printf("�̸�: ������\n");
    printf("�й�: 202431874\n");
    printf("�а�: �������ڰ��к�\n");

    int ���¹�ȣ = 16456; 
    int ��ȭ��ȣ��4�ڸ�, ����ȣ��;

    for (��ȭ��ȣ��4�ڸ� = 1000; ��ȭ��ȣ��4�ڸ� <= 9999; ��ȭ��ȣ��4�ڸ�++) {
        for (����ȣ�� = 1000; ����ȣ�� <= 9999; ����ȣ��++) {
            if (��ȭ��ȣ��4�ڸ� + ����ȣ�� == ���¹�ȣ) {
                if (check_conditions(��ȭ��ȣ��4�ڸ�, ����ȣ��)) {
                    printf("�� ��ȣ�� ����: %d\n", ����ȣ��);
                    return 0; 
                }
            }
        }
    }
}
