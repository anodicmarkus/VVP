#include <stdio.h> 



int main() {

	int A, B;
	printf("Lab #10\nExercise 1\n");
	printf("Enter number A: ");
	scanf_s("%i", &A);
	printf("Enter number B: ");
	scanf_s("%i", &B);
	if (A > 2 && B <= 3) {
		printf("A > 2 & B <= 3 is true\n");
	}
	else {
		printf("A > 2 & B <= 3 is false\n");
	}

	int C;
	printf("\nExercise 2\n");
	printf("Enter number A: ");
	scanf_s("%i", &A);
	printf("Enter number B: ");
	scanf_s("%i", &B);
	printf("Enter number C: ");
	scanf_s("%i", &C);
	if (A < B && B < C) {
		printf("A < B < C is true\n");
	}
	else {
		printf("A < B < C is false\n");
	}

	printf("\nExercise 3\n");
	printf("Enter any number: ");
	scanf_s("%i", &A);
	printf("This number is two-digit and even");
	B = A % 10;
	if (A > 9 && B % 2 == 0 && A < 100) {
		printf(" - True\n");
	}
	else {
		printf(" - False\n");
	}

    int D;
	printf("\nExercise 4\n");
	printf("Enter number (format: NNN): ");
	scanf_s("%i", &A);
	printf("\nThe digits of this number form an ascending or descending sequence");
	B = A % 10;
	C = (A / 10) % 10;
	D = A / 100;
	if ((B > C && C > D) || (B < C && C < D)) {
		printf(" - True\n");
	}
	else {
		printf(" - False\n");
	}

    int E;
	printf("\nExercise 5\n");
	printf("Enter number (format: NNNN): ");
	scanf_s("%i", &A);
	printf("\nThis number is palindrome");
	B = A % 10;
	C = (A / 10) % 10;
	D = (A / 100) % 10;
	E = A / 1000;
	if (B==E && C==D) {
		printf(" - True\n");
	}
	else {
		printf(" - False\n");
	}

	printf("\nExercise 6\n");
	printf("Enter a: ");
	scanf_s("%i", &A);
	printf("Enter b: ");
	scanf_s("%i", &B);
	printf("Enter c: ");
	scanf_s("%i", &C);
	printf("A triangle with sides a, b, c is rectangular");
	if ((A * A + B * B == C * C) || (B * B + C * C == A * A)||(A * A + C * C == B * B)) {
		printf(" - True\n");
	}
	else {
		printf(" - False\n");
	}

	printf("\nExercise 7\n");
	printf("Enter a: ");
	scanf_s("%i", &A);
	printf("Enter b: ");
	scanf_s("%i", &B);
	printf("Enter c: ");
	scanf_s("%i", &C);
	if ((A + B > C) && (B + C >A) && (A + C > B)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}

	return 0;
}