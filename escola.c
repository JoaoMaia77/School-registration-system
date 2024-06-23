#include <stdlib.h>
#include<string.h>
#include "escola.h"

/* Funções para manipulação de funcionários
void cadastrarFuncionario(struct funcionario *f, char nome[], int idade, char cpf[], char cargo[]);
void exibirFuncionario(struct funcionario f);
void listarFuncionarios(struct funcionario *funcionarios, int numFuncionarios);


struct funcionario{
char nome[60];
int idade;
char cpf[15]; // XXX.XXX.XXX-XX
char cargo[30];
}; */

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

/* Funções para manipulação de alunos
void cadastrarAluno(struct aluno *a);
void exibirAluno(struct aluno a);
void listarAlunos(struct aluno *alunos, int numAlunos);


struct aluno{
char nome[60];
int idade;
char cpf[15];
}; */

void cadastrarAluno(struct aluno *a, char nome[], int idade, char cpf[])
{
  strcpy(a -> nome, nome);
  a -> idade = idade;
  strcpy(a -> cpf, cpf);
}

void exibirAluno(struct aluno a)
{
  printf("Aluno:\n");
  printf("Nome: %s\n", a.nome);
  printf("Idade: %d\n", a.idade);
  printf("CPF: %s\n", a.cpf);
}

void listarAlunos(struct aluno *alunos, int numAlunos)
{
  printf("Quantidade de alunos: %d\n\n", numAlunos);
  printf("%-20s %-10s %s\n", "Nome", "Idade", "CPF"); // Cabeçalho
  printf("-------------------------------------\n");

  for (int i = 0; i < numAlunos; i++) 
  {
    printf("%-20s %-10d %s\n", 
               alunos[i].nome, 
               alunos[i].idade, 
               alunos[i].cpf);
    }
}