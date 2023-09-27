#include <stdio.h>
#include <stdlib.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	int input0 = scanf_s("%1o", &inputNum);

	if (input0 != 1) {
		printf("Input invalid\n");
		exit(EXIT_FAILURE);
	}

	switch (inputNum)
	{
	case 1:
		add();
	}

	switch (inputNum)
	{
	case 2:
		subtract();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value: ");
	double input = scanf_s("%lf", &num1);

	if (input != 1) {
		printf("Input invalid\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter the second value: ");
	double input2 = scanf_s("%lf", &num2);

	if (input2 != 1) {
		printf("Input invalid\n");
		exit(EXIT_FAILURE);
	}

	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	double num1, num2, result;
	printf("Enter the first value: ");
	double input = scanf_s("%lf", &num1);

	if (input != 1) {
		printf("Input invalid\n");
		exit(EXIT_FAILURE);
	}

	printf("Enter the second value: ");
	double input2 = scanf_s("%lf", &num2);

	if (input2 != 1) {
		printf("Input invalid\n");
		exit(EXIT_FAILURE);
	}

	result = num1 - num2;
	printf("%lf - %lf = %lf\n", num1, num2, result);
}