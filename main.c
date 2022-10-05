#include <stdio.h>

int main(void) {
    int score = 0; 

    printf("請輸入分數：");
    scanf("%d", &score);
	if (score > 100 | score < 0){
		puts("輸入不正確");
		return 0;
	}   
   
    switch(score / 10) { 
        case 10:
        case 9: 
            puts("A");
            break; 
        case 8: 
            puts("B");
            break; 
        case 7: 
            puts("C");
            break; 
        case 6: 
            puts("D");
            break; 
        default: 
            puts("E");
    }  
    return 0;
} 
