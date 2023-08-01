#include<cstdio>
#include<vector>

int findIndex(int a,std::vector<int>&arr) {
	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] == a) return i;
	}
}
int findMin(std::vector<int>&arr) {
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
	std::vector<int> arr(n);
	std::vector<int> a(n);
	printf("Enter numbers:");
	for (int i = 0; i < n; ++i) {
		scanf_s("%i ", &arr[i]);
		a[i] = 0;
	}
	a[0] = 1;
	puts("");
	puts("= = = = = = = = = = =");
	puts(" = = = = = = = = = = ");
	puts("");
	while (true) {
		for (int i = 0; i < n; ++i) {
			printf("%i ", arr[i]);
		}
		puts("");
		for (int i = 0; i < n; ++i) {
			printf("%i ", a[i]);
		}
		puts("");
		printf("  Enter comand:");
		int c;
		scanf_s("%i", &c);
		if (c == 2) {
			int i = findIndex(1, a);
			a[i] = 0;
			a[i + 1] = 1;
			puts("");
		}
		else
			if (c == 1) {
				int i = findIndex(1, a);
				a[i] = 0;
				a[i - 1] = 1;
				puts("");
			}
			else
				if (c == -1) {
					int i = findIndex(1, a);
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
							int j = findIndex(1, a);
							int i = findIndex(findMin(arr), arr);
							a[i] = 1;
							a[j] = 0;
						}
						else
							if (c == 0)break;
	}
}