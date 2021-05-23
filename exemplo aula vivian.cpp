
/*Crie uma estrutura que armazene dados de 5 alunos: nome, quatro notas e calcule sua média. Ao final imprima: nome, notas, media e qual a maior media entre eles.*/
#include <stdio.h>
#include <stdlib.h>
/*struct dados {
float nt[4];
char nome[30];
float md;
};
struct dados aluno[5];*/
int main()
{
struct dados {
char nome[30];
float nt[4];
float md;
}; struct dados aluno[5];
int i,j;
float sn=0,maiormd=0;
for (i=0;i<5; i++)
{
fflush(stdin);
printf("\n\tDigite Nome do Aluno %d - ",i+1);
gets(aluno[i].nome);
sn=0;
for (j=0; j<4; j++)
{
printf("\n\tDigite Nota %d - ",j+1);
scanf("%f",&aluno[i].nt[j]);
sn=sn+aluno[i].nt[j];
}
aluno[i].md=sn/4;
}
system("cls");
for (i=0;i<5; i++)
{
printf("\n\tNotas do %s ",aluno[i].nome);
for (j=0; j<4; j++)
{
printf("\n\tNota %d - %.1f",j+1,aluno[i].nt[j]);
}
printf("\n\tMedia = %.1f",aluno[i].md);
printf("\n");
if (aluno[i].md > maiormd)
{
maiormd=aluno[i].md;
}
}
printf("\n\tMaior Media = %.1f",maiormd);
return(0);
}
