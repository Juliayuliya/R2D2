#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <clocale>

int main()
{
float PI,rez,data;
char s[10];
setlocale(LC_CTYPE, "rus");
printf("ââåäèòå äëèííó:");
PI=3,14;
scanf("%s",s);
char c=s[strlen(s)-1];
s[strlen(s)-1]='\0';
data=atof(s);//converts a string to float
switch (c)
{
case 'D': rez=data*PI/180;
break;
case 'R': rez=data*180/PI;
break;
default: printf("îøèáêà ââîäà");
break;
}
printf("%.5f",rez);
system("pause");
return 0;
}
