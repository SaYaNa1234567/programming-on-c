#include <stdio.h>
#include <stdlib.h>

int main() {
	double matrix[3][3];
	int i, j;
	printf("Matrix:\n");
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("matrix[&d][&d] = ", i, j);
			scanf("%lf", &matrix[i][j]);
		}
	}
	return 0;
}
