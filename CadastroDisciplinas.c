#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_DISCIPLINAS 3


typedef struct ficha_disciplina{
     int codigo;
     char nome[30];
     int semestre;
} Disciplina;


void cadastra_disciplina(int i, Disciplina lista_disciplinas[]);
void imprime_disciplina(Disciplina lista_disciplinas[]);
void inicializar_lista(Disciplina lista_disciplinas[]);
void cadastra_aluno_disciplina(int i, Disciplina lista_disciplinas[]);
    

int main() {
    
    Disciplina lista_disciplinas[TAM_DISCIPLINAS];

	return 0;
}

void cadastra_disciplina(int i, Disciplina lista_disciplinas[]){
    printf("Nome da Disciplina......: ");
    fflush(stdin);
    gets(lista_disciplinas[i].nome);

    printf("Digite o codigo da Disciplina ......: ");
    fflush(stdin);
    scanf("%d", &lista_disciplinas[i].codigo);

    printf("Digite o Semestre ......: ");
    fflush(stdin);
    scanf("%d", &lista_disciplinas[i].semestre);

}

void imprime_disciplina(Disciplina lista_disciplinas[]){
    int i;
    for (i = 0; i < TAM_DISCIPLINAS; i++){
        printf("\n\n");

        printf("---------------------- Cadastro de disciplina ----------------------\n\n ");
        printf("Disciplina: %s\n Codigo: %d\n Semestre: %d\n\n",
                                         lista_disciplinas[i].nome,
                                         lista_disciplinas[i].codigo,
                                         lista_disciplinas[i].semestre,

        printf("\n\n");

    }

}

void inicializar_lista(Disciplina lista_disciplinas[]){
    int i;
    for (i = 0; i < TAM_DISCIPLINAS; i++){
        lista_disciplinas[i].codigo = -1;
    }

} 

void cadastra_aluno_disciplina(int i, Disciplina lista_disciplinas[]){
    printf("Nome do Aluno......: ");
    fflush(stdin);
    gets(lista_disciplinas[i].aluno);

}
