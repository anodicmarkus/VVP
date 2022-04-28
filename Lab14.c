#include <stdio.h> 
#include <math.h>



int main() {

    int A, B, x, i;
	printf("Lab 14\nExercise 1\n");
	printf("Enter A (A < B): ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
    printf("Whole numbers between A and B:\n");
    for (x = A; x <= B; x ++) {
		for (i = 1; i <= x; i ++) {
			printf("%i\n", x);
		}
	}

	printf("\nExercise 2\n");
	printf("Enter A (A > B): ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	while(A>=B){
        A-=B;
    }
    printf("The remaining space is %i\n", A);

    int N, K;
	printf("\nExercise 3\n");
	printf("Enter N (N > 1): ");
	scanf_s("%i", &N);
	K = 0;
	x = 0;
	while (x < N) {
		K++;
		x += 1;
	}
	printf("K is %i and the sum is %i\n", K, x);

    float P, S;
	printf("\nExercise 4\n");
	printf("Enter P (0 < P < 25): ");
	scanf_s("%f", &P);
	K = 0;
	S = 1000;
	while (S <= 1100) {
		S += S * P / 100;
        K++;
	}
	printf("The number of months (K) is %i, the total amount of the deposit (S) is %.2f\n", K, S);

	printf("\nExercise 5\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	while ((A != 0) && (B != 0)) {
		if (A > B) {
			A = A - B;
		}
		else {
			B = B - A;
		}
	}
	printf("Their greatest common divisor is %i\n", A);

    float y;
	printf("\nExercise 6\n");
	printf("Enter N (N > 1): ");
	scanf_s("%i", &N);
	i = 0;
	x = 1;
	y = 1;
	K = 3;
	while (x < N) {
		K++;
		i = y + x;
		y = x;
		x = i;
	}
	printf("The number of the fibonacci number is %i\n", K);

	return 0;
}