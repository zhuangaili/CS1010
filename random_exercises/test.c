#include <stdio.h>
void printArray(int img[][4],int size);
int main(void) {
char arr[5] = {'0', 1, '\0', '1', 0};
int i = 0, x = 0;
while (i++ < 4) {
	if (!arr[i] && x++) {

		++x;
	}
	printf("%d and %d\n", i , x);
	}
}