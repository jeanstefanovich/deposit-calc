#include <iostream>

int main(){
	using namespace std;
	int srok;
	double summ;
	cout<<"Введите срок";
	cin>>srok;
	cout<<"Введите сумму";
	cin>>summ;
	if(summ<0&&srok<0) {
		cout<<"Некорректная сумма/дата";
		return 0;
	}
	if(summ<10000) cout<<"Сумма ниже порога 10000 р.";
	if(srok<=30) cout<<"Сумма на конец"<<summ*0.9;
	if(srok>=31&&srok<=120&&summ<=100000) cout<<"Сумма на конец"<<summ*1.02;
	if(srok>=31&&srok<=120&&summ>=100000) cout<<"Сумма на конец"<<summ*1.03;
	if(srok>=121&&srok<=240&&summ<=100000) cout<<"Сумма на конец"<<summ*1.06;
	if(srok>=121&&srok<=240&&summ>=100000) cout<<"Сумма на конец"<<summ*1.08;
	if(srok>=241&&srok<=365&&summ<=100000) cout<<"Сумма на конец"<<summ*1.12;
	if(srok>=241&&srok<=365&&summ>=100000) cout<<"Сумма на конец"<<summ*1.15;
	return 0;
}