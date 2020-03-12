//Simon Yang
//Exam 1
// Exam code question 1
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int promptSides(int s);
int promptNumberOfRolls(int S);
int rollDice(int S);
void printer(int arr[SIZE]);
int main(void)
{
	int sides=0;
	int size=0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	int count7 = 0;
	int count8 =0;
	int count9 = 0;
	int count10 = 0;
	int count11 = 0;
	int count12 =0;
	int count13 = 0;
	int count14 = 0;
	int count15 = 0;
	int count16 = 0;
	int count17 =0;
	int count18 = 0;
	int count19 = 0;
	int count20 = 0;
	int rollvalue= 0;
	promptSides(sides);
	promptNumberOfRolls(size);

	int rolledValues[SIZE] = {0};
	rollDice(size);
	int i;
	for (i = 0; i < SIZE; i++)
	{
		switch(rollvalue)
		{
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
		case 10:
			count10++;
			break;
		case 11:
			count11++;
			break;
		case 12:
			count12++;
			break;
		case 13:
			count13++;
			break;
		case 14:
			count14++;
			break;
		case 15:
			count15++;
			break;
		case 16:
			count16++;
			break;
		case 17:
			count17++;
			break;
		case 18:
			count18++;
			break;
		case 19:
			count19++;
			break;
		case 20:
			count20++;
			break;
		default:
			break;
	}
	printer();
	srand(time(null));
	return EXIT_SUCCESS;
}
int promptSides(int s)
{
	printf("Enter the number od sides for your die:");
	scanf("%d", &s);
	return s;
}

int promptNumberOfRolls(int S)
{
	printf("Enter the number of rolls:");
	scanf("%d", &S);
	return S;
}

int rollDice(int S)
{
	int i;
	int val =0;
	for(i = 0; i < S; i++)
	{
	val = srand()%20;
	}
	return val;	
}	

void printer(int arr[SIZE])
{
	printf("1=%d");
	
}
