#include <stdio.h> 



int main() {

    int day, month;
    char *days[] = {"1st", "2nd", "3rd", "4th", "5th", "6th", "7th", "8th", "9th", "10th", "11th", "12th", 
    "13th", "14th", "15th", "16th", "17th", "18th", "19th", "20th", "21st", "22nd", "23rd", 
    "24th", "25th", "26th", "27th", "28th", "29th", "30th", "31st"};
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", 
    "October", "November", "December"};
	printf("Lab 12\nExercise 1\n");
	printf("Enter day and month (format: NN NN):\n");
    scanf("%d%d", &day, &month);
    printf("The %s of %s\n", days[day - 1], months[month - 1]);

	int A, N;
    char *navigation[] = {"E","N","W","S","E","N"};
    printf("\nExercise 2\n");
	printf("Enter direction A (1 - north, 2 - south, 3 - west, 4 - east):\n");
    scanf("%d", &A);
    printf("Enter direction (1 turn left, 0 keep moving, -1 turn right):\n");
    scanf("%d", &N);
    printf("New direction is %s\n", navigation[A + (N * - 1)]);

    char *num[] = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", 
    "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40"};
    printf("\nExercise 3\n");
    printf("Enter the number (from 10 to 40):\n");
    scanf("%d", &A);
    if (A >= 10 || A <= 40){
        if ((A > 9 && A < 21) || (A > 24 && A < 31) || (A > 34 && A < 41)){
            printf("%s uchebnih zadanii\n", num[A - 10]);
            }
            else if (A == 21 || A == 31){
                printf("%s uchebnoe zadanie\n", num[A - 10]);
                }
                else{
                    printf("%s uchebnih zadaniya\n", num[A - 10]);
                    }
    }

    int B, C, D;
    char *nnn[] = {"sto", "dvesti", "trista", "chetiresta", "pyatsot", "shestsot", "semsot", "vosemsot",  "devyatsot"};
    char *nn[] = {"desyat", "dvadzat", "tridzat", "sorok", "nyatdesat", "shestdesyat", "semdesyat", "vosemdesyat", "devyanosto"};
    char *n[] = {"odin", "dva", "tri", "chetire", "pyat", "shest", "sem", "vosem", "devyat"};
    char *sn[] = {"odinadzat", "dvenadzat", "trenadzat", "chetirnadzat", "pyatnadzat", "shestandzat", "semnadzat", "vosemnadzat", "devyatnadzat"};
    printf("\nExercise 4\n");
    printf("Enter the number (from 100 to 999):\n");
    scanf_s("%i", &N);
    A = N / 100;
    B = (N / 10) % 10;
    C = N % 10;
    if ( N / 10 % 10 == 0){
        printf("%s %s\n\n", nnn[A - 1], nn[B - 1]);
        }
        else{
            if ((10 < B) || (B < 20)){
                printf("%s %s\n\n", nnn[A - 1], sn[B + 2]);
                }
            else {
                printf("%s %s %s\n\n", nnn[A - 1], nn[B - 1], n[C - 1]);
                }
        }

    char *color[] = {"green", "red", "yellow", "white", "black"};
    char *animal[] = {"rat", "cow", "tiger", "hare", "dragon", "snake", "horse", "sheep", "monkey", "chicken", "dog", "pig"};
    printf("\nExercise 5\n");
    printf("Enter the year:\n");
    scanf_s("%i", &N);
    A = (N - 4) % 5;
    B = (N - 4) % 12;
    printf("This year is the year of the %s %s\n\n", color[A], animal[B]);

	return 0;
}