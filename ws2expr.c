#include <stdio.h>
#include <math.h>

int main() {
	int a=1, b=1, c=5, d=1;
	float A,B,C,D,E;
	
	A = ((5.0*3.0)+a)/5.0 + (1.0/b);
	B = ((3.0*a)+(5.0*b))/(2.0+c);
	C = (2.0/7.0)*(pow(4.0,3.0+c)-(5.0*d));
	D = sqrt((2.0+(8.0*b))/a);
	E = cbrt(pow(b,2.0)-(4.0*d));
	
	printf("4.1 a=1, b=1, c=5, d=1 \n");
	printf("A = %f \n",A);
	printf("B = %f \n",B);
	printf("C = %f \n",C);
	printf("D = %f \n",D);
	printf("E = %f \n",E);
	printf("\n");
	
	a=9, b=2, c=0, d=1;
	
	A = ((5.0*3.0)+a)/5.0 + (1.0/b);
	B = ((3.0*a)+(5.0*b))/(2.0+c);
	C = (2.0/7.0)*(pow(4.0,3.0+c)-(5.0*d));
	D = sqrt((2.0+(8.0*b))/a);
	E = cbrt(pow(b,2.0)-(4.0*d));
	
	printf("4.2 a=9, b=2, c=0, d=1 \n");
	printf("A = %f \n",A);
	printf("B = %f \n",B);
	printf("C = %f \n",C);
	printf("D = %f \n",D);
	printf("E = %f \n",E);
	printf("\n");
	
	a=0, b=3, c=3, d=3;
	
	A = ((5.0*3.0)+a)/5.0 + (1.0/b);
	B = ((3.0*a)+(5.0*b))/(2.0+c);
	C = (2.0/7.0)*(pow(4.0,3.0+c)-(5.0*d));
	D = sqrt((2.0+(8.0*b))/a);
	E = cbrt(pow(b,2.0)-(4.0*d));
	
	printf("4.3 a=0, b=3, c=3, d=3\n");
	printf("A = %f \n",A);
	printf("B = %f \n",B);
	printf("C = %f \n",C);
	printf("D = %f \n",D);
	printf("E = %f \n",E);
	
}
