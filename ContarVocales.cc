#include <iostream>
using namespace std;
int cuenta_vocales(char *); //funcion + parametro: character declara puntero* con info contenida en direccion memo

int main()
{
   char cadena[80]; //inicio variable cadena array
   cout << "Introduce cadena: "; // SALIDA de este dato
   cin.getline(cadena, 80);  // datos de ENTRADA , la variable cadena array

   //en la llamada a la funcion se envía el array de caracteres
   cout << "Numero de vocales: " << cuenta_vocales(cadena) << endl;

   //comprobacion de recogida de datos por &
   //cuenta_vocales(cadena[80]);
   //printf ("La cadena introducida: %s" cuenta_vocales(&cadena[80]) ); 
  return (0);
}

int cuenta_vocales(char *s) //s contiene la direccion de inicio del array de caracteres 
//(segundo uso del * para ACCEDER al Valor d la Variable en una Funcion)
{
 int cont=0;//puntero se inicializa a cero
 while(*s) //BUCLE: mientras no llegue al nulo *valor de Variable
 {
    switch(toupper(*s)) //toupper pasa el carácter a mayúsculas para hacer la comprobación de *s Valor Variable.
     {                  //el carácter original no se modifica *.
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':  cont++; //sigue contando
     }
     s++;
  }
  return cont;
}
