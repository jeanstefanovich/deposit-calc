#include "deposit.h"
int deposit(int srok, double  summ){
	if(srok<=30) return(summ*0.9);
	if(srok>=31&&srok<=120&&summ<=100000) return(summ*1.02);
	if(srok>=31&&srok<=120&&summ>=100000) return(summ*1.03);
	if(srok>=121&&srok<=240&&summ<=100000) return(summ*1.06);
	if(srok>=121&&srok<=240&&summ>=100000) return(summ*1.08);
	if(srok>=241&&srok<=365&&summ<=100000) return(summ*1.12);
	if(srok>=241&&srok<=365&&summ>=100000) return(summ*1.15);
	return 0;
}

int error(int srok, double  summ){
	if(summ < 10000 && srok<0 && srok>365) {
		return -1;
	}
	return 0;
}
