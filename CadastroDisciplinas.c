#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_DISCIPLINAS 3
#define SUCESSO_CADASTRO 1
#define ERRO_CADASTRO_CODIGO 2
#define ERRO_CADASTRO_SEMESTRE 4


typedef struct ficha_disciplina{
     int codigo;
     char nome[30];
     int semestre;
} Disciplina;

void cadastra_disciplina(int J, Disciplina lista_disciplinas[TAM_DISCIPLINAS]) ;
void imprime_disciplina(Disciplina lista_disciplinas[], int G);
void inicializar_lista(Disciplina lista_disciplinas[], int H);



int main() {
    
    Disciplina lista_disciplinas[TAM_DISCIPLINAS];
    int i;
    int qtd=0;
    int sair=0;
    int retorno=0;
    
    inicializar_lista(lista_disciplinas, TAM_DISCIPLINAS);
    
    while (!sair){
    
    opcao = opcaoMenuDisciplinas();
    
    switch(opcao){
      case 0:{
        printf("VOLTANDO\n");
        sair = 1;
        break;
      }
      case 1: {
        retorno = cadastra_disciplina(qtd, lista_disciplinas);
        if (retorno == SUCESSO_CADASTRO){
            printf("Cadastro realizado com sucesso\n");
            qtd_alunos++;
        }else{
            switch(retorno) {
                case ERRO_CADASTRO_MATRICULA:{
                    printf("Matrícula Inválida");
                    break;
                }
                case ERRO_CADASTRO_SEXO:{
                    printf("Sexo Inválido");
                    break;
                }
                default:{
                    printf("Erro desconhecido!");
                }
               
            }
           printf("Não foi possível fazer o cadastro\n"); 
            
        }    
        break;
      }
      case 2: {
        listarAlunos(lista_aluno, qtd_alunos);
        break;
      }
      default:{
        printf("Opção Inválida\n");
      }
    }
  }
    
    
    for (i = 0; i < TAM_DISCIPLINAS; i++){
        
        cadastra_disciplina(qtd, lista_disciplinas);
        
        qtd++;
    }
    
    imprime_disciplina(lista_disciplinas, qtd);
    
	return 0;
}

int opcaoMenuDisciplinas(){
    int opcao;
    printf("Digite a opção:\n");
    printf("0 - Voltar a Menu Principal\n");
    printf("1 - Inserir Disciplina\n");
    printf("2 - Alterar Disciplinas\n");
    printf("3 - Excluir Disciplinas\n");
    printf("4 - Incluir/Excluir Aluno nas Disciplinas\n");
    scanf("%d",&opcao);
    return opcao;
}

int cadastra_disciplina(int J, Disciplina lista_disciplinas[TAM_DISCIPLINAS]){
    
    printf("\n### Cadastro de Disciplina ###\n");
    
    printf("Digite o codigo da Disciplina: ");
    scanf("%d", &lista_disciplinas[J].codigo);
    getchar();
    
    if (lista_disciplinas[J].codigo <= 0) {
        return ERRO_CADASTRO_CODIGO;
    }    
    
    printf("Nome da Disciplina: ");
    fgets(lista_disciplinas[J].nome, 30, stdin);
    size_t ln = strlen(lista_disciplinas[J].nome) - 1; //size_t = unsigned integer type
        if (lista_disciplinas[J].nome[ln] == '\n')
          lista_disciplinas[J].nome[ln] = '\0';

    
    printf("Digite o Semestre: ");
    scanf("%d", &lista_disciplinas[J].semestre);
    getchar();
    
    if (lista_disciplinas[J].semestre <= 0) {
        return ERRO_CADASTRO_SEMESTRE;
    }   
    
    
    return SUCESSO_CADASTRO;

}

void imprime_disciplina(Disciplina lista_disciplinas[], int G){
    int k;
    for (k = 0; k < G; k++){
        
        if ( lista_disciplinas[k].codigo != -1){
            
            printf("\n\n");
            printf("---------------------- Cadastro de disciplina ----------------------\n\n ");
            printf("Disciplina: %s\n Codigo: %d\n Semestre: %d\n\n",lista_disciplinas[k].nome,lista_disciplinas[k].codigo,lista_disciplinas[k].semestre);
            printf("\n\n");
        
        }

    }

}

void inicializar_lista(Disciplina lista_disciplinas[], int H){
    int i;
    for (i = 0; i < H; i++){
        lista_disciplinas[i].codigo = -1;
    }

} 

//void cadastra_aluno_disciplina(int i, Disciplina lista_disciplinas[]){
    //printf("Nome do Aluno......: ");
   //fflush(stdin);
    //gets(lista_disciplinas[i].aluno);

//}
