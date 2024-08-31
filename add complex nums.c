// mohamed amin

#include <stdio.h>
#include <stdlib.h>

typedef struct Scomplex
{
	float real;
	float img;
}complex;
complex add(complex num1, complex num2);
int main()
{
	complex num1,num2,temp;
	printf("For 1st complex number \n");
	printf("Enter real and imaginary respectively: ");


	scanf("%f%f",&num1.real,&num1.img);
	printf("For 2nd complex number \n");
	printf("Enter real and imaginary respectively: ");

	scanf("%f%f",&num2.real,&num2.img);
	temp = add(num1,num2);
	printf("sum = %.1f + %.1fi",temp.real,temp.img);

	return 0;
}
complex add(complex num1, complex num2)
{
	complex temp;
	temp.real = num1.real + num2.real;
	temp.img = num1.img + num2.img;
	return temp;
}
