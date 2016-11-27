#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
int f,d;
printf("vvedite rost v americanscoy sisteme(futy,dymy)");
scanf("%d%d",&f,&d);
double sm=(f*12+d)*2.54;
printf("vash rost v evropeyscoy sisteme");
printf("%.1f",sm);
system("pause");
return 0;
}
