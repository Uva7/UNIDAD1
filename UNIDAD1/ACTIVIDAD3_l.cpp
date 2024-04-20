#include <stdio.h>
#include <math.h>
 #include <iostream>
 using namespace std;
 
int main()
{
	//Mensaje de bienvenida
	cout<<"Hola! Este programa 1.17 calcula la distancia entre dos puntos en un plano"<<"\n"
	
	"int x1, x2, y1, y2;"
	"float distancia;"
	
	printf("\nPrimer punto;\n");
	printf("x1: "); scanf("%d",&x1);
	printf("y1: "); scanf("%d",&x1);
	
	printf("\nSegundo punto;\n");
	printf("x2: "); scanf("%d",&x1);
	printf("y2: "); scanf("%d",&x1);
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("\nDistncia: %.2f\n", distancia);
	
	return 0;
}
