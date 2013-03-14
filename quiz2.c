//Quiz 2
// Fisica computacional
// Andrea Rozo Mendez

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv )
{
	if (argc != 4)
	{
		printf("Error de parámetros para correr el programa\n");
		exit(1);
  	}

	float a = atof(argv[1]);
	float b = atof(argv[2]);
	float h = atof(argv[3]);
	printf("a = %f, b = %f, h = %f\n",a,b,h);
	
	float x;
	double suma;
	float i = 0;
	do
	{
		x = a + i*h;
		suma += (1/(sqrt(1+cos(x)*sin(x))))*h;
		i++;
	}while(x<b);
	
	printf("Integral = %f\n",suma);
	return 0;
}
