#include <stdio.h> 

void main(void)
{
	int tama�o_ancho, tama�o_alto, Xizqu, Yizqu, Xderech, Yderech;
	float porcentajeX, porcentajeY, porcentaje_ancho, porcentaje_alto;

	scanf_s("%i", &tama�o_ancho);
	scanf_s("%i", &tama�o_alto);
	scanf_s("%f", &porcentajeX);
	scanf_s("%f", &porcentajeY);
	scanf_s("%f", &porcentaje_ancho);
	scanf_s("%f", &porcentaje_alto);

	Xizqu = porcentajeX * tama�o_ancho;
	Yizqu = porcentajeY * tama�o_alto;
	Xderech = tama�o_ancho * porcentaje_ancho + Xizqu;
	Yderech = tama�o_alto * porcentaje_alto + Yizqu;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", tama�o_ancho, tama�o_alto, porcentajeX, porcentajeY, porcentaje_ancho, porcentaje_alto, Xizqu, Yizqu, Xderech, Yderech);

}