#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    
    // 랜덤 시드 초기화
    srand(time(NULL));
    
    // 컴퓨터의 선택을 랜덤으로 생성 (0: 주먹, 1: 가위, 2: 보)
    computerChoice = rand() % 3;
    
    // 사용자 입력 받기
    printf("가위바위보 게임에 오신 것을 환영합니다!\n");
    printf("주먹(0), 가위(1), 보(2) 중 하나를 선택하세요: ");
    scanf("%d", &userChoice);
    
    // 입력 값이 유효한지 확인
    if (userChoice < 0 || userChoice > 2) {
        printf("잘못된 입력입니다. 0, 1, 2 중 하나를 선택하세요.\n");
        return 1;
    }
    
    // 결과 출력
    printf("당신의 선택: %d, 컴퓨터의 선택: %d\n", userChoice, computerChoice);
    
    if (userChoice == computerChoice) {
        printf("비겼습니다!\n");
    } else if ((userChoice == 0 && computerChoice == 1) || 
               (userChoice == 1 && computerChoice == 2) || 
               (userChoice == 2 && computerChoice == 0)) {
        printf("당신이 이겼습니다!\n");
    } else {
        printf("당신이 졌습니다!\n");
    }
    
    return 0;
}
