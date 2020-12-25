#include <stdio.h>
#include <windows.h>
#include <math.h>
int IsDaffodil(int num) {
	//1.¼ÆËãÎ»Êı
	int temp = num;
	int y = 0;
	while (temp) {
		temp /= 10;
		y++;
	}
	//2.ÅĞ¶Ï153=1^3+5^3+3^3
	temp = num;
	int data = 0;
	int sum = 0;
	for (int i = 0; i < y; i++) {
		data = temp % 10;
		sum += pow(data, y);
		temp /= 10;
	}
	return sum == num; 
}
int main() {
	for (int i = 0; i < 10000; i++) {
		if (IsDaffodil(i)) {
			printf("%d ",i);
		}
		
	}
	printf("\n");
	system("pause");
	return 0;
}