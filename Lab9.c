#include <stdio.h> 

int main() { 

	int N;
	printf("Lab 9\nExercise 1\n");
	printf("Enter N:\n");
	scanf_s("%i", &N);
	printf("Passed %i seconds\n", N % 60);

    int K, i;
	printf("\nExercise 2\n");
	printf("Enter K (1 <= K <= 365):\n");
	scanf_s("%i", &K);
	i = 1;
	while (K != 1) {
		if (i < 6) {
			i++;
		}
		else {
			i = 0;
		} K = K - 1;
	}
	printf("The number of the day of the week is %i\n", i);
	
	printf("\nExercise 3\n");
	printf("Enter K:\n");
	scanf_s("%i", &K);
	printf("Enter N (1 <= N <= 7):\n");
	scanf_s("%i", &N);
	i = N;
	while (K != 1) {
		if (i < 7) {
			i++;
		}
		else {
			i = 1;
		} K = K - 1;
	}
	printf("The number of the day of the week is %i\n", i);

    int A, B, C;
	printf("\nExercise 4\n");
	printf("Enter number A:\n");
	scanf_s("%i", &A);
	printf("Enter number B:\n");
	scanf_s("%i", &B);
	printf("Enter number C:\n");
	scanf_s("%i", &C);
	printf("The number of squares placed on the rectangle is %i\n", (A / C) * (B / C));
	N = (A / C) * (B / C);
	printf("The area of the remaining part of the rectangle is %i\n", (A * B) - (N * C * C));

	printf("\nExercise 5\n");
	printf("Enter the year (format: NNNN):\n");
	scanf_s("%i", &N);
	printf("This year was in %ith century\n", N / 100 + 1);

	return 0;  
} 