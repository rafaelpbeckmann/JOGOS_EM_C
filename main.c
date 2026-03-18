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
    int acertos[5];

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

        // condição de resposta 1

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

        //resultado 1

        if (resposta == 3) 
        {
            printf("parabens voce acertou!\n");
            acertos[0] = 1;
        }

        else 
        {

            printf("escolha errada!\n");
            printf("escolha correta era 3(jupiter)\n");
            acertos[0] = 0;
        }

        //pergunta2

        printf("pergunta 2\n");
        printf("qual é a capital da alemanha?\n");
        printf("1.Belém\n");
        printf("2.Berlim\n");
        printf("3.bruxelas\n");
        printf("4.toquio\n");
        printf("insira a sua resposta (1 a 4): ");
        scanf("%d", &resposta);
        
        //condiçao de resposta 2

        while(resposta < 1 || resposta > 4) 
        {
            printf("esolha uma alternativa valida");
            printf("qual é a capital da alemanha?\n");
        printf("1.Belém\n");
        printf("2.Berlim\n");
        printf("3.bruxelas\n");
        printf("4.toquio\n");
        printf("insira a sua resposta (1 a 4): ");
        scanf("%d", &resposta);

        }

        //resultado  2

        if(resposta == 2) 
        {
            printf("parabens! voce acertou!");
            acertos[1] = 1;
        }

        else
        {
            printf("escolha errada!");
            printf("a escolha correta era 2. Berlim");
            acertos[1] = 0;
        }

        //pergunta 3

        printf("pergunta 3\n");
        printf("quem e o maior time do norte do pais?\n");
        printf("1.Clube do Remo\n");
        printf("2.paysandu\n");
        printf("3.Tuna\n");
        printf("4.Barcarena\n");
        printf("insira a sua resposta (1 a 4): ");
        scanf("%d", &resposta);

        //condição de resposta 3

        while(resposta < 1 || resposta > 4) 
        {
           printf("escolha uma alternativa valida");
           printf("quem e o maior time do norte do pais?\n");
           printf("1.Clube do Remo\n");
           printf("2.paysandu\n");
           printf("3.Tuna\n");
           printf("4.Barcarena\n");
           printf("insira a sua resposta (1 a 4): ");
           scanf("%d", &resposta);

        }

        //resultado 3

        if(resposta == 1) 
        {
            printf("parabens voce acretou!");
            acertos[2] = 1;
        }

        else if(resposta == 2) 
        {
            printf("paysandu disk");
            printf("sai pra la serie C");
            acertos[2] = 0;
        }

        else 
        {
            printf("escolha errada!");
            printf("a escolha correta era 1.clube do remo");
            acertos[2] = 0;
        }

        //pergunta 4

        



    } while(novaJogada == 1);
}



     //encerramento do jogo pergunstas e respostas

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