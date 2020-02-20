#include <stdio.h>
int main()
{
	int funcionario,hora;
	float salario;
	scanf("%d", &funcionario);
	scanf("%d", &hora);
	scanf("%f", &salario);
	salario = (hora*salario);
	printf("NUMBER = %d\n",funcionario);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;	
}

