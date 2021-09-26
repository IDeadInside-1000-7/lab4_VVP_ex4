#include <stdio.h>
#include <math.h>
void main()
{
	float a, b, a2, b2, Summ, Razn, Proizv, Chastn;
	a = 5;
	b = 6;
	a2 = a * a;
	printf("a**2 = ");
	printf("%f\n", a2);
	b2 = b * b;
	printf("b**2 = ");
	printf("%f\n", b2);
	Summ = a2 + b2;
	printf("Summa Kvadratov = ");
	printf("%f\n", Summ);
	Razn = a2 - b2;
	printf("Raznost Kvadratov = ");
	printf("%f\n", Razn);
	Proizv = a2 * b2;
	printf("Proizvedenie Kvadratov = ");
	printf("%f\n", Proizv);
	Chastn = a2 / b2;
	printf("Chastnoe Kvadratov = ");
	printf("%f\n", Chastn);

}