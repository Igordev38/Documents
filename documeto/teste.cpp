#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 40

// Função para validar o CPF (implementação simplificada)
int validar_cpf(const char *cpf) {
    // Implementação da lógica de validação do CPF
    // ...
  // Retorna 1 se o CPF for válido, 0 caso contrário
}

int registro() {
    char arquivo[] = "registros.csv";
    char cpf[MAX_NOME], nome[MAX_NOME], sobrenome[MAX_NOME], cargo[MAX_NOME];

    printf("Digite o CPF a ser cadastrado: ");
    scanf("%s", cpf);

    if (!validar_cpf(cpf)) {
        printf("CPF inválido.\n");
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

// ... (funções consulta e deletar)

int main() {
    // ... (restante do código)

    // Exemplo de uso da função validar_cpf
    if (validar_cpf("12345678909")) {
        printf("CPF válido.\n");
    } else {
        printf("CPF inválido.\n");
        system("pause");
    }
}
