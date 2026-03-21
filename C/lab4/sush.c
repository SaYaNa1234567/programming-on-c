#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "all.h"

int sush(int a, int b, int c){
	if (a+b <= c || a+c <= b || b+c <= a) {
        return printf("Треугольник не существует.\n");
    }
    else{
    	return printf("Sush\n");
	}
}
