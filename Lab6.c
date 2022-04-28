#include <stdio.h> 
#include <math.h>



int main() { 

	int A, B, C;
	printf("Lab 6\nExercise 1\n");
	printf("Enter A:\n");
	scanf_s("%d", &A);
	printf("Enter B:\n");
	scanf_s("%d", &B);
	C = A;
	A = B;
	B = C;
	printf("After the shuffle:\n");
	printf("A is %d\n", A);
	printf("B is %d\n", B);
    
    float D;
	printf("\nExercise 2\n");
	printf("Enter A:\n");
	scanf_s("%d", &A);
	printf("Enter B:\n");
	scanf_s("%d", &B);
	printf("Enter C:\n");
	scanf_s("%d", &C);
	D = A;
	A = C;
	C = B;
	B = D;
	printf("After the shuffle A, B and C are:\n");
	printf("A is %d\n", A);
	printf("B is %d\n", B);
	printf("C is %d\n", C);
	
	printf("\nExercise 3\n");
	printf("Enter A:\n");
	scanf_s("%d", &A);
	printf("Enter B:\n");
	scanf_s("%d", &B);
	printf("Enter C:\n");
	scanf_s("%d", &C);
	D = A;
	A = B;
	B = C;
	C = D;
	printf("After the shuffle A, B and C are:\n");
	printf("A is %d\n", A);
	printf("B is %d\n", B);
	printf("C is %d\n", C);

	float x;
	printf("\nExercise 4\n");
	printf("Enter x:\n");
	scanf_s("%f", &x);
	printf("y is\n%.2f\n", 3 * pow(x,6) - 6 * pow(x,2) - 7);

	printf("\nExercise 5\n");
	printf("Enter x:\n");
	scanf_s("%f", &x);
	printf("y is\n%.2f\n", 4 * pow(x - 3,6) - 7 * pow(x - 3, 3) + 2);

	printf("\nExercise 6\n");
	printf("Enter A:\n");
	scanf_s("%d", &A);
	B = A * A;
	B = B * B;
	printf("A to the eighth degree is\n%d\n", B * B);

	printf("\nExercise 7\n");
	printf("Enter A:\n");
	scanf_s("%d", &A);
	B = A * A;
	C = A * B * B;
	C = C * C * C;
	printf("A to the fifteenth degree is\n%d", C);

	return 0;  
} 