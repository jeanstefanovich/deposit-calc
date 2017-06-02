#include "deposit.h"
#include <stdio.h>

int main(){
	int srok;
	double summ;
	printf("Введите количество дней: ");
	scanf("%d", &srok);
	printf("Введите сумму вклада: ");
	scanf("%lf", &summ);
	if(error(srok,summ)>(-1)){
		printf("\nСумма на конец: %d",deposit(srok,summ));
	}
	else{
	printf("\nНекорректная сумма/дата");
	}
    return 0;
}
