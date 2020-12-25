#include <stdio.h>
#include <windows.h>
//将一个数组的奇数和偶数分开
//进阶：考虑不改变奇数和偶数的原有次序。
void SwitchOdd2Even(int arr[],int num) {
	int left = 0;
	int right = num - 1;
	while (left < right) {
		while (left < right && arr[left] & 1) {
			left++;
		}//判断左边向右为奇数
		while (left < right && !(arr[right] & 1)) {
			right--;
		}//判断右边向左为偶数
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