#include <stdio.h>
#include <stdlib.h>
double var1,var2,res;

double Basicas(int opcion){
switch(opcion){
case 1:
	printf("Ingrese un numero: ");	
	scanf("%lf",&var1);	
	printf("Ingrese un numero: ");	
	scanf("%lf",&var2);
	res=var1 + var2;
	printf("El resultado es %lf \n",res);
	system("clear");
	break;	
	
case 2:
	printf("Ingrese un numero: ");	
	scanf("%lf",&var1);	
	printf("Ingrese un numero: ");	
	scanf("%lf",&var2);
	res=var1 - var2;
	printf("El resultado es %lf \n",res);	
	break;	

case 3:
	printf("Ingrese un numero: ");	
	scanf("%lf",&var1);	
	printf("Ingrese un numero: ");	
	scanf("%lf",&var2);
	res=var1 * var2;
	printf("El resultado es %lf \n",res);
	break;		

case 4:
	printf("Ingrese un numero: ");	
	scanf("%lf",&var1);	
	printf("Ingrese un numero: ");	
	scanf("%lf",&var2);
	res=var1 / var2;
	printf("El resultado es %lf \n",res);
	break;		
	
}	
}

void main(int argc, const char *argv[]){
int op;
while(1){
printf(":::::::::CALCULADORA:::::::::\n");
printf("1.-Suma\n");
printf("2.-Resta\n");
printf("3.-Multiplicacion\n");
printf("4.-Division\n");
printf("5.-Arco Coseno\n");
printf("6.-Arco Seno\n");
printf("7.-Arco Tangente\n");
printf("8.-Arco Tangente (dos parametros\n");
printf("9.-Coseno\n");
printf("10.-Coseno Hiperbolico\n");
printf("11.-Seno\n");
printf("12.-Seno Hiperbolico\n");
printf("13.-Tangente Hiperbolico\n");
printf("14.-Exponencial\n");
printf("15.-Frexp\n");
printf("16.-Idexp\n");
printf("17.-Logaritmo Natural\n");
printf("18.-Logaritmo Base 10\n");
printf("19.-Modf\n");
printf("20.-Potencia\n");
printf("21.-Raiz Cuadrada\n");
printf("22.-Ceil\n");
printf("23.-Valor Absoluto\n");
printf("24.-Floor\n");
printf("25.-Fmod\n");	
scanf("%d",&op);

	if(op < 6){
	Basicas(op);
	}
	
}
}
