#include <stdio.h> 



int main() { 
	
    float a;
	printf("Lab 7\nExercise 1\n");
	printf("Enter angle (in degrees):\n");
	scanf_s("%f", &a);
	printf("It's %.2f radians\n", a * 3.14 / 180);

	printf("\nExercise 2\n");
	printf("Enter angle (in radians):\n");
	scanf_s("%f", &a);
	printf("It's %.2f degrees\n", 180 * a / 3.14);
	
	float x, y;
	printf("\nExercise 3\n");
	printf("Enter the cost (rub):\n");
	scanf_s("%f", &a);
	printf("Enter the 1st mass (kg):\n");
	scanf_s("%f", &x);
	printf("Enter the 2nd mass (kg):\n");
	scanf_s("%f", &y);
	printf("1 kg of theese sweets will cost %.2f rub\n", a / x);
	printf("Some kg of theese sweets costs %.2f rub\n", (a / x) * y);

    float v1, v2, S, t;
	printf("\nExercise 4\n");
	printf("Enter the speed of the first car (km/h):\n");
	scanf_s("%f", &v1);
	printf("Enter the speed of the second car (km/h):\n");
	scanf_s("%f", &v2);
	printf("Enter the distance between cars (km):\n");
	scanf_s("%f", &S);
	printf("Enter the time (h):\n");
	scanf_s("%f", &t);
	printf("The distance between cars will be %.1f km\n", S + t * (v1 + v2));

    float b;
	printf("\nExercise 5\n");
	printf("Enter A (A =/= 0):\n");
	scanf_s("%f", &a);
	printf("Enter B:\n");
	scanf_s("%f", &b);
	x = (-1) * (b / a);
	printf("x = %.2f\n", x);

    float a1, b1, c1, a2, b2, c2;
	printf("\nExercise 6\n");
	printf("Enter A1: ");
	scanf_s("%f", &a1);
	printf("Enter B1: ");
	scanf_s("%f", &b1);
	printf("Enter C1:");
	scanf_s("%f", &c1);
	printf("Enter A2: ");
	scanf_s("%f", &a2);
	printf("Enter B2: ");
	scanf_s("%f", &b2);
	printf("Enter C2: ");
	scanf_s("%f", &c2);
	y = (c2 - a2 * c1 / a1) / (b2 - a2 * b1 / a1);
	x = (c1 - b1 * y) / a1;
	printf("Solution is \nx = %.2f\n", x);
	printf("y = %.2f\n", y);

	return 0;  
} 