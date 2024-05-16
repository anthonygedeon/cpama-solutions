#include <stdio.h>

int main(void){ 
	int area_code = 762;
	switch (area_code) {
		case 229: printf("Albany"); break;

		case 470: case 678: case 770: 
		case 404: printf("Atlanta"); break;

		case 478: printf("Macon"); break;

		case 762: 
		case 706: printf("Columbus"); break;

		case 912: printf("Savannah"); break;
		default: printf("Area code not recongnized");
	
	}
	return 0;
}
