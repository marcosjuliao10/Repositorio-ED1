#include <stdio.h>

typedef struct funcionario {
    char nome[50];
    float salario;
    int identificador;
    char cargo[30];
} funcionario;

void exibirfuncionario(funcionario *func) {
    printf("Nome: %s\n", func->nome);
    printf("Salario: %.2f\n", func->salario);
    printf("Identificador: %d\n", func->identificador);
    printf("Cargo: %s\n", func->cargo);
}

int main(void) {
    funcionario func1 = {"Marcos Teste", 3000.50, 101, "Gerente"};
    
    printf("Dados do funcionario:\n");
    exibirfuncionario(&func1);
    
    return 0;
}
