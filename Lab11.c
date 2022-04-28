#include <stdio.h> 
#include <stdlib.h>
#include <math.h>



int main() {
	int A, B;
	printf("Lab 11\nExercise 1\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	if (A != B) {
		if (A > B) {
			B = A;
		}
		else {
			A = B;
		}
	}
	else {
		A = 0;
		B = 0;
	} 
    printf("A is %i\n", A); 
    printf("B is %i\n", B);

    int C;
	printf("\nExercise 2\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
	printf("Enter B: ");
	scanf_s("%i", &B);
	printf("Enter C: ");
	scanf_s("%i", &C);
	if ((A > B) && (B > C)) {
		printf("The sum of the two largest numbers is %i\n", A + B);
	}
	else {
		if ((B > A) && (C > A)) {
			printf("The sum of the two largest numbers is %i\n", B + C);
		}
		else {
			printf("The sum of the two largest numbers is %i\n", A + C);
		}
	}

    int x_1, x_2, x_3, y_1, y_2, y_3, d_1, d_2;
    printf("\nExercise 3\n");
    printf("Enter coordinates of the 1st point (by x): ");
	scanf_s("%i", &x_1);
	printf("Enter coordinates of the 1st point (by y): ");
	scanf_s("%i", &y_1);
	printf("Enter coordinates of the 2nd point (by x): ");
	scanf_s("%i", &x_2);
	printf("Enter coordinates of the 2nd point (by y): ");
	scanf_s("%i", &y_2);
	printf("Enter coordinates of the 3rd point (by x): ");
	scanf_s("%i", &x_3);
	printf("Enter coordinates of the 3rd point (by y): ");
	scanf_s("%i", &y_3);
	d_1 = sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2));
	d_2 = sqrt(pow(x_1 - x_3, 2) + pow(y_1 - y_3, 2));
	if (d_1 != d_2) {
		if (d_1< d_2) {
			printf("The point B is closer to the point A. The distance between them is %i\n", d_1);
		}
		else {
			printf("The point C is closer to the point A. The distance between them is  %i\n", d_2);
		}
	}
	else {
		printf("The point B and the point C are equidistant from the point A. This distance is %i\n", d_1);
	}

    int x, y;
    printf("\nExercise 4\n");
	printf("Enter cootdinates of the point (by x):\n");
    scanf("%i", &x);
    printf("Enter cootdinates of the point (by y):\n");
    scanf("%i", &y);
    if (x > 0){
        if (y > 0){
            printf("The point is in the 1st quarter\n");
            }
            else{
                printf("The point is in the 2nd quarter\n");
                }
            }
            else{
                if (y > 0){
                    printf("The point is in the 3rd quarter\n");
                    }
                else{
                    printf("The point is in the 4th quarter\n");
                    }
                }

	printf("\nExercise 5\n");
	printf("Enter number: ");
	scanf_s("%i", &A);
	if (A != 0) {
		if (A > 0) {
			if (A % 2 == 0) {
				printf("This number is positive and even");
			}
			else {
				printf("This number is positive and odd");
			}
		}
		else {
			if (A % 2 == 0) {
				printf("This number is negative and even");
			}
			else {
				printf("This number is negative and odd");
			}
		}
	}
	else {
		printf("The number is 0");
	}

	printf("\n\nExercise 6\n");
	printf("Enter A: ");
	scanf_s("%i", &A);
    if (A == 0){
        printf("A is 0");
    }
    else{
        if (A % 2 == 0) {
		if (A > 9) {
			if (A > 99) {
				printf("This number is even and triple-digit");
			}
			else {
				printf("This number is even and double-digit");
			}
		}
		else {
			printf("This number is even and single-digit");
		}
	}
	else {
		if (A > 9) {
			if (A > 99) {
				printf("This number is odd and triple-digit");
			}
			else {
				printf("This number is odd and double-digit");
			}
		}
		else {
			printf("This number is odd and single-digit");
		}
	}
    }
	
	return 0;
}