#include <stdio>
#include <oistream>
#include "deposit.h"
int main(){
	int srok;
	double summ;
	cout<<"\nВведите срок, в месяцах";
	cin>>srok;
	cout<<"\nВведите сумму: ";
	cin>>summ;
	if(error(srok,summ)>(-1)){
		cout<<"\nСумма на конец "<<deposit(srok,summ);
	}
	else{
	cout<<"\nНекорректная сумма/дата";
	}
    return 0;
}