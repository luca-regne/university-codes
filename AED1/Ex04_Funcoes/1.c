#include <stdio.h>

void isOdd (int number){
    if(number % 2 == 0){
        printf("\nO numero e par");
    } else {
        printf("\nO numero e impar");
    }
}

int main (){
	int number;
	printf("Informe um numero:");
	scanf("%i", &number);
    isOdd(number);
    return 0;
}

