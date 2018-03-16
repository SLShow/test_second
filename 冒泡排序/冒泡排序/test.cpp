////////////////冒泡排序
#include<stdio.h>
#include<stdlib.h>

//i think that i should test github how to control a project

const int N = 5;
int a[101];

int main() {
	for (int i = 0;i < N;i++) {
		scanf("%d", &a[i]);
	}

	int temp = 0;
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N-1-i;j++) {
			if (a[j] > a[j + 1]) {//若前面大于后面，则交换，使最大的沉水底
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (int i = 0;i < N;i++)
		printf("%d ", a[i]);

	return 0;
}