#include <stdio.h>

int main(){
    // 4180020
    int ru[7];
    int *bigger = ru;
    int *lower = ru;
    char str_ru[7];
    //armazena os ru em uma variável
    printf("Digite o seu RU: ");
    scanf("%7s", str_ru);
    
    //pega essa variável com o ru e distruibui em cada um dos array com seu index
    for(int i = 0; i < 7; i++){
        ru[i] = str_ru[i] - '0';
    }
    // loop para verificar se ele é maior ou menor número do vetor
    for(int i = 1; i < 7; i++){
        if(ru[i] > *bigger){
            bigger = ru + i;
        }else{
            lower = ru + i;
        }
    }

    //resultado no console
    printf("O maior é %d\n",*bigger);
    printf("O menor é %d\n", *lower);

    return 0;
}
