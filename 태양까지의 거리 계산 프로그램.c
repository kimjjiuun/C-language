#include <stdio.h>

int main() {
    // ��� ����
    const double speedOfLight = 300000; // ���� �ӵ� 
    const double distanceToSun = 149600000; // �¾�� ���� ������ �Ÿ� 
    
    // �ð��� ��� (�Ÿ� / �ӵ�)
    double timeInSeconds = distanceToSun / speedOfLight;
    double timeInMinutes = timeInSeconds / 60;

    // ��� ���
    printf("���� �¾翡�� ������ �����ϴ� �� �ɸ��� �ð�: %f ��\n", timeInMinutes);

    return 0;



}
