#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float salario;
    int identificador;
    char cargo[30];
} funcionario;

void encontrarSalarios(funcionario func[], int quantidade) {
    funcionario maiorSalario = func[0];
    funcionario menorSalario = func[0];
    
    for (int i = 1; i < quantidade; i++) {
        if (func[i].salario > maiorSalario.salario) {
            maiorSalario = func[i];
        }
        if (func[i].salario < menorSalario.salario) {
            menorSalario = func[i];
        }
    }
    
    printf("\nMaior Salario:\n");
    printf("Cargo: %s\nSalario: R$ %.2f\n", maiorSalario.cargo, maiorSalario.salario);
    
    printf("\nMenor Salario:\n");
    printf("Cargo: %s\nSalario: R$ %.2f\n", menorSalario.cargo, menorSalario.salario);
}

int main() {
    funcionario funcionarios[100];
    int quantidade;
    printf("Quantos funcionarios deseja adicionar? ");
    scanf("%d", &quantidade);
    getchar();
    
    for (int i = 0; i < quantidade; i++) {
        printf("Funcionario %d:\n", i + 1);
        
        printf("Nome: ");
        fgets(funcionarios[i].nome, 50, stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = 0;
        
        printf("Identificador: ");
        scanf("%d", &funcionarios[i].identificador);
        
        printf("Cargo: ");
        scanf("%s", funcionarios[i].cargo);
        
        printf("Salario: R$ ");
        scanf("%f", &funcionarios[i].salario);
        
        getchar();
        printf("\n");
    }
    
    if (quantidade > 0) {
        encontrarSalarios(funcionarios, quantidade);
    }
    
    return 0;
}
