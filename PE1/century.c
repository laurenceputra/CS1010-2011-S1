#include <stdio.h>

int printCentury(int year);
void printOrdinal(int century);

int main(){
	int year;
	int century;

	printf("Enter year: ");
	scanf("%d", &year);

	printf("The year %d falls in the ", year);
	century = printCentury(year);
	printOrdinal(century);
	printf(" century.");
	return 0;
}

int printCentury(int year){
	int century = year / 100 + 1;
	printf("%d", century);
	return century;
}

void printOrdinal(int century){
	int modHundred = century % 100;
	int modTen = century % 10;
	
	if(modHundred == 11 ||  modHundred == 12 || modHundred == 13){
		printf("th");
	}
	else if(modTen == 1){
		printf("st");
	}
	else if(modTen == 2){
		printf("nd");
	}
	else if(modTen == 3){
		printf("rd");
	}
	else {
		printf("th");
	}
}