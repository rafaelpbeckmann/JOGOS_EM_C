# include <stdio.h>
# include <stdlib.h>
# include <time.h>

//funções dos jogos 

void perguntasErespostas () 
{
    printf("Ola, este jogo se chama perguntas e respsotas!\n");
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
            printf("parabens! voce acertou!\n");
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
        printf("qual e a capital da alemanha?\n");
        printf("1.Belem\n");
        printf("2.Berlim\n");
        printf("3.bruxelas\n");
        printf("4.toquio\n");
        printf("insira a sua resposta (1 a 4): ");
        scanf("%d", &resposta);
        
        //condiçao de resposta 2

        while(resposta < 1 || resposta > 4) 
        {
        printf("esolha uma alternativa valida");
        printf("qual e a capital da alemanha?\n");
        printf("1.Belem\n");
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
            printf("escolha errada!\n");
            printf("a escolha correta era 2. Berlim\n");
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
           printf("escolha uma alternativa valida\n");
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
            printf("parabens! voce acertou!\n");
            acertos[2] = 1;
        }

        else if(resposta == 3)
        {
            printf("nao ganha nada desde 92 haha\n");
        }

        else if(resposta == 2) 
        {
            printf("paysandu disk\n");
            printf("sai pra la serie C\n");
            acertos[2] = 0;
        }

        else 
        {
            printf("escolha errada!\n");
            printf("a escolha correta era 1.clube do remo\n");
            acertos[2] = 0;
        }

        //pergunta 4

        printf("pergunta 4\n");
        printf("A queda do muro de Berlim foi um marco de qual evento histórico?\n");
        printf("1.Guerra da viatna\n");
        printf("2.Guerra da Coreia\n");
        printf("3.Invasao da normandia\n");
        printf("4.Guerra fria\n");
        scanf("%d", &resposta);

        //validação da resposta 4

        while(resposta < 1 || resposta > 4)
        {
            printf("escolha uma alternativa valida\n");
            printf("A queda do muro de Berlim foi um marco de qual evento histórico?\n");
            printf("1.Guerra da viatna\n");
            printf("2.Guerra da Coreia\n");
            printf("3.Invasão da normandia\n");
            printf("4.Guerra fria\n");
            scanf("%d", &resposta);
        }

        //resultado 4

        if(resposta == 4)
        {
            printf("parabens! voce acertou!\n");
            acertos[3] = 1;    
        }

        else
        {
            printf("escolha errada\n");
            acertos[3] = 0;
        }

        //pergunta 5

        printf("pergunta 5\n");
        printf("como e chamado o ponto mais distante entre continentes?\n");
        printf("1.triangulo das bermudas\n");
        printf("2.ponto nemo\n");
        printf("3.mar do pacifico\n");
        printf("4.polo norte\n");
        printf("insira a sua resposta(1 a 4): \n");
        scanf("%d", &resposta);

        //validação da pergunta 5

        while(resposta < 1 || resposta > 4)
        {
        printf("insira uma resposra valida(1 a 4)");
        printf("como é chamado o ponto mais distante entre continentes?\n");
        printf("1.triangulo das bermudas\n");
        printf("2.ponto nemo\n");
        printf("3.mar do pacifico\n");
        printf("4.polo norte\n");
        printf("insira a sua resposta(1 a 4): ");
        scanf("%d", &resposta);
        }

        if(resposta == 2) 
        {
            printf("parabens! voce acertou!");
            acertos[4] = 1;
        }

        else
        {
            printf("escolha errada\n");
            acertos[4] = 0;
        }

        //encerramento do ciclo das perguntas

        //mostrar resultados

        printf("a sequencia correta era: 3,2,1,4,2\n");

        //pergunta ao usuario

        printf("O que voce deseja? (selecione 1 ou 2)\n");
        printf("1.jogar novamente\n");
        printf("2.ir para o menu\n");
        printf("escolha: ");
        scanf("%d", &novaJogada);

        //validaçao da escolha

        while(novaJogada < 1 || novaJogada > 2)
        {
        printf("escolha inválida selecione 1 ou 2\n");
        printf("1.jogar novamente\n");
        printf("2.ir para o menu\n");
        printf("escolha: ");
        scanf("%d", &novaJogada);
        }

        if (novaJogada == 2)
        {
            printf("obrigado por jogar!");
            return;
        }
    } while(novaJogada == 1);
}



     //encerramento do jogo pergunstas e respostas

void cobraNaCaixa ()
{

    //variaveis jogo 2 

    int jogador;
    int escolhaJogador;
    int posicaoCobra;
    int posicaoBotao;
    int caixas[5];
    char nomes[7][20] = {"rameses","nefertiti","tutancamon","cleopatra","anubis","horus","osiris"};
    int idNome1;
    int idNome2;

    //continua

    printf("jogo em desenvolvimento\n");

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