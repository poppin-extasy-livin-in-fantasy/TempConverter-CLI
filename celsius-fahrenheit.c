#include <stdio.h>

int upper, lower, step;
char mode = 0;
int fahrenheitcelsius(int lower, int upper, int step);
int ifnums(char c);
int celsiusfahrenheit(int lower, int upper, int step);


int main() {
	int c;
	printf("Celsius to Fahrenheit 'c', or Fahrenheit to Celsiu 'f' ?\n ");
	while ((c = getchar()) != EOF) {
		if (c == 'c') {
			printf("For choosing lower limit write 'l'number, for upper limit 'u'number, for step 's'number, and 'r' for run the programm\n");
			while ((c = getchar()) != EOF) {
				if (c == 'r') {
					celsiusfahrenheit(lower, upper, step);
				}
				else {
					ifnums(c);
				}
			}
		}
		else if(c == 'f') {
			printf("For choosing lower limit write 'l'number,  for upper 'u'number, for step 's'number, and 'r' for run the programm\n");
			while ((c = getchar()) != EOF) {
				if (c == 'r') {
					fahrenheitcelsius(lower, upper, step);
				}
				else {
					ifnums(c);
				}
			}
		}
	}
}


int fahrenheitcelsius(int lower, int upper, int step) {    //fahrenheit to celsius func
	float celsius = 0.0, fahr = 0.0;
	fahr = lower;
	printf("Fahrenheit Celsius Tabel \n");

	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("fahrenheit = %f, celsius = %f, step = %d\n", fahr, celsius, step);
		fahr = fahr + step;
	}
}


int celsiusfahrenheit(int lower, int upper, int step) {   //celsius to fahrenheit func
	float celsius = 0.0, fahr = 0.0;
	celsius = lower;
	printf("Celsius Fahrenheit Tabel \n");

	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32;
		printf("celsius = %f, fahr = %f, step = %d\n", celsius, fahr, step);
		celsius = celsius + step;
	}
}


int ifnums(char c) {         //if logic func 
	if (c == 'l') mode = 'l';
	if (c == 'u') mode = 'u';
	if (c == 's') mode = 's';
	if (c >= '0' && c <= '9') {
		if (mode == 'l') lower = lower * 10 + (c - '0');
		if (mode == 'u') upper = upper * 10 + (c - '0');
		if (mode == 's') step = step * 10 + (c - '0');
	}
	else if (c == ' ' || c == '\t' || c == ',' || c == '\n' || c == '.' || c == '-' || c == '_') {
		mode = 0;
	}
}