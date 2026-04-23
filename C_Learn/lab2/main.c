#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i,j;
	double m[3][3];
	int m1[2][2];
	double main_diag = 0;
	double poboch = 0;
	
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("Matrix[%d][%d]: ", i,j);
			scanf("%lf", &m[i][j]);
		}
	}
	for(i = 0; i<3; i++){
		for(j = 0; j<3; j++){
			printf("%8.2lf",m[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0;i<3;i++){
		main_diag += m[i][i];
		poboch += m[i][(3-1)-i];
	}
	printf("%lf", main_diag);
	printf("\n");
	
	printf("%lf", poboch);
	
	
	
	return 0;
}
