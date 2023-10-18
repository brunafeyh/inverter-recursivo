/*9. Projete um algoritmo recursivo que inverta a ordem dos elementos de um vetor.*/
#include <stdio.h>

void trocar(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void inverte(int v[], int n, int i, int j){
    if(i<j){
        trocar(&v[i], &v[j]);
        inverte(v, n, i+1, j-1);
    }
}

void lervet(int v[], int *n){
    int i;
    for(i=0; scanf("%d", &v[i]); i++){
        if(v[i] == -1) break;
    }
    *n = i;
}

void pvet(int v[], int n){
    int i;
    for(i=0; i< n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}


int main()
{
    int v[1000];
    int tam;
    
    lervet(v, &tam);
    int i = 0, j = tam - 1;
    pvet(v, tam);
    inverte(v, tam, i, j);
    pvet(v, tam);
    return 0;
}


