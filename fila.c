#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no * prox;
}NO;

NO * inicio = NULL;
NO * fim = NULL;
int tam = 0;


void add(int valor){ //fim
        NO * novo = malloc(sizeof(NO));
        novo->valor = valor;
        novo->prox = NULL;
        if(inicio == NULL){//fila vazia
            inicio = novo;
            fim = novo;
        }else { //fim
                fim->prox = novo;
                fim = novo;
        }
        tam++;
}

void imprimir(){
    
     NO * aux = inicio;
                   
    for(int i = 0; i<tam; i++){
        printf("valor: %d\n", aux->valor);
        aux = aux->prox;
    }
    
    
}

int remover(){
    int valor = -1;
    if(tam > 0){
        NO *lixo = inicio;
        valor = inicio->valor;
        inicio = inicio->prox;
        free(lixo);
        tam--;
    }else{
        printf("Pilha vazia\n!");
    }
    return valor;
}

int main(){
    add(18);
    add(19);
    add(17);
    add(21);
    add(15);
    add(20);
    imprimir();
    return 0;
}


