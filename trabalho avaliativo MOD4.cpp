
/* O programa em questão definirá O o quanto 5 funcionarios ganharão de comissão de acordo com o valor das
 vendas diminuindo o total de mercadoridas vencidas ou danificadas para a troca e de acordo com as metas instipuladas durante um mês 
 Acrecentando o salario base de R$ 1200,00. 

#############################        METAS       ##################################
Menos que     R$ 20.000,00 - meta não atingida;
acima de      R$ 20.000,00 e abaixo de R$ 30.000,00 - meta atingida, comissão de 1%;
igual e acima R$ 30.000,00 e abaixo de R$ 40.000,00 - meta atingida, comissão de 2%;
igual e acima R$ 40.000,00 e abaixo de R$ 50.000,00 - meta atingida, comissão de 3%;
acima de      R$ 50.000,00 - meta atingida, comissão de 4%. 

PARA O PROBLEMA EM QUESTÃO FOI REALIZADO COM O COMANDO STRUCT COM A VARIAVEL EM VETOR PARA GUARDAR 
VALORES DE CADA FUNCIONARIO, E LAÇOS DE REPETIÇÃO DE LEITURA E SAIDA DE DADOS COM O USO DE SELEÇÃO ENCADEADA.


*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
struct dados{
	char nome[50];
	char city[20];
	float vendas;
	float troca;
	float vliq;
	
	}; struct dados funcionario[5];
		

int i,sal=1200;
float gratif;
float valorcomis;
setlocale(LC_ALL,"Portuguese");
printf("\tLeitura dos Dados dos funcionários\n ");
for(i=0; i<2; i++){
	printf("\n");
	printf("\n%iºFUNCIONÁRIO: ",i+1);
	gets(funcionario[i].nome);
	printf("CIDADE: ");
	gets(funcionario[i].city);
	fflush(stdin);
	printf("TOTAL DE VENDAS: ");
	scanf("%f",&funcionario[i].vendas);
	printf("DESCONTO SOBRE MERCADORIA: "); 
	scanf("%f",&funcionario[i].troca);
	funcionario[i].vliq = funcionario[i].vendas - funcionario[i].troca;
	fflush(stdin);

}
system("cls");
//system("cls");
for (i=0; i<2; i++){

	
	
	printf("\n\n");
	if(funcionario[i].vliq <20000){
		printf("\n\n");
	printf("\nO funcionario %s teve a liquidez de %.2f\nNão atingiu a meta.",funcionario[i].nome,funcionario[i].vliq);
	printf("\nCIDADE:%s",funcionario[i].city);
	printf("\nSalario:R$%i,00",sal);
	}else if(funcionario[i].vliq >=20000 && funcionario[i].vliq<30000){
		gratif= sal+(funcionario[i].vliq*0.01);
		valorcomis = funcionario[i].vliq*0.01;
		printf("\nO funcionario %s teve a liquidez de %.4f\nAtingiu a meta.",funcionario[i].nome,funcionario[i].vliq);
		printf("\nCIDADE:%s",funcionario[i].vliq);
		printf("\nPorcentagem de comissão: 1%%");
	    printf("\nValor da comissão: R$%.2f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);	
	}else if(funcionario[i].vliq >= 30000 && funcionario[i].vliq<40000){
		gratif= sal+(funcionario[i].vliq*0.02);
		valorcomis = funcionario[i].vliq*0.02;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",funcionario[i].nome,funcionario[i].vliq);
		printf("\nCIDADE:%s",funcionario[i].city);
		printf("\nPorcentagem de comissão: 2%%");
		printf("\nValor da comissão: R$%.4f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);	
	}else if(funcionario[i].vliq >= 40000 && funcionario[i].vliq<50000){
		gratif= sal+(funcionario[i].vliq*0.03);
		valorcomis = funcionario[i].vliq*0.03;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",funcionario[i].nome,funcionario[i].vliq);
		printf("\nCIDADE:%s",funcionario[i].city);
		printf("\nPorcentagem de comissão: 3%%");
		printf("\nValor da comissão: R$%.4f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);
    }else if(funcionario[i].vliq >=50000){
		gratif= sal+(funcionario[i].vliq*0.04);
		valorcomis = funcionario[i].vliq*0.04;
		printf("\nO funcionario %s teve a liquidez de %.2f\nAtingiu a meta.",funcionario[i].nome,funcionario[i].vliq);
		printf("\nPorcentagem de comissão: 4%%");
		printf("\nValor da comissão: R$%.4f",valorcomis);
		printf("\nSalario+Comissão:R$%.2f",gratif);
    }

}
return 0;	
}
