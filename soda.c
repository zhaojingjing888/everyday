#include <stdio.h>
#include <windows.h>

//喝汽水问题:一瓶汽水一元，2个空瓶可以换一瓶汽水，
//给20元可以喝多少汽水

int main() {

	int money = 20;
	int sum = 0;
	int bottle = 0;
	sum = money / 1;	
	bottle = money / 1;

	while (bottle > 1) {
		sum += bottle / 2;
		bottle = bottle/2 + bottle %2;
	}
	printf("20块钱可以喝：%d瓶汽水\n", sum);
	system("pause");
	return 0;
}