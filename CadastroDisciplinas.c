#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_DISCIPLINAS 3


typedef struct ficha_disciplina{
     int codigo;
     char nome[30];
     int semestre;
} Disciplina;

void cadastra_disciplina(int J, Disciplina lista_disciplinas[TAM_DISCIPLINAS]) ;
void imprime_disciplina(Disciplina lista_disciplinas[TAM_DISCIPLINAS]);
void inicializar_lista(Disciplina lista_disciplinas[TAM_DISCIPLINAS]);


int main() {
    
    Disciplina lista_disciplinas[TAM_DISCIPLINAS];
    int resposta=1;
    int i;
    
    inicializar_lista(lista_disciplinas);
    
    
    for (i = 0; i < TAM_DISCIPLINAS; i++){
        
        cadastra_disciplina(TAM_DISCIPLINAS, lista_disciplinas);
    
        printf("DIGITE\n ");
        printf("1- CADASTRAR ALUNO: \n");
        printf("0- SAIR: \n");
        scanf("%d", &resposta);
        
        if(resposta == 0)
            break;
    }
    
    imprime_disciplina(lista_disciplinas);
    
	return 0;
}

void cadastra_disciplina(int J, Disciplina lista_disciplinas[TAM_DISCIPLINAS]){
    
    printf("Nome da Disciplina: ");
    fgets(lista_disciplinas[J].nome, 30, stdin);

    printf("Digite o codigo da Disciplina: ");
    fflush(stdin);
    scanf("%d", &lista_disciplinas[J].codigo);
    
    printf("Digite o Semestre: ");
    fflush(stdin);
    scanf("%d", &lista_disciplinas[J].semestre);
    
    printf("CADASTRADO EFETUADO COM SUCESSO!! ");

}

void imprime_disciplina(Disciplina lista_disciplinas[TAM_DISCIPLINAS]){
    int k;
    for (k = 0; k < TAM_DISCIPLINAS; k++){
        
        if ( lista_disciplinas[k].codigo != -1){
            
            printf("\n\n");
            printf("---------------------- Cadastro de disciplina ----------------------\n\n ");
            printf("Disciplina: %s\n Codigo: %d\n Semestre: %d\n\n",lista_disciplinas[k].nome,lista_disciplinas[k].codigo,lista_disciplinas[k].semestre);
            printf("\n\n");
        
        }

    }

}

void inicializar_lista(Disciplina lista_disciplinas[TAM_DISCIPLINAS]){
    int i;
    for (i = 0; i < TAM_DISCIPLINAS; i++){
        lista_disciplinas[i].codigo = -1;
    }

} 

//void cadastra_aluno_disciplina(int i, Disciplina lista_disciplinas[]){
    //printf("Nome do Aluno......: ");
   //fflush(stdin);
    //gets(lista_disciplinas[i].aluno);

//}

