#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
int hour,minut,sec;
printf("vvedite vremya v formate HH:MM:SS\n");

scanf("%d", &hour);
scanf("%d", &minut);
scanf("%d", &sec);
printf("tecushee vremya %d:%d:%d", hour,minut,sec);
if (hour >= 00 && hour <= 06)
			printf("dobroy nochi\n");
if (hour >= 07 && hour <= 12)
			printf("dobroe utro\n");
if (hour >= 13 && hour <= 18)
			printf("dobryy den\n");
if (hour >= 19 && hour <= 23)
			printf("dobryy vecher\n");
else 
  printf("Error!");

system("pause");
return 0;
}
