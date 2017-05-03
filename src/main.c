#include <cstdio>
#include <iostream>
#include "deposit.h"

int main(){
	using namespace std;
	int srok;
	double summ;
	cout<<"\nВведите срок, в месяцах"<<endl;
	cin>>srok;
	cout<<"\nВведите сумму: "<<endl;
	cin>>summ;
	if(error(srok,summ)>(-1)){
		cout<<"\nСумма на конец "<<deposit(srok,summ)<<endl;
	}
	else{
	cout<<"\nНекорректная сумма/дата"<<endl;
	}
    return 0;
}
