#include <stdio.h>



float PowerA3(float A, float B){
    B = A * A * A;
    return(B);
}


int SignX(float X){
    if (X < 0){
        return(-1);
    }
    else if (X == 0){
        return(0);
    }
    else{
        return(1);
    }
}


float RingS(float R1, float R2){
    return (R1 * R1 - R2 * R2);
}


int Quarter(float x, float y){
	if (x > 0 && y > 0) {return 1;}
    if (x < 0 && y > 0) {return 2;}
    if (x < 0 && y < 0) {return 3;}
	if (x > 0 && y < 0) {return 4;}
	else {return 0;};
}


float Fact2(int N){
    int x, i;
    if (N % 2 == 1){
        x = 1;
        for (i = 3; i <= N; i += 2){
            x *= i;
        }
        return(x);
    }
    else {
        x = 2;
        for (i = 4; i <= N; i += 2){
            x *= i;
        }
        return(x);
    }
}



int main()
{
    int num, i, N;
    float A, B, R1, R2, x, y;
    printf("Lab 15\nExercise 1\n");
    printf("Enter A:\n");
    scanf("%f", &A);
    printf("Enter B:\n");
    scanf("%f", &B);
    B = PowerA3(A, B);
    printf("A to the power of 3 is %.0f\n", B);

    printf("\nExercise 2\n");
    printf("Enter A:\n");
    scanf("%f", &A);
    printf("Enter B:\n");
    scanf("%f", &B);
    printf("The sum is %d\n", SignX(A) + SignX(B));

    printf("\nExercise 3\n");
    printf("Enter the first radius (R1):\n");
	scanf_s("%f", &R1);
	printf("Enter the second radius (R2):\n");
	scanf_s("%f", &R2);
	printf("The area is %f\n", RingS(R1, R2));

    printf("\nExercise 4\n");
    printf("Enter coordinate (x):\n");
	scanf_s("%f", &x);
	printf("Enter coordinate (y):\n");
	scanf_s("%f", &y);
	printf("This point is in the %i quarter\n", Quarter(x, y));

    printf("\nExercise 5\n");
    printf("Enter N (N > 0):\n");
    scanf("%d", &N);
    printf("The specific factorial for N is %.0f\n", Fact2(N));

    return 0;
}