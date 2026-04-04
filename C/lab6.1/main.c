#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *f1;
	FILE *f2;
	char line[256];
	int i;
	int year;
	int len;
	char year_str[5];
	char first;
	
	f1 = fopen("data.txt", "r");
	f2 = fopen("data2.txt", "w");
	while (fgets(line, sizeof(line), f1) != NULL){
		first = line[0];
		
		
		if (first == 'P'){
			fputs(line, f2);
		}
	}
	fclose(f1);
	fclose(f2);
	printf("Done!");
	return 0;
}
