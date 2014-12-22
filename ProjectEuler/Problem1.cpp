#include <iostream>

int main(){
	int total = 0;
	for (int x =1;  x< 1000; x++){
		if ((x % 3 == 0) || (x % 5 == 0)){
			total += x;
			}	
	}

	std::cout << total;
	return 0;
 }