#include <stdio.h>
#include <stdlib.h>

int main() {
	int N=4;
	double matrix[N][N];
	int i, j;
	printf("Matrix:\n");
	double main_diag, pob_diag;
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("	matrix[%d][%d] = ", i, j);
			scanf("%lf", &matrix[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%.2lf ", matrix[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i<N; i++){
		main_diag = main_diag + matrix[i][i];
		
		pob_diag = pob_diag + matrix[i][(N-1) - i];
	}
	printf("\nSumm main diag = %.2lf\n", main_diag);
	printf("Summ poboch diag = %.2lf\n", pob_diag);
	int M = 2;
	double matrix2[M][M];
	double res[M][M];
	int k;
	
	printf("Matrix2x2:\n");
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			res[i][j]=0;
		}
	}
	
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			printf("	matrix2[%d][%d] = ", i, j);
			scanf("%lf", &matrix2[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			printf("%.2lf ", matrix2[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i<M; i++){
		for (j = 0; j<M; j++){
			for (k = 0; k<M; k++){
				res[i][j]= res[i][j] + (matrix2[i][k] * matrix2[k][j]);
			}
		}
	}
	for (i = 0; i < M; i++) {
		for (j = 0; j < M; j++) {
			printf("%.2lf ", res[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
