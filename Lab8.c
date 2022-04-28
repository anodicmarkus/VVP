#include <stdio.h> 



int main() { 
	int A, B;
	printf("Lab 8\nExercise 1\n");
	printf("Enter the number of bytes:\n");
	scanf_s("%i", &A);
	B = A / 1024;
	printf("It's %i Kbytes\n", B);

	int C;
	printf("\nExercise 2\n");
	printf("Enter A (A > B):\n");
	scanf_s("%i", &A);
	printf("Enter B:\n");
	scanf_s("%i", &B);
	C = A / B;
	printf("The number of B's lenghts in A is %i\n", C);
	
	printf("\nExercise 3\n");
	printf("Enter A (A > B):\n");
	scanf_s("%i", &A);
	printf("Enter B:\n");
	scanf_s("%i", &B);
	C = A % B;
	printf("The remainder of the division is %i\n", C);

	float D;
	printf("\nExercise 4\n");
	printf("Enter the number (format: NN):\n");
	scanf_s("%i", &A);
	while (A / 100 != 0 || A / 1 <= 9);
            D = A / 10;
            A = A - D * 10;
            A = A * 10 + D;
            printf("The new number is %i\n", A);

	printf("\nExercise 5\n");
	printf("Enter the number (format: NNN):\n");
	scanf_s("%i", &A);
	while (A / 1000 != 0 || A / 1 <= 99);
            D = A / 100;
            A = (A - D * 100) * 10 + D;
            printf("The new number is %i\n", A);

	return 0;  
} 