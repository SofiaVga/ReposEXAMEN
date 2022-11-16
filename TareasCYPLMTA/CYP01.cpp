#include <stdio.h> 

void main(void)
{
	int tamaño_ancho, tamaño_alto, Xizqu, Yizqu, Xderech, Yderech;
	float porcentajeX, porcentajeY, porcentaje_ancho, porcentaje_alto;

	scanf_s("%i", &tamaño_ancho);
	scanf_s("%i", &tamaño_alto);
	scanf_s("%f", &porcentajeX);
	scanf_s("%f", &porcentajeY);
	scanf_s("%f", &porcentaje_ancho);
	scanf_s("%f", &porcentaje_alto);

	Xizqu = porcentajeX * tamaño_ancho;
	Yizqu = porcentajeY * tamaño_alto;
	Xderech = tamaño_ancho * porcentaje_ancho + Xizqu;
	Yderech = tamaño_alto * porcentaje_alto + Yizqu;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", tamaño_ancho, tamaño_alto, porcentajeX, porcentajeY, porcentaje_ancho, porcentaje_alto, Xizqu, Yizqu, Xderech, Yderech);

}