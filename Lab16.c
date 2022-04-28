#include <stdio.h> 
#include <math.h>



int main() {
	int N, i, n, A, D, B;
	int array[100];

	printf("Lab 16\nExercise 1\n");
	printf("Enter N (N > 0):\n");
	scanf_s("%i", &N);
    n = 1;
	for (i = 0; i < N; i++, n += 2) {
		array[i] = n;
	}
	printf("N's array is:\n");
	for (i = 0; i < N; i++) {
		printf("%i ", array[i]);
	}
	
	printf("\n\nExercise 2\n");
	printf("Enter N (N > 1):\n");
	scanf_s("%i", &N);
	printf("Enter the first member of the array (A):\n");
	scanf_s("%i", &array[0]);
	printf("Enter the denominator of the geometric progression (D):\n");
	scanf_s("%i", &D);
	n = 1;
	for (i = 1; i < N; i++) {
		array[i] = array[0] * pow(D, n);
		n++;
	}
	printf("The array is ");
	for (i = 0; i < N; i++) {
		printf("%i ", array[i]);
	}

	printf("\n\nExercise 3\n");
	printf("Enter N (N > 2):\n");
	scanf_s("%i", &N);
	printf("Enter A:\n");
	scanf_s("%i", &array[0]);
	printf("Enter B:\n");
	scanf_s("%i", &array[1]);
	for (i = 2; i < N; i++) {
		array[i] = 0;
		n = 0;
		for (n = 0; n < i; n++) {
			array[i] += array[n];
		}
	}
	printf("The array is ");
	for (i = 0; i < N; i++) {
		printf("%i ", array[i]);
	}

	printf("\n\nExercise 4\n");
	printf("Enter N (size of the massive A):\n");
	scanf_s("%i", &N);
    printf("Enter:\n");
	for (i = 0; i < N; i++) {
		printf("A[%i] = ", i + 1);
		scanf_s("%i", &array[i]);
	}
	printf("The array in specific order is:\n");
	for (i = 0; i < N / 2; i++) {
		printf("%i ", array[i]);
		printf("%i ", array[N - i - 1]);
	}
	if (N % 2 != 0) {
		printf("%i ", array[N / 2]);
	}

	printf("\n\nExercise 5\n");
	printf("Enter N (size of the array A):\n");
	scanf_s("%i", &N);
    printf("Enter:\n");
	for (i = 0; i < N; i++) {
		printf("A[%i] = ", i + 1);
		scanf_s("%i", &array[i]);
	}
	printf("Odd numbers of the array:\n");
	for (i = 0; i < N; i += 2) {
		printf("%i ", array[i]);
	}
    printf("\nEven numbers of the array:\n");
	for (i = N - (N % 2) - 1; i >= 1; i -= 2) {
		printf("%i ", array[i]);
	}
	return 0;
}