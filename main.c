#include <stdio.h>


int main (void){
	char funcionario;
	double salario;
	double bonus;
	scanf("%s %lf %lf",&funcionario, &salario, &bonus);
	double total = salario + (bonus*15)/100;

	printf("total = %.4f\n", total);

return 0;

}
