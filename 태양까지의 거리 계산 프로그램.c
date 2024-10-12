#include <stdio.h>

int main() {
    // 상수 정의
    const double speedOfLight = 300000; // 빛의 속도 
    const double distanceToSun = 149600000; // 태양과 지구 사이의 거리 
    
    // 시간을 계산 (거리 / 속도)
    double timeInSeconds = distanceToSun / speedOfLight;
    double timeInMinutes = timeInSeconds / 60;

    // 결과 출력
    printf("빛이 태양에서 지구에 도달하는 데 걸리는 시간: %f 분\n", timeInMinutes);

    return 0;



}
