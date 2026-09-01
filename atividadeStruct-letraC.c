#include <stdio.h>
#include <string.h>

typedef struct funcionario {
    char nome[50];
    float salario;
    int identificador;
    char cargo[30];
} funcionario;

void preencherfuncionario(funcionario *funcionario) {
    printf("Nome: ");
    scanf(" %49[^\n]", funcionario->nome);

    printf("Salario: ");
    scanf(" %f", &funcionario->salario);

    printf("Identificador: ");
    scanf(" %d", &funcionario->identificador);

    printf("Cargo: ");
    scanf(" %29[^\n]", funcionario->cargo);
}

void altera_salario(funcionario *funcionario) {
    printf("\nAlterando salario...\n");
    printf("Digite o novo salario: ");
    scanf(" %f", &funcionario->salario);
}

int main(void) {
    funcionario funcionario;

    preencherfuncionario(&funcionario);

    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Salario: %.2f\n", funcionario.salario);
    printf("Identificador: %d\n", funcionario.identificador);
    printf("Cargo: %s\n", funcionario.cargo);

    altera_salario(&funcionario);

    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Salario: %.2f\n", funcionario.salario);
    printf("Identificador: %d\n", funcionario.identificador);
    printf("Cargo: %s\n", funcionario.cargo);

    return 0;
}
