#include <stdio.h>
#include <windows.h>

//����ˮ����:һƿ��ˮһԪ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ���Ժȶ�����ˮ

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
	printf("20��Ǯ���Ժȣ�%dƿ��ˮ\n", sum);
	system("pause");
	return 0;
}