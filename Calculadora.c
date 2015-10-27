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

        printf("Enter a number: ");
        scanf("%s", buffer);
        if( (band = validar_es_flotante(buffer)) == false )
            printf("Please only integer or floating.\n");
        
     } while( band == false );

     a = strtod(buffer,NULL);   //convertimos el string validado a float

     do{
        
        printf("Enter a number: ");
        //scanf ("%lf", &b);
        scanf("%s", buffer);
        if( (band = validar_es_flotante(buffer)) == false )
            printf("Please only integer or floating.\n");
    
     } while( band ==false );
    
     b = strtod(buffer,NULL);   //convertimos el string validado a float

     return (a + b); 

}

double Resta (double a, double b)
{
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter a number: ");
    scanf("%lf", &b);
    return (a - b);
}

double Multiplicacion (double a, double b)
{
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter a number: ");
    scanf("%lf", &b);
    return (a * b);
}
double Division (double a, double b)
{
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter a number: ");
    scanf("%lf", &b);
    return (a / b);
}

double Raiz_cuadrada (double a)
{
    printf("\n enter the number to which effect the root: ");
    scanf ("%lf", &a);
    return (sqrt (a));
}
double Potencia(double a, double b){
     printf("\nenter the base number to pow:");
     scanf ("%lf", &a);
     printf("Enter pow: ");
     scanf("%lf", &b); 
     return(pow(a,b));
}           
        
double Logaritmo(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(log(a));
}
double Seno(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(sin(a));
}

double Coseno(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(cos(a));
}

double Tangente(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(tan(a));
}

double Arcseno(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(asin(a));
}

double Arccoseno(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(acos(a));
}

double Arctangente(double a){     
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(atan(a));
}

double Ceil(double a){
     printf("Enter a number: ");
     scanf ("%lf", &a);
     return(ceil(a));
}

double ArcoTangente2(double x,double y)
{
     printf("Data in the range [ -PI , + PI ] radians");
     printf("\nEnter a number x: ");
     scanf ("%lf", &x);
     printf("Enter a number y: ");
     scanf ("%lf", &x);
     return(atan2(y,x));
     
}
double CosenoHiperbolico(double x)
{
     printf("Enter a number: ");
     scanf ("%lf", &x);
     return(cosh(x));
}
double SenoHiperbolico(double x)
{
     printf("Enter a number: ");
     scanf ("%lf", &x);
     return(sinh(x));
}
double TangenteHiperbolico(double x)
{
     printf("Enter a number: ");
     scanf ("%lf", &x);
     return(tanh(x));
}
double Exponencial(double x)
{
     printf("Enter a number: ");
     scanf ("%lf", &x);
     return(exp(x));
}

double Frexp(double x, double frac){
     /* Ingresado un número, lo descompone en un numero (fraccion) que multiplicado por dos y 
     elevado a una potencia da el número inicial (x=mantisa *2^exp) */
     int e;
     printf("Enter a number:");
     scanf ("%lf", &x);
     frac = frexp(x, &e);
     printf("x = %.2lf = %.2lf * 2^%d\n", x, frac, e);
     return(frac);
}

double Idexp(double x, double ret){
     /* Eleva al número dos a una potencia dada y lo multiplica por el número ingresado (x*2^exp) */
     int n;
     printf("Enter a number: ");
     scanf("%lf", &x); 
     printf("Enter pow:");
     scanf ("%d", &n);
     ret = ldexp(x ,n);
     printf("%f * 2^%d = %f\n", x, n, ret);
     return(ret);
}

double LogB10(double a){
     printf("Enter a number:");
     scanf ("%lf", &a);
     return(log10(a));
}

double Modf(double x, double pfrac, double pent){
     /* Separa en dos un número flotante, la parte entera y la parte decimal */
     printf("Enter a floating number ( integer and fractional part):");
     scanf ("%lf", &x);
     pfrac = modf(x,&pent);
     printf("Integer part : %lf\n", pent);
     printf("Decimal part: %lf \n", pfrac);
     return(0);
}

double ValorAbsoluto(double a){
     printf("Enter a number (positive or negative): ");
     scanf ("%lf", &a);
     return(fabs(a));
}

double Fmod(double a, double b, double resultado){
     /* Devuelve el residuo de la división para un número flotante */
     printf("Enter the divisor: ");
     scanf ("%lf", &a);
     printf("Enter the dividend: ");
     scanf("%lf", &b); 
     resultado = fmod(a,b);
     printf("Residue of %f / %f is %lf\n", a, b, resultado);
     return(resultado);
}

double Floor(double a){
     printf("Enter a decimal number: ");
     scanf ("%lf", &a);
     return(floor(a));
}

// PROGRAMA PRINCIPAL
int main(){
	double a, b, resultado;
	int Opcion;
    char buffer[9];

    while(1){
	printf("\n\t\tCALCULATOR\n\n");
	printf("\t 1.- Sum\n");
	printf("\t 2.- Subtraction\n");
	printf("\t 3.- Multiplication\n");
	printf("\t 4.- Division\n");
	printf("\t 5.- Square Root\n");
	printf("\t 6.- Pow\n");
	printf("\t 7.- Natural Logarithm\n");
	printf("\t 8.- Sine\n");
	printf("\t 9.- Cosine\n");
	printf("\t 10.-Tangent\n");
	printf("\t 11.-arc sine\n");
	printf("\t 12.-Arc Cosine\n");
	printf("\t 13.-Arc Tangent\n");
	printf("\t 14.-Ceil\n");
	printf("\t 15.-Arc Tangent (two parameters\n");
    printf("\t 16.-Hyperbolic Cosine\n");
    printf("\t 17.-Hyperbolic Sine\n");
    printf("\t 18.-Hyperbolic Tangent\n");
    printf("\t 19.-Exponential\n");
    printf("\t 20.-Frexp\n");
    printf("\t 21.-Idexp\n");
    printf("\t 22.-Logarithm base ten\n");
    printf("\t 23.-Modf\n");
    printf("\t 24.-Absolute value\n");
    printf("\t 25.-Floor\n");
    printf("\t 26.-Fmod\n");
	printf("\t\t Choose your option:");
    

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
         printf("Invalid option , try again only digits.");
	   }

       if(Opcion<999)
            printf("\n The result of the chosen option: %lf \n", resultado);
  
  }

    
  

}



