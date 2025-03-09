#include <stdio.h>

int main(){

     int idade, matricula;
     float altura;
     char nome [50];

     printf("Digite sua idade: \n");
     scanf("%d", &idade);

     printf("Digite sua Matricula: \n");
     scanf("%d", &matricula);

     printf("Digite sua altura: \n");
     scanf("%f", &altura);

     printf("Digite o nome: \n");
     scanf("%s", &nome);

     printf("Nome do Aluno: %s - Matricula: %d\n", nome, matricula);
     printf("Idade: %d - Altura: %f\n", idade, altura);



return 0;

}






