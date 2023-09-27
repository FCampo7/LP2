#include <iostream>
#include "led.h"

int main(){
	Led l1(1), l2(2);

	while(1){
		l1.Mde_Led();
		l2.Mde_Led();
	}

	return 0;
}