#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

// Fun��o para validar o CPF (implementa��o simplificada)
int validar_cpf(const char *cpf) {
    // Implementa��o da l�gica de valida��o do CPF
    // ...
  // Retorna 1 se o CPF for v�lido, 0 caso contr�rio
}

int registro() {
    char arquivo[] = "registros.csv";
    char cpf[MAX_NOME], nome[MAX_NOME], sobrenome[MAX_NOME], cargo[MAX_NOME];

    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);

    if (!validar_cpf(cpf)) {
        printf("CPF inv�lido.\n");
        system("pause");
        break;
   
    }

    // ... (outros campos)

    FILE *file = fopen(arquivo, "a");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        system("pause");
       break;
    }

    fprintf(file, "%s,%s,%s,%s\n", cpf, nome, sobrenome, cargo);
    fclose(file);

    return 0;
}

// ... (fun��es consulta e deletar)

int main() {
    // ... (restante do c�digo)

    // Exemplo de uso da fun��o validar_cpf
    if (validar_cpf("12345678909")) {
        printf("CPF v�lido.\n");
    } else {
        printf("CPF inv�lido.\n");
        system("pause");
    }
}
