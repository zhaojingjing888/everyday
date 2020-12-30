#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

int Add(int x, int y) {
	return x + y;

}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x*y;

}
int Div(int x, int y) {
	if (y == 0) {
		printf("除数不能为0\n");
		return -1;
	}
	return x/y;

}
int main() {

	int quit = 0;
	int select = 0;
	int(*p[5])(int, int) = { NULL,Add,Sub,Mul,Div };
	while (!quit) {
		printf("请选择你要执行的操作：\n");
		printf("######################\n");
		printf("#1.Add          2.Sub#\n");
		printf("#3.Mul          4.Div#\n");
		printf("#############  5.Quit#\n");
		printf("######################\n");
		scanf("%d", &select);

		if (select > 5 || select < 1) {
			printf("请重新输入\n");
			continue;
		}
		if (select == 5) {
			quit = 1;
			continue;
		}

		printf("请输入两个数：x y\n");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		int result = p[select](x,y);
		printf("result:%d\n", result);		
	}
	
	system("pause");
	return 0;
}