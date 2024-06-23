#include <stdlib.h>
#include<string.h>
#include "escola.h"

void cadastrarFuncionario(struct funcionario *f, char nome[], int idade, char cpf[], char cargo[])
{
  strcpy(f -> nome, nome);
  f -> idade = idade;
  strcpy( f -> cpf, cpf);
  strcpy( f -> cargo, cargo);
}

void exibirFuncionario(struct funcionario f)
{
printf("Funcionario:\n");
printf("Nome: %s\n", f.nome);
printf("Idade: %d\n", f.idade);
printf("CPF: %s\n", f.cpf);
printf("Cargo: %s\n", f.cargo);
printf("\n");
}

void listarFuncionarios(struct funcionario *funcionarios, int numFuncionarios)
{

  printf("Quantidade de funcionarios: %d\n\n", numFuncionarios);
  printf("%-20s %-10s %-15s %s\n", "Nome", "Idade", "CPF", "Cargo"); 
  printf("--------------------------------------------------------\n");

  for (int i = 0; i < numFuncionarios; i++) 
  {
    printf("%-20s %-10d %-15s %s\n", 
           funcionarios[i].nome, 
           funcionarios[i].idade, 
           funcionarios[i].cpf, 
           funcionarios[i].cargo);
  }  
}


