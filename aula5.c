#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char ru[10];
    char telefone[15];
    char email[50];
} Register;

int main(){
    Register registros[10];
    FILE *file;
    char fileName[] = "1480020.csv"; // nome do arquivo igual meu RU
    for (int i = 0; i < 10; i++){
        printf("Registro %d:\n", i + 1);
        printf("Nome: ");
        fgets(registros[i].name, 50, stdin);
        registros[i].name[strcspn(registros[i].name, "\n")] = 0; // remove nova linha

        printf("RU: ");
        fgets(registros[i].ru, 10, stdin);
        registros[i].ru[strcspn(registros[i].ru, "\n")] = 0; 

        printf("Telefone: ");
        fgets(registros[i].telefone, 15, stdin);
        registros[i].telefone[strcspn(registros[i].telefone, "\n")] = 0; 

        printf("Email: ");
        fgets(registros[i].email, 50, stdin);
        registros[i].email[strcspn(registros[i].email, "\n")] = 0; 
    }
    file = fopen(fileName, "w");
    if(file == NULL){
        printf("Erro ao abrir\n");
        return 1;
    }
    fprintf(file, "Nome;RU;Telefone;Email\n");
    for(int i = 0; i < 10; i++){
        fprintf(file, "%s;%s;%s;%s\n",registros[i].name, registros[i].ru, registros[i].telefone, registros[i].email);
    }
    fclose(file);
    printf("Dados salvos no arquivo %s com sucesso!\n", fileName);
    return 0;
}
