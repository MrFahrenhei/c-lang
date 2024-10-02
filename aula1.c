#include <stdio.h>
#include <string.h>

//Registro
typedef struct
{
    char nome[100];
    int ru;
} Register;

int main()
{
    Register aluno;
    // passa os valores para variáveis
    printf("Digite o seu RU: ");
    scanf("%d", &aluno.ru);
    printf("Digite o seu nome completo: ");
    scanf(" %[^\n]", aluno.nome);

    // ponteiros
    Register *pAluno = &aluno;
    if (pAluno->ru % 2 == 0)
    {
        printf("O RU %d é par.\n", pAluno->ru);
    }
    else
    {
        printf("O RU %d é impar.\n", pAluno->ru);
    }

    printf("O seu nome invertido:");
    for (int i = strlen(pAluno->nome) - 1; i >= 0; i--)
    {
        printf("%c", pAluno->nome[i]);
    }
    printf("\n");
    return 0;
}