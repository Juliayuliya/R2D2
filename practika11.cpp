#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <clocale>

int main() {
	float g, w, rez = 0;//
	int s;
	setlocale(LC_CTYPE, "rus");
	printf("введите свой пол(мужчина-1 или женщина-2):");
	scanf("%d", &s);
	printf("введите рост(см):");
	scanf("%g", &g);
	printf("введите вес(кг):");
	scanf("%g", &w);
	g = g / 100;
	s = w / (g*g);
	printf("Индекс кетле: %d \n", s);
	printf("Рекомендации:");
	if ( s== 1)
	{
		if (rez < 20)
			printf("Рекомендуется всё-таки немного поправиться... \n");
		if (rez >= 20 && rez <= 25)
			printf("Можете есть что хотите\n");
		if (rez > 25 && rez <= 30)
			printf("Рекомендуется некоторое снижение массы тела. \n");
		if (rez > 30 && rez <= 40)
			printf("Рекомендуется снижение массы тела.\n");
		if (rez > 40)
			printf("	Необходимо немедленное снижение массы тела. \n");
	}
	else
	{
		if (rez < 19)
			printf("Рекомендуется всё-таки немного поправиться... \n");
		if (rez >= 19 && rez <= 24)
			printf("Можете есть что хотите\n");
		if (rez > 24 && rez <= 30)
			printf("Рекомендуется некоторое снижение массы тела. \n");
		if (rez > 30 && rez <= 40)
			printf("Рекомендуется снижение массы тела.\n");
		if (rez > 40)
			printf("Необходимо немедленное снижение массы тела. \n");
	}
	system("pause");
	return 0;
}
