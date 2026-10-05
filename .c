#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_PERGUNTAS 5

typedef struct {
    char pergunta[200];
    char opcao1[100];
    char opcao2[100];
    int resposta_correta;
    char feedback_positivo[200];
    char feedback_negativo[200];
} Questao;

void limpar_ecra(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausar_execucao(void) {
    printf("\nPressione ENTER para continuar...");
    while (getchar() != '\n');
    getchar();
}

int ler_opcao_valida(void) {
    int opcao;
    char buffer[50];
    
    while (1) {
        printf("Sua resposta (1 ou 2): ");
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            if (sscanf(buffer, "%d", &opcao) == 1 && (opcao == 1 || opcao == 2)) {
                return opcao;
            }
        }
        printf("Opcao invalida! Digite apenas 1 ou 2.\n");
    }
}

int main(void) {
    int pontos = 0;

    Questao quiz[TOTAL_PERGUNTAS] = {
        {
            "1. Onde uma pilha usada deve ser descartada?",
            "1) Lixo comum",
            "2) Ponto de coleta especializado",
            2,
            "Excelente! Voce evitou a contaminacao do solo por metais pesados!",
            "Este componente precisa de descarte especial. Que tal pesquisar mais sobre o material?"
        },
        {
            "2. Qual destes e um componente de hardware?",
            "1) Teclado",
            "2) Windows",
            1,
            "Muito bem! O teclado e um componente fisico do computador.",
            "Hardware corresponde aos componentes fisicos do computador."
        },
        {
            "3. O termo em ingles 'Recycle' significa:",
            "1) Reciclar",
            "2) Queimar",
            1,
            "Parabens! Conhecer termos tecnicos ajuda na educacao ambiental.",
            "Recycle significa reciclar. Continue estudando os termos ambientais."
        },
        {
            "4. As normas ambientais ajudam a:",
            "1) Proteger o meio ambiente",
            "2) Aumentar a producao de lixo",
            1,
            "Correto! As normas ambientais ajudam a reduzir impactos ambientais.",
            "As normas ambientais existem para proteger a natureza e a saude das pessoas."
        },
        {
            "5. Se cada aparelho reciclado evita 2 kg de residuos e foram reciclados 5 aparelhos, quantos kg foram evitados?",
            "1) 10 kg",
            "2) 7 kg",
            1,
            "Excelente! Voce calculou corretamente o impacto ambiental positivo.",
            "Multiplique 5 aparelhos por 2 kg para encontrar o resultado."
        }
    };

    limpar_ecra();
    printf("=========================================\n");
    printf("   ECOSCAN - ECOQUIZ (LIXO ELETRONICO)   \n");
    printf("=========================================\n\n");

    for (int i = 0; i < TOTAL_PERGUNTAS; i++) {
        printf("%s\n", quiz[i].pergunta);
        printf("%s\n", quiz[i].opcao1);
        printf("%s\n", quiz[i].opcao2);

        int resposta = ler_opcao_valida();

        if (resposta == quiz[i].resposta_correta) {
            printf("\n%s\n", quiz[i].feedback_positivo);
            pontos += 5;
        } else {
            printf("\n%s\n", quiz[i].feedback_negativo);
        }

        printf("Pontuacao atual: %d pontos\n\n", pontos);
        printf("-----------------------------------------\n");
    }

    pausar_execucao();
    limpar_ecra();

    printf("\n=========================================\n");
    printf("             RESULTADO FINAL             \n");
    printf("=========================================\n");
    printf("Pontuacao Total: %d de %d pontos\n", pontos, TOTAL_PERGUNTAS * 5);
    
    if (pontos == 25) {
        printf("Desempenho: Excelente! Conhecimento consolidado em sustentabilidade.\n");
    } else if (pontos >= 15) {
        printf("Desempenho: Bom! Continue estudando sobre descarte correto.\n");
    } else {
        printf("Desempenho: Atencao! Revise as orientacoes de descarte no menu EcoScan.\n");
    }

    printf("\nObrigado por participar do ECOQUIZ :)\n\n");

    return 0;
}
