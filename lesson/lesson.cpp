#include<cstdio>
#include<vector>
#include"Cursor.h"

int findIndex(int a,const std::vector<int>&arr) {
	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] == a) return i;
	}
}
int findMin(const std::vector<int>&arr) {
	int min = arr[0];
	for (int i = 1; i < arr.size(); ++i) {
		if (min> arr[i])min=arr[i];
	}
	return min;
}
int main() {
	int n;
	printf("Enter dimension:");
	scanf_s("%i", &n);
	Cursor cursor(n);
	std::vector<int> arr(n);
	printf("Enter numbers:");
	for (int i = 0; i < n; ++i) {
		scanf_s("%i ",&arr[i]);
	}
	puts("");
	puts("= = = = = = = = = = =");
	puts(" = = = = = = = = = = ");
	puts("");
	while (true) {
		for (int i = 0; i < n; ++i) {
			printf("%i ", arr[i]);
		}
		puts("");
		cursor.print();
		puts("");
		printf("  Enter comand:");
		int c;
		scanf_s("%i", &c);
		if (c == 2) {
			int i = cursor.getIndex();
			cursor.move(1);
			puts("");
		}
		else
			if (c == 1) {
				int i = cursor.getIndex();
				cursor.move(-1);
				puts("");
			}
			else
				if (c == -1) {
					int i = cursor.getIndex();
					int b;
					printf("       Enter new element:");
					scanf_s("%i", &b);
					if (!(b >= 10) && b >= 0) {
						arr[i] = b;
					}
					puts("");
				}
				else
					if (c == -3) {
						printf("       Min element:%i", findMin(arr));
						puts("");
					}
					else
						if (c == 3) {
							int j = cursor.getIndex();
							int i = findIndex(findMin(arr), arr);
							int a = i - j;
							cursor.move(a);
						}
						else
							if (c == -2) {
								char c;
								char bs;
								printf("   New cursor:");
								scanf_s("\n%c",&c);
								
								printf("   New blank space:");
								scanf_s("\n%c", &bs);
								cursor.changeCursor(c,bs);
								puts("");
							}
							else
							  if (c == 0)break;
	}
}