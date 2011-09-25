#include <stdio.h>

int digit_in_num(int digit, int num);
int count_winners(int mustHave, int factor, int num);
int main(){
	int factor, mustHave, num;

	printf("Enter factor-digit: ");
	scanf("%d", &factor);

	printf("Enter must-have-digit: ");
	scanf("%d", &mustHave);

	printf("Enter number of participants: ");
	scanf("%d", &num);

	printf("Number of winners: %d", count_winners(mustHave, factor, num));
}

int digit_in_num(int digit, int num){
	while(num != 0){
		if(num % 10 == digit){
			return 1;
		}
		num = num / 10;
	}
	return 0;
}

int count_winners(int mustHave, int factor, int num){
	int curNum = factor;
	int count = 0;

	while(curNum < num){
		if(digit_in_num(mustHave, curNum) == 1){
			count++;
		}
		curNum = curNum + factor;
	}
	return count;
}