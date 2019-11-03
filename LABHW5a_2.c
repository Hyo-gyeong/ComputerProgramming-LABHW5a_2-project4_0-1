#include <stdio.h>
int main(void)
{
	int arr[4][4];
	int i, k, start = 1;

	for (i = 0; i < 4; i++) {
		for (k = 0; k < 4; k++) {
			arr[i][k] = start;
			start++;
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (k = 0; k < 4; k++){
		for (i = 3; i >= 0; i--){
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 3; i >= 0; i--) {
		for (k = 3; k >= 0; k--) {
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (k = 3; k >= 0; k--) {
		for (i = 0; i < 4; i++){
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++) {
		for (k = 0; k < 4; k++) {
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
}