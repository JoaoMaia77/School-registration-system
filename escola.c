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

  for (int i = 0; i < numFuncionarios - 1; i++) 
  {
    printf("%-20s %-10d %-15s %s\n", 
           funcionarios[i].nome, 
           funcionarios[i].idade, 
           funcionarios[i].cpf, 
           funcionarios[i].cargo);
  }  
}

/* Funções para manipulação de alunos
void cadastrarAluno(struct aluno *a, char nome[], int idade, char cpf[]);
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

  for (int i = 0; i < numAlunos - 1; i++) 
  {
    printf("%-20s %-10d %s\n", 
               alunos[i].nome, 
               alunos[i].idade, 
               alunos[i].cpf);
    }
}

/* Funções para manipulação de turmas
void criarTurma(struct turma *t, char nome[], int ano, struct aluno alunos[], int numAlunos);
void exibirTurma(struct turma t);
void listarTurmas(struct turma *turmas, int numTurmas);
void adicionarAlunoTurma(struct turma *t, struct aluno a);


struct turma{
char nome[2]; // 1A | 2B | 3A...
int ano; // 1 | 2 | 3 
struct aluno alunos[50];
int qtdAlunos;
}; */

void criarTurma(struct turma *t, char nome[], int ano, struct aluno alunos[], int numAlunos)
{
  strcpy(t -> nome, nome);
  t -> ano = ano;
  for (int i = 0; i < numAlunos - 1; i++)
  {
    t -> alunos[i] = alunos[i];
  }
  t -> numAlunos = numAlunos;
}

void exibirTurma(struct turma t)
{
  printf("Turma: %s\n", t.nome);
  printf("Ano: %d\n", t.ano);
  printf("Número de Alunos: %d\n", t.numAlunos); 
  listarAlunos(t.alunos, t.numAlunos);
}

void listarTurmas(struct turma *turmas, int numTurmas)
{
  printf("Quantidade de turmas: %d\n", numTurmas);
  for (int i = 0; i < numTurmas - 1; i++)
  {
  printf("Turma: %s\n", turmas[i].nome);
  printf("Ano: %d\n", turmas[i].ano);
  printf("Número de Alunos: %d\n", turmas[i].numAlunos); 
  }
}

void adicionarAlunoTurma(struct turma *t, struct aluno a)
{
  t -> alunos[t -> numAlunos] = a;
  t -> numAlunos++;
}
