#include <stdio.h> 

  

#define TAMANHO_MAX 10 

  

typedef struct { 

    int itens[TAMANHO_MAX]; 

    int topo; 

} Pilha; 

  

void inicializa(Pilha* p) { 

    p->topo = -1; 

} 

  

int empilha(Pilha*p, int valor){ 

    if(p->topo<TAMANHO_MAX-1){ 

    p->topo++; 

    p->itens[p->topo]=valor; 

    return 1; //sucesso (ou true) 

     

} 

    return 0; }// falha pilha cheia 

  

  

int desempilha(Pilha *p, int *valor) { //aqui estamos usando a função desempilha que explicamos anteriormente 

    if (p->topo >= 0) { 

        *valor = p->itens[p->topo]; 

        p->topo--; 

        return 1; // Sucesso 

    } 

    return 0; // Pilha Vazia 

} 

  

  

int main() { 

    Pilha p; 

    int valor; 

    //inicializa a pilha 

    inicializa(&p); //se for 1 

     

    //testa 

    printf("Topo da pilha: %d\n", p.topo); 

     

    //Empilha alguns valores 

    empilha(&p, 10); 

    printf("Topo da pilha: %d\n", p.topo); //ponteiro aponta para topo que é inteiro 

    printf("O valor armazenado no topo é: %d\n", p.itens[p.topo]); 

  

    empilha(&p, 20); 

    printf("O topo da pilha no momento: %d\n", p.topo); 

    printf("O valor armazenado no topo é: %d\n", p.itens[p.topo]); 

     

    empilha(&p, 30); 

    printf("O topo da pilha no momento: %d\n", p.topo); 

    printf("O valor armazenado no topo é: %d\n", p.itens[p.topo]); 

  

    printf("\n ____ Vamos desempilhar _____ \n"); 

  

    desempilha(&p,&valor); 

    printf("O topo da pilha depois de desempilhar no momento: %d\n", p.topo); 

    printf("O valor armazenado no topo é: %d\n", p.itens[p.topo]); 

     

    desempilha(&p,&valor); 

    printf("O topo da pilha depois de desempilhar no momento: %d\n", p.topo); 

    printf("O valor armazenado no topo é: %d\n", p.itens[p.topo]); 

     

    desempilha(&p,&valor); 

    printf("O topo da pilha depois de desempilhar no momento: %d\n", p.topo); 

     

} 