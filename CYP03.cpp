#include <stdio.h>
int main()
{
	int dia, mes, anio;
	printf("Ingrese el dia: "); scanf_s("%d", &dia);
	printf("Ingrese el mes: "); scanf_s("%d", &mes);
	printf("Ingrese el anio: "); scanf_s("%d", &anio);
	

	dia++;

	if (dia == 5 && mes == 10 && anio == 1582)
	{
		dia = 15;
		printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
	}
	else if (!((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) && mes == 2)
	{
		if (dia == 29 && mes == 2)
		{
			dia = 1;
			mes++;
			printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
		}
		else {
			printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
		}
	}
	else if (((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) && mes == 2)
	{
		if (dia == 30)
		{
			dia = 1;
			mes++;
			printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
		}
		else
		{
			printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
		}
	}
	else if (!((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) || mes != 2)
	{
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		{
			if (dia == 32) 
			{
				dia = 1;
				mes++;
			}
			if (mes == 13)
			{
				mes = 01;
				anio++;
				printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
			}
			else {
				printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
			}
		}
	}
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		if (dia == 31) 
		{
			dia = 1;
			mes++;
		}
		printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
	}
	return 0;
}
