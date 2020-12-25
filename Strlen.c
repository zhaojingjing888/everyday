#include <stdio.h>
#include <windows.h>
void Strlen(const char *arr) {
	char *end = arr;
	int len = 0;
	while (*end != '\0') {
		end++;
	}
	len = end - arr;
	printf("%d\n", len);
}

int main() {
	char arr[] = "jingshuangwoaini";
	Strlen(arr);
	system("pause");
	return 0;
	}