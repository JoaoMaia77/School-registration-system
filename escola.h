#ifndef ESCOLA_H
#define ESCOLA_H

//Estrutura de dados
struct funcionario{
char nome[60];
int idade;
char cpf[15]; // XXX.XXX.XXX-XX
char cargo[30];
};

struct aluno{
char nome[60];
int idade;
char cpf[15];
};

struct turma{
char nome[2]; // 1A | 2B | 3A...
int ano; // 1 | 2 | 3 
struct aluno alunos[50];
int numAlunos;
};

struct escola{
char nome[60];
char codigo[10];
char cnpj[18]; // XX.XXX.XXX/XXXX-XX 
struct funcionario funcionarios[100];
int numFuncionarios;
struct turma turmas[20];
int numTurmas;
struct aluno alunos[1000];
int numAlunos;
};

// Funções para manipulação de funcionários
void cadastrarFuncionario(struct funcionario *f, char nome[], int idade, char cpf[], char cargo[]);
void exibirFuncionario(struct funcionario f);
void listarFuncionarios(struct funcionario *funcionarios, int numFuncionarios);
// Funções para manipulação de alunos
void cadastrarAluno(struct aluno *a, char nome[], int idade, char cpf[]);
void exibirAluno(struct aluno a);
void listarAlunos(struct aluno *alunos, int numAlunos);
// Funções para manipulação de turmas
void criarTurma(struct turma *t, char nome[], int ano, struct aluno alunos[], int numAlunos);
void exibirTurma(struct turma t);
void listarTurmas(struct turma *turmas, int numTurmas);
void adicionarAlunoTurma(struct turma *t, struct aluno a);
// Funções para manipulação de escolas
void cadastrarEscola(struct escola *e, char nome[], char codigo[], char cnpj[], struct funcionario funcionarios[], int numFuncionarios, struct turma turmas[], int numTurmas, struct aluno alunos[], int numAlunos);
void exibirEscola(struct escola e);
void listarEscolas(struct escola *escolas, int numEscolas);
void adicionarFuncionarioEscola(struct escola *e, struct funcionario f);
void adicionarTurmaEscola(struct escola *e, struct turma t);

#endif // !ESCOLA_H
