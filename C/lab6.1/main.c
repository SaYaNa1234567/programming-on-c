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
	f1 = fopen("data.txt", "r");
	f2 = fopen("data2.txt", "w");
	while (fgets(line, sizeof(line), f1) != NULL){
		len = strlen(line);
		
		for(i = 0; i<4; i++){
			year_str[i] = line[len - 5 + i];
		}
		year_str[4] = '\0';
		sscanf(year_str, "%d", &year);
		if (year>1980){
			fputs(line, f2);
		}
	}
	fclose(f1);
	fclose(f2);
	printf("Done!");
	return 0;
}
