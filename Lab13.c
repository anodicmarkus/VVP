#include <stdio.h> 
#include <math.h>



int main() {
	float R, A, B;

    float c, i;
	printf("Lab 13\nExercise 1\n");
	printf("Enter the price (kg of sweets):\n");
	scanf_s("%f", &c);
	for (i = 0.1; i < 1.1; i+=0.1) {
		printf("The cost of %.1fkg of the sweets: %.1f\n", i, c * i);
	}
	
    int N;
    float x;
	printf("\nExercise 2\n");
	printf("Enter N (N > 0):\n");
    scanf("%d", &N);
    x = 1;
    for  (i = 0; i <= N; ++i){
        x *= 1.0 + i / 10;
    }
    printf("The result of multiplication is %.3f\n\n", x);

    int a;
	printf("\nExercise 3\n");
	printf("Enter N:\n");
	scanf_s("%i", &N);
	a = 1;
    for(i = 3; i < 2 * N - 1 + 2; i += 2){
         a += i;
         printf("%d\n", a);
    }

	printf("\nExercise 4\n");
	printf("Enter A:\n");
	scanf_s("%f", &A);
	printf("Enter N (N > 0):\n");
	scanf_s("%i", &N);
	x = 1;
	for (i = 0; i <= N; i++) {
		x += pow(A, i);
	}
	printf("The result is %.0f\n", x);

	printf("\nExercise 5\n");
	printf("Enter A: ");
	scanf_s("%f", &A);
	printf("Enter N (N > 0): ");
	scanf_s("%i", &N);
	x = 1;
    for(i = 1; i < N + 1; i += 1){
        x = x + (pow(-1, i) * pow(A, i));
    }
    printf("The result is %.2f\n", x);

	return 0;
}