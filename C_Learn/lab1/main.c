#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	double a,b,c,x1,x2;
	printf("Vvedite korni: ");
	scanf("%lf %lf %lf", &a,&b,&c);
	
	double d;
	
	
	d = (b*b) - (4*a*c);
	
	if (d < 0 ){
		printf("No roots\n");
	}
	else if(d == 0){
		x1 = (-b)/(2*a);
		printf("Roots: %f", x1);
	}
	else if(d>0){
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("Roots: %f, %f", x1, x2);
	}
	return 0;
}
