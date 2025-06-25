#include <stdio.h>

// Variável global
int n; // inteiro de 32 bits alocado com nome "n"

// Assinaturas de funções
void carrega_n();      // função que lê um valor e armazena em 'n'
void set_n();          // função que valida se 'n' é par
void imprime_n();      // função que imprime o valor de 'n'

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1) Carregar valor de n (número de corredores)\n");
        printf("2) Verificar se n é par e corrigir se necessário\n");
        printf("3) Imprimir valor de n\n");
        printf("0) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                carrega_n();
                break;
            case 2:
                set_n();
                break;
            case 3:
                imprime_n();
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

void carrega_n() {
    printf("Digite o número de corredores: ");
    scanf("%d", &n);
}

void set_n() {
    while (n % 2 != 0) {
        printf("Valor inválido (n precisa ser par).\nDigite novamente: ");
        scanf("%d", &n);
    }
    printf("Valor válido!\n");
}

void imprime_n() {
    printf("Número atual de corredores: %d\n", n);
}
