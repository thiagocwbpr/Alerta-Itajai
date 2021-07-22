#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	float nivelRio;
	
	printf("====================================\n");
	printf("|  SISTEMA DE ALERTA - RIO ITAJAI  |\n");
	printf("====================================\n\n");
	
	printf("Informe o nivel do rio Itajai : ");
	scanf ("%f", &nivelRio);
	
	if (nivelRio <= 4){
		printf("\n\nAlerta Verde - Nivel normal ! \n\n");
	}
	else if (nivelRio >= 5 && nivelRio <= 6){
		printf("\n\nAlerta Amarelo - Nivel acima do normal ! \n\n");
	}
	else if (nivelRio >= 7 && nivelRio <= 8){
		printf("\n\nAlerta Laranja - Entre em contato com orgaos responsaveis ! \n\n");
	}
	else if (nivelRio >= 9){
		printf("\n\nAlerta Vermelho - Ligue para a defesa civil e bombeiros ! \n\n");	
	}
}
