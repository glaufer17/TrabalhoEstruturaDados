#include "listaDuplamenteEncadeada.h" 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct lista {
    No *anterior;
    int dados; 
    No *proximo;  
};

//Inserir no Inicio.
void inserir_no_inicio(No **lista, int valor){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->dados = valor;
        novo->proximo = *lista;
        *lista = novo;
    }
    else{
        printf("Erro ao alocar memoria!");
    }
}

//Inserir no Final.
void inserir_no_final(No **lista, int valor){
    No *auxiliar, *novo = malloc(sizeof(No));

    if(novo){
        novo->dados = valor;
        novo->proximo = NULL;

        //É o primeiro?
        if(*lista = NULL){
            *lista = novo;
        }
        else{
            auxiliar = *lista;
            while(auxiliar->proximo)
                auxiliar = auxiliar->proximo;
            auxiliar->proximo = novo;
        }

    }
    else{
        printf("Erro ao alocar memoria!");
    }
}

//Imprimir Lista
void imprimir_lista(No *lista){

    printf("\n\tLista: ");
    while(lista){
        printf("%d ", lista->dados);
        lista = lista->proximo;
    }
    printf("\n\n");
}