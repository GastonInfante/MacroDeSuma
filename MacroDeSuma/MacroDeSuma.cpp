#include "stdafx.h"
#define MAX_WRONG(a,b) a > b ? a:b
#define MAX_RIGHT(a,b) ((a)>(b) ?(a):(b))
#include <stdio.h>
#include <stdlib.h>

int num1() {return 6;}

int main() {
	int num3 = 8;
	int resultWrong = MAX_WRONG(num1()+4, num3)*2; 
	//Due to the lack of parentheses, the operation would be (a,b) a+4 > b ? a+4:b*2. The problem shows up when we want to multiply the macro's resultant, since instead of multiplying the resultant, it multiplies by the last parameter. In case b is bigger, it will return b*2. Otherwise, if a is bigger, it will return the initial sum (a+4)
	//Al no tener parentesis, la operación sería (a,b) a+4 > b ? a+4:b*2, el problema aparece cuando queremos multiplicar el resultante de la macro, ya que en lugar de multiplicar el resultado, multiplicará por el último parámetro. En caso de ser b mayor, devuelve b*2, en cambio, si a es mayor, solo devuelve la suma inicial(a+4)
	
	int resultRight = MAX_RIGHT(num1()+4, num3)*2;
	//(a,b) ((a+4)>(b) ?(a+4):(b))*2 De esta manera funciona correctamente, resuelve todo lo que se encuentra dentro de los parentesis y luego le realiza la multiplicación al resultado
	//(a,b) ((a+4)>(b) ?(a+4):(b))*2 It works correctly in this way, it solves everything inside parentheses and then it does the multiplication to the result
	printf("%d\n", resultWrong);
	printf("%d\n", resultRight);
	system("pause");
	return 0;
}




