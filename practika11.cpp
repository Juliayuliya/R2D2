#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <clocale>

int main() {
	float g, w, rez = 0;//
	int s;
	setlocale(LC_CTYPE, "rus");
	printf("������� ���� ���(�������-1 ��� �������-2):");
	scanf("%d", &s);
	printf("������� ����(��):");
	scanf("%g", &g);
	printf("������� ���(��):");
	scanf("%g", &w);
	g = g / 100;
	s = w / (g*g);
	printf("������ �����: %d \n", s);
	printf("������������:");
	if ( s== 1)
	{
		if (rez < 20)
			printf("������������� ��-���� ������� �����������... \n");
		if (rez >= 20 && rez <= 25)
			printf("������ ���� ��� ������\n");
		if (rez > 25 && rez <= 30)
			printf("������������� ��������� �������� ����� ����. \n");
		if (rez > 30 && rez <= 40)
			printf("������������� �������� ����� ����.\n");
		if (rez > 40)
			printf("	���������� ����������� �������� ����� ����. \n");
	}
	else
	{
		if (rez < 19)
			printf("������������� ��-���� ������� �����������... \n");
		if (rez >= 19 && rez <= 24)
			printf("������ ���� ��� ������\n");
		if (rez > 24 && rez <= 30)
			printf("������������� ��������� �������� ����� ����. \n");
		if (rez > 30 && rez <= 40)
			printf("������������� �������� ����� ����.\n");
		if (rez > 40)
			printf("���������� ����������� �������� ����� ����. \n");
	}
	system("pause");
}