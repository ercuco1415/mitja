#include <stdio.h>

int main() {
	/*float suma=0;*/float suma = 0.0;
	/*float mitja;*/float mitja=0.0;
	/*float nou_valor;*/
	float nou_valor = 0.0;
	int num_repeticions = 0;
	char consulta = 's';
	
	while(consulta=='s') {
		printf("Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma = suma + nou_valor;
		num_repeticions = num_repeticions + 1;
		printf("Vols continuar (s/n): ");
		/*scanf(" %c",&consulta);*/
		scanf("%s",&consulta);//modificació 
	}
	mitja = suma/num_repeticions;
	printf("La mitja és: %.2f\n",mitja);	
	return 0;
}
