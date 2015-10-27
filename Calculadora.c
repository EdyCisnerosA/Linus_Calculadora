#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

bool validar_es_entero(char buffer[], int *numeroReal){

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

bool validar_es_flotante(char buffer[]){

    int numero = 0, potencia = 0;
    int longitud = strlen(buffer);
    bool bandPunto = false;

    buffer = buffer + (longitud-1);
    for( ; longitud > 0 ; ){

        int entero = *buffer - '0';
        if( entero>=0 && entero<=9 ){

            buffer--;
            longitud--;

        } else if( entero == -2 && longitud > 1 && bandPunto == false) {//valor -2 = punto decimal

            bandPunto = true;
            buffer--;
            longitud--;

        }
        else
            return false;
        
    }

    return true;

}

double Suma (double a, double b)
{
     char buffer[9];
     bool band = false;
     int enteroDummy=0;

     do{

        printf("Ingrese un numero: ");
        scanf("%s", buffer);
        if( (band = validar_es_flotante(buffer)) == false )
            printf("Porfavor solo enteros o flotantes.\n");
        
     } while( band == false );

     a = strtod(buffer,NULL);   //convertimos el string validado a float

     do{
        
        printf("Ingrese un numero: ");
        //scanf ("%lf", &b);
        scanf("%s", buffer);
        if( (band = validar_es_flotante(buffer)) == false )
            printf("Porfavor solo enteros o flotantes.\n");
    
     } while( band ==false );
    
     b = strtod(buffer,NULL);   //convertimos el string validado a float

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
     printf("\ningrese el numero base para la potencia:");
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
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(asin(a));
}

double Arccoseno(double a){
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(acos(a));
}

double Arctangente(double a){     
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(atan(a));
}

double Ceil(double a){
     printf("Ingrese un Numero: ");
     scanf ("%lf", &a);
     return(ceil(a));
}

double ArcoTangente2(double x,double y)
{
     printf("Datos en el intervalo [-PI,+PI]radianes");
     printf("\nIngrese un Numero x: ");
     scanf ("%lf", &x);
     printf("Ingrese un Numero y: ");
     scanf ("%lf", &x);
     return(atan2(y,x));
     
}
double CosenoHiperbolico(double x)
{
     printf("Ingrese un Numero: ");
     scanf ("%lf", &x);
     return(cosh(x));
}
double SenoHiperbolico(double x)
{
     printf("Ingrese un Numero: ");
     scanf ("%lf", &x);
     return(sinh(x));
}
double TangenteHiperbolico(double x)
{
     printf("Ingrese un Numero: ");
     scanf ("%lf", &x);
     return(tanh(x));
}
double Exponencial(double x)
{
     printf("Ingrese un Numero: ");
     scanf ("%lf", &x);
     return(exp(x));
}

double Frexp(double x, double frac){
     /* Ingresado un número, lo descompone en un numero (fraccion) que multiplicado por dos y 
     elevado a una potencia da el número inicial (x=mantisa *2^exp) */
     int e;
     printf("Ingrese un número:");
     scanf ("%lf", &x);
     frac = frexp(x, &e);
     printf("x = %.2lf = %.2lf * 2^%d\n", x, frac, e);
     return(frac);
}

double Idexp(double x, double ret){
     /* Eleva al número dos a una potencia dada y lo multiplica por el número ingresado (x*2^exp) */
     int n;
     printf("Ingrese un número: ");
     scanf("%lf", &x); 
     printf("Ingrese la potencia:");
     scanf ("%d", &n);
     ret = ldexp(x ,n);
     printf("%f * 2^%d = %f\n", x, n, ret);
     return(ret);
}

double LogB10(double a){
     printf("Ingrese el numero para el logaritmo:");
     scanf ("%lf", &a);
     return(log10(a));
}

double Modf(double x, double pfrac, double pent){
     /* Separa en dos un número flotante, la parte entera y la parte decimal */
     printf("Ingrese un número flotante (parte entera y parte decimal):");
     scanf ("%lf", &x);
     pfrac = modf(x,&pent);
     printf("Parte entera: %lf\n", pent);
     printf("Parte decimal: %lf \n", pfrac);
     return(0);
}

double ValorAbsoluto(double a){
     printf("Ingrese un número (positivo o negativo): ");
     scanf ("%lf", &a);
     return(fabs(a));
}

double Fmod(double a, double b, double resultado){
     /* Devuelve el residuo de la división para un número flotante */
     printf("Ingrese el divisor: ");
     scanf ("%lf", &a);
     printf("Ingrese el dividendo: ");
     scanf("%lf", &b); 
     resultado = fmod(a,b);
     printf("Residuo de %f / %f es %lf\n", a, b, resultado);
     return(resultado);
}

double Floor(double a){
     printf("Ingrese un número decimal: ");
     scanf ("%lf", &a);
     return(floor(a));
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

    if( validar_es_entero(buffer, &Opcion) != true )
        Opcion = 999;

    resultado = 0.0;
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
	   case 15:
	   	resultado = ArcoTangente2(a,b);
 	   break;
           case 16:
	   	resultado = CosenoHiperbolico(a);
 	   break;

           case 17:
	   	resultado = SenoHiperbolico(a);
 	   break;
           case 18:
	   	resultado = TangenteHiperbolico(a);
 	   break;
           case 19:
	   	resultado = Exponencial(a);
 	   break;
 	   
 	   case 20:
	   	resultado = Frexp(a,b);
 	   break;
 	   
 	   case 21:
	   	resultado = Idexp(a,b);
 	   break;
 	   
 	   case 22:
	   	resultado = LogB10(a);
 	   break;
 	   
 	   case 23:
	   	resultado = Modf(a,b,resultado);
 	   break;
 	   
 	   case 24:
	   	resultado = ValorAbsoluto(a);
 	   break;
 	   
 	   case 25:
	   	resultado = Fmod(a,b, resultado);
 	   break;
 	  
	   case 26:
	   	resultado = Floor(a);
 	   break; 
 	   
       default:
          Opcion = 999;
         printf("Opcion no valida, INTENTE otra vez solo con digitos.");
	   }

       if(Opcion<999)
            printf("\n El resultado de la opci¢n elegida es: %lf \n", resultado);
  
  }

    
  

}



