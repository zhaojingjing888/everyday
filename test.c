#include <stdio.h>
#include <windows.h>
//��һ�������������ż���ֿ�
//���ף����ǲ��ı�������ż����ԭ�д���
void SwitchOdd2Even(int arr[],int num) {
	int left = 0;
	int right = num - 1;
	while (left < right) {
		while (left < right && arr[left] & 1) {
			left++;
		}//�ж��������Ϊ����
		while (left < right && !(arr[right] & 1)) {
			right--;
		}//�ж��ұ�����Ϊż��
		if (left < right) {
			arr[left] ^= arr[right];
			arr[right] ^= arr[left];
			arr[left] ^= arr[right];
		}
	}
}
int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	SwitchOdd2Even(arr,num);
	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}