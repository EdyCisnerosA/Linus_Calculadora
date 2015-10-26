#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool validar_es_numero(char buffer[], int *numeroReal){

    int numero = 0, potencia = 0;
    int longitud = strlen(buffer);

    buffer = buffer + (longitud-1);
    for( ; longitud > 0 ; ){

        int entero = *buffer - '0';
        if( entero>=0 && entero<=9 ){

            numero = numero + entero*pow(10,potencia);
            buffer--;
            longitud--;
            potencia++;

        }
        else
            return false;
        
    }

    *numeroReal = numero;

    return true;

}

double Suma (double a, double b)
{
     printf("Ingrese un numero: ");
     scanf ("%lf", &a);
     printf("Ingrese un numero: ");
     scanf ("%lf", &b);
     return (a + b); 
}

double Resta (double a, double b)
{
    printf("Ingrese un numero: ");
    scanf("%lf", &a);
    printf("Ingrese un numero: ");
    scanf("%lf", &b);
    return (a - b);
}

double Multiplicacion (double a, double b)
{
    printf("Ingrese un numero: ");
    scanf("%lf", &a);
    printf("Ingrese un numero: ");
    scanf("%lf", &b);
    return (a * b);
}
double Division (double a, double b)
{
    printf("Ingrese un numero: ");
    scanf("%lf", &a);
    printf("Ingrese un numero: ");
    scanf("%lf", &b);
    return (a / b);
}

double Raiz_cuadrada (double a)
{
    printf("\n introduzca la cifra a la que efectuar la raiz: ");
    scanf ("%lf", &a);
    return (sqrt (a));
}
double Potencia(double a, double b){
     printf("\ingrese el numero base para la potencia:");
     scanf ("%lf", &a);
     printf("Ingrese potencia: ");
     scanf("%lf", &b); 
     return(pow(a,b));
}           
        
double Logaritmo(double a){
     printf("Ingrese el valor: ");
     scanf ("%lf", &a);
     return(log(a));
}
double Seno(double a){
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(sin(a));
}

double Coseno(double a){
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(cos(a));
}

double Tangente(double a){
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(tan(a));
}

double Arcseno(double a){
     printf("Ingrese un Numero:");
     scanf ("%lf", &a);
     return(asin(a));
}

double Arccoseno(double a){
     printf("Ingrese un Numero");
     scanf ("%lf", &a);
     return(acos(a));
}

double Arctangente(double a){     
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(atan(a));
}

double Ceil(double a){
     printf("Ingrese un Numero");
     scanf ("%lf", &a);
     return(ceil(a));
}

// PROGRAMA PRINCIPAL
int main(){
	double a, b, resultado;
	int Opcion;
    char buffer[9];

    while(1){
	printf("\n\t\tCALCULADORA\n\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Multplicaci¢n\n");
	printf("\t 4.- Division\n");
	printf("\t 5.- Raiz cuadrada\n");
	printf("\t 6.- Potencia\n");
	printf("\t 7.- Logaritmo Natural\n");
	printf("\t 8.- Seno\n");
	printf("\t 9.- Coseno\n");
	printf("\t 10.-Tangente\n");
	printf("\t 11.-Arco Seno\n");
	printf("\t 12.-Arco Coseno\n");
	printf("\t 13.-Arco Tangente\n");
	printf("\t 14.-Ceil\n");
	printf("\t 15.-Arco Tangente (dos parametros\n");
    printf("\t 16.-Coseno Hiperbolico\n");
    printf("\t 17.-Seno Hiperbolico\n");
    printf("\t 18.-Tangente Hiperbolico\n");
    printf("\t 19.-Exponencial\n");
    printf("\t 20.-Frexp\n");
    printf("\t 21.-Idexp\n");
    printf("\t 22.-Logaritmo Base 10\n");
    printf("\t 23.-Modf\n");
    printf("\t 24.-Valor Absoluto\n");
    printf("\t 25.-Floor\n");
    printf("\t 26.-Fmod\n");
	printf("\t\t Elija su Opci¢n:");
    
    scanf("%s", buffer);

    if( validar_es_numero(buffer, &Opcion) != true )
        Opcion = 999;
    
	switch (Opcion)
	{
	   case 1:
		   resultado = Suma (a, b);
	   break;

  	   case 2:
	   	resultado = Resta (a, b);
	   break;


	   case 3:
	   	resultado = Multiplicacion (a, b);
	   break;


	   case 4:
	   	resultado = Division (a, b);
       break;

       case 5:
	   	resultado = Raiz_cuadrada (a);
 	   break;
      
      case 6:
	   	resultado = Potencia (a, b);
 	   break;
      
      case 7:
	   	resultado = Logaritmo (a);
 	   break;
 	   
 	   case 8:
	   	resultado = Seno (a);
 	   break;
 	   
 	   case 9:
	   	resultado = Coseno (a);
 	   break;
 	   
 	   case 10:
	   	resultado = Tangente (a);
 	   break;
 	   
 	   case 11:
	   	resultado = Arcseno (a);
 	   break;
 	   
 	   case 12:
	   	resultado = Arccoseno(a);
 	   break;

       case 13:
	   	resultado = Arctangente(a);
 	   break;
 	   
 	   case 14:
	   	resultado = Ceil(a);
 	   break;
       default:
         printf("Opcion no valida, INTENTE otra vez solo con digitos.");
	   }

  printf("\n El resultado de la opci¢n elegida es: %lf \n", resultado);
  
  }

    
  

}



