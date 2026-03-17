# include <stdio.h>

//funções dos jogos 

void perguntasErespostas () 
{
    printf("Olá, este jogo se chama perguntas e respsotas!\n");
    printf("Selecione a alternativa correta para as perguntas, boa sorte!\n");

    //variaveis do jogo 1

    int resposta;
    int novaResposta;
    int novaJogada = 0;

    //pergunta 1

    do 
    {
        printf("pergunta 1\n");
        printf("qual o maior planeta do sistema solar?\n");
        printf("1: marte\n");
        printf("2: terra\n");
        printf("3: jupiter\n");
        printf("4: venus\n");
        printf("escolha a alternatica(1 a 4): ");
        scanf("%d", &resposta);

        // condições de resposta 

        while (resposta < 1 || resposta > 4) 
        {
            printf("escolha uma alternativa valida(1 a 4)\n");
            printf("qual o maior planeta do sistema solar?\n");
        printf("1: marte\n");
        printf("2: terra\n");
        printf("3: jupiter\n");
        printf("4: venus\n");
        printf("escolha a \nalternatica(1 a 4): ");
        scanf("%d", &resposta);
        }

        if (resposta == 3) 
        {
            printf("parabens voce acertou!\n");
        }

        else 
        {
            printf("escolha errada!\n");
            printf("a escolha correta era 3!\n");

            // escolha do usuario

        printf("deseja tentar novamente?\n");
        printf("1. tentar de novo\n");
        printf("2. sair\n");
        printf("selecione sua resposta(1 ou 2): ");
        scanf("%d", &novaJogada);


        while(novaJogada != 1 && novaJogada !=2)
        {
        printf("digite um valor valido\n");
        printf("deseja tentar novamente?\n");
        printf("1. tentar de novo\n");
        printf("2. sair\n");
        printf("selecione sua resposta(1 ou 2): ");
        scanf("%d", &novaJogada);
        } 

        if (novaJogada == 2) 
        {
            return;
        }

        }

    } while(novaJogada == 1);

    //encerramento da pergunta1

}
void cobraNaCaixa ()
{
printf("jogo em desenvolvimento...\n");
}
void gousmasWar () 
{
    printf("jogo em desenvolvimento...\n");
}
int main () 
{
    //variaveis menu

    int opcao;

    do
    {

        //exibição do menu

        printf("selecione a sua opcao\n");
        printf("1.Perguntas e respostas\n");
        printf("2.Cobra na caixa\n");
        printf("3.Gousmas War\n");
        printf("4.sair\n");
        scanf("%d", &opcao);

        //caso de resposta errada

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

        // lógica de escolha

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