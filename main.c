# include <stdio.h>

void perguntasErespostas ();
void cobraNaCaixa ();
void gousmasWar ();
int main () 
{
    //variaveis

    int opcao;

    do
    {

        printf("selecione a sua opcao\n");
        printf("1.Perguntas e respostas\n");
        printf("2.Cobra na caixa\n");
        printf("3.Gousmas War\n");
        printf("4.sair");
        scanf("%d", &opcao);
        while (opcao < 1 || opcao > 4)
        {
            printf("escolha invalida, selecione uma das opções abaixo!");
            printf("selecione a sua opcao\n");
            printf("1.Perguntas e respostas\n");
            printf("2.Cobra na caixa\n");
            printf("3.Gousmas War\n");
            printf("4.sair");
            scanf("%d", &opcao);
        }
        switch (opcao) 
        {
            case 1: perguntasErespostas(); break;
            case 2: cobraNaCaixa(); break;
            case 3: gousmasWar(); break;
            case 4: printf("saindo do menu"); break;
        }
        
    } 
    
    while (opcao != 4);
   
    
    return 0;
}