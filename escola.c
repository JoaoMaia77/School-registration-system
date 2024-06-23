#include <stdlib.h>
#include<string.h>
#include "escola.h"

/* Funções para manipulação de funcionários
void cadastrarFuncionario(struct funcionario *f, char nome[], int idade, char cpf[], char cargo[]);
void exibirFuncionario(struct funcionario f);
void listaralunos(struct funcionario *funcionarios, int numFuncionarios);


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

  for (int i = 0; i < numAlunos; i++) 
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
  for (int i = 0; i < numAlunos; i++)
  {
    t -> alunos[i] = alunos[i];
  }
  t -> numAlunos = numAlunos;
}

void exibirTurma(struct turma t)
{
  printf("Turma: %s\n", t.nome);
  printf("Ano: %d\n", t.ano);
  printf("Numero de Alunos: %d\n", t.numAlunos); 
  listarAlunos(t.alunos, t.numAlunos);
}

void listarTurmas(struct turma *turmas, int numTurmas)
{
  printf("Quantidade de turmas: %d\n\n", numTurmas);
  printf("%-20s %-10s %-15s\n", "Turma", "Ano", "Número de Alunos"); 
  printf("---------------------------------------------------------\n");

  for (int i = 0; i < numTurmas; i++) 
  { 
    printf("%-20s %-11d %-18d\n", 
                turmas[i].nome,
                turmas[i].ano, 
                turmas[i].numAlunos);
    printf("\n");  
  }
}

void adicionarAlunoTurma(struct turma *t, struct aluno a)
{
  t -> alunos[t -> numAlunos] = a;
  t -> numAlunos++;
}

/* Funções para manipulação de escolas
void cadastrarEscola(struct escola *e, char nome[], char codigo[], char cnpj[], struct funcionario funcionarios[], struct turma turmas[], struct aluno alunos[]);
void exibirEscola(struct escola e);
void listarEscolas(struct escola *escolas, int numEscolas);
void adicionarFuncionarioEscola(struct escola *e, struct funcionario f);
void adicionarTurmaEscola(struct escola *e, struct turma t);


struct escola{
char nome[50];
char codigo[10];
char cnpj[18]; // XX.XXX.XXX/XXXX-XX 
struct funcionario funcionarios[100];
int numFuncionarios;
struct turma turmas[20];
int numTurmas;
struct aluno alunos[1000];
int numAlunos
}; */

void cadastrarEscola(struct escola *e, char nome[], char codigo[], char cnpj[], struct funcionario funcionarios[], int numFuncionarios, struct turma turmas[], int numTurmas, struct aluno alunos[],int numAlunos)
{
  strcpy(e -> nome, nome);
  strcpy(e -> codigo, codigo);
  strcpy(e -> cnpj, cnpj);
  e ->numFuncionarios = numFuncionarios;
  e ->numTurmas = numTurmas;
  e ->numAlunos = numAlunos;

  for (int i = 0; i < e->numFuncionarios; i++)
  {
  e->funcionarios[i] = funcionarios[i];
  }
  for (int i = 0; i < e->numTurmas; i++)
  {
  e->turmas[i] = turmas[i];
  }
  for (int i = 0; i < e->numFuncionarios; i++)
  {
  e->alunos[i] = alunos[i];
  }
}

void exibirEscola(struct escola e)
{
  printf("Escola: %s\n", e.nome);
  printf("Codigo: %s\n", e.codigo);
  printf("CNPJ: %s\n", e.cnpj);
  printf("Numero de Funcionarios: %d\n", e.numFuncionarios);
  printf("Numero de Turmas: %d\n", e.numTurmas);
  printf("Numero de Alunos: %d\n", e.numAlunos);
}

void listarEscolas(struct escola *escolas, int numEscolas)
{
  printf("Quantidade de escolas: %d\n\n", numEscolas);
  printf("%-30s %-10s %-20s %-20s %-15s %s\n", "Nome", "Código", "CNPJ", "Funcionários", "Turmas", "Alunos");
  printf("----------------------------------------------------------------------------------------------------------------\n");
  
  for (int i = 0; i < numEscolas - 1; i++) 
  { 
    printf("%-30s %-10s %-20s %-24d %-19d %-5d\n", 
                    escolas[i].nome, 
                    escolas[i].codigo, 
                    escolas[i].cnpj, 
                    escolas[i].numFuncionarios, 
                    escolas[i].numTurmas, 
                    escolas[i].numAlunos);
    }
}

void adicionarFuncionarioEscola(struct escola *e, struct funcionario f)
{
  e -> funcionarios[e -> numFuncionarios] = f;
  e -> numFuncionarios++;
}

void adicionarTurmaEscola(struct escola *e, struct turma t)
{
  e -> turmas[e -> numTurmas] = t;
  e -> numTurmas++;
}