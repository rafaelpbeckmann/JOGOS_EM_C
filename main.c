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
        printf("insira sua resposta(1 a 4): ");
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
        printf("insira sua resposta(1 a 4): ");
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
        printf("se um anel tem 3 pedras, quantas pedras tem 11 aneis ?\n");
        printf("1.33\n");
        printf("2.300\n");
        printf("3.27\n");
        printf("4.90\n");
        printf("insira a sua resposta (1 a 4): ");
        scanf("%d", &resposta);

        //condição de resposta 3

        while(resposta < 1 || resposta > 4) 
        {
           printf("escolha uma alternativa valida\n");
           printf("se um anel tem 3 pedras, quantas pedras tem 11 aneis ?\n");
           printf("1.33\n");
           printf("2.300\n");
           printf("3.27\n");
           printf("4.90\n");
           printf("insira a sua resposta (1 a 4): ");
           scanf("%d", &resposta);
        }

        //resultado 3

        if(resposta == 1) 
        {
            printf("parabens! voce acertou!\n");
            acertos[2] = 1;
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
        printf("insira sua resposta(1 a 4): ");
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
    int novaJogada;

    //menu do jogo

    for(int i = 0 ; i < 7; i++)
    {
        printf("%d - %s\n", i + 1, nomes[i]);
    }

    //resposta do jogador 1
    
    printf("jogador 1, qual o numero do seu nome?\n: ");
    scanf("%d", &escolhaJogador);

    //validação de resposta do jogador 1

    while(escolhaJogador < 1 || escolhaJogador > 7)
    {
    printf("escolha inválida, tente novamente\n");
    printf("jogador 1, qual o numero do seu nome?\n: ");
    scanf("%d", &escolhaJogador);
    }
    idNome1 = escolhaJogador - 1;

    //resposta do jogador 2

    printf("jogador 2, qual o numero do seu nome?\n: ");
    scanf("%d", &escolhaJogador);

    //validação de resposta do jogador 2

    while(escolhaJogador < 1 || escolhaJogador > 7)
    {
        printf("escolha invalida, tente novamente\n");
        printf("jogador 2, qual o numero do seu nome?\n: ");
        scanf("%d", &escolhaJogador);
    }
    idNome2 = escolhaJogador - 1;

    do
    {

    //aleatorizador

    int jogadorAtual = rand() % 2;
    posicaoBotao = (rand() % 5) + 1;

    do
    {
        posicaoCobra = (rand() % 5) + 1;
    }while(posicaoCobra == posicaoBotao);

    for(int i = 0; i < 5; i++)
    {
        caixas[i] = 0;
    }

    //escolha das caixas

    while(1)
    {
        if(jogadorAtual == 0) 
        {
            printf("vez de %s\n", nomes[idNome1]);
        }
        else
        {
            printf("vez de %s\n", nomes[idNome2]);
        }

        printf("ola jogador, faca a escolha das suas caixas! \n");
        {
            //imprimir caixas

            const int larguraTela = 80;
            const int larguraCaixa = 11;
            const int espacoEntre = 4;

            //calcular recuo para centralizar cada linha de caixas

            int recuoPrimeiraLinha = (larguraTela - ((2 * larguraCaixa) + espacoEntre)) / 2;
            int recuoSegundaLinha = (larguraTela - ((3 * larguraCaixa) + (2 * espacoEntre))) / 2;

            if(recuoPrimeiraLinha < 0) recuoPrimeiraLinha = 0;
            if(recuoSegundaLinha < 0) recuoSegundaLinha = 0;

            for(int linha = 0; linha < 2; linha++)
            {
                //definir quantidade de caixas por linha

                int inicio = (linha == 0) ? 0 : 2;
                int quantidade = (linha == 0) ? 2 : 3;
                int recuo = (linha == 0) ? recuoPrimeiraLinha : recuoSegundaLinha;

                //imprimir topo da caixa

                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    printf(" _________ ");
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir linha vazia da caixa

                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    printf("|         |");
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir conteudo da caixa (X ou numero)

                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    int indiceCaixa = inicio + i;
                    char conteudo = (caixas[indiceCaixa] == 1) ? 'X' : (char)('1' + indiceCaixa);
                    printf("|    %c    |", conteudo);
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir base da caixa

                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    printf("|_________|");
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir numeracao abaixo das caixas

                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    int numeroCaixa = inicio + i + 1;
                    printf("     %d     ", numeroCaixa);
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                if(linha == 0) printf("\n");
            }
        }
        printf("escolha a sua caixa: ");
        scanf("%d", &escolhaJogador);

        //validação de resposta

        while(escolhaJogador < 1 || escolhaJogador > 5 || caixas[escolhaJogador - 1] == 1) 
        {
        if(escolhaJogador >= 1 && escolhaJogador <= 5 && caixas[escolhaJogador - 1] == 1)
        {
            printf("esta caixa ja foi aberta, escolha outra\n");
        }
        else
        {
        printf("a escolha deve ser de um dos numeros abaixo, tente de novo\n");
        }
        printf("ola jogador, faca a escolha das suas caixas! \n");
        {
            //imprimir caixas
            const int larguraTela = 80;
            const int larguraCaixa = 11;
            const int espacoEntre = 4;
            //calcular recuo para centralizar cada linha de caixas
            int recuoPrimeiraLinha = (larguraTela - ((2 * larguraCaixa) + espacoEntre)) / 2;
            int recuoSegundaLinha = (larguraTela - ((3 * larguraCaixa) + (2 * espacoEntre))) / 2;

            if(recuoPrimeiraLinha < 0) recuoPrimeiraLinha = 0;
            if(recuoSegundaLinha < 0) recuoSegundaLinha = 0;

            for(int linha = 0; linha < 2; linha++)
            {
                //definir quantidade de caixas por linha
                int inicio = (linha == 0) ? 0 : 2;
                int quantidade = (linha == 0) ? 2 : 3;
                int recuo = (linha == 0) ? recuoPrimeiraLinha : recuoSegundaLinha;

                //imprimir topo da caixa
                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    printf(" _________ ");
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir linha vazia da caixa
                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    printf("|         |");
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir conteudo da caixa (X ou numero)
                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    int indiceCaixa = inicio + i;
                    char conteudo = (caixas[indiceCaixa] == 1) ? 'X' : (char)('1' + indiceCaixa);
                    printf("|    %c    |", conteudo);
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir base da caixa
                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    printf("|_________|");
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                //imprimir numeracao abaixo das caixas
                for(int i = 0; i < recuo; i++) printf(" ");
                for(int i = 0; i < quantidade; i++)
                {
                    int numeroCaixa = inicio + i + 1;
                    printf("     %d     ", numeroCaixa);
                    if(i < quantidade - 1) for(int j = 0; j < espacoEntre; j++) printf(" ");
                }
                printf("\n");

                if(linha == 0) printf("\n");
            }
        }
        printf("escolha a sua caixa: ");
        scanf("%d", &escolhaJogador);
        }

        if(escolhaJogador == posicaoBotao)
        {
            if(jogadorAtual == 0)
            {
                printf("%s venceu! Encontrou o botao!\n", nomes[idNome1]);
                printf("%s perdeu.\n", nomes[idNome2]);
            }
            else
            {
                printf("%s venceu! Encontrou o botao!\n", nomes[idNome2]);
                printf("%s perdeu.\n", nomes[idNome1]);
            }
            break;
        }
        else if(escolhaJogador == posicaoCobra)
        {
            if(jogadorAtual == 0)
            {
                printf("%s perdeu! A cobra estava nessa caixa!\n", nomes[idNome1]);
                printf("%s venceu!\n", nomes[idNome2]);
            }
            else
            {
                printf("%s perdeu! A cobra estava nessa caixa!\n", nomes[idNome2]);
                printf("%s venceu!\n", nomes[idNome1]);
            }
            break;
        }
        else
        {
            caixas[escolhaJogador - 1] = 1;
            jogadorAtual = 1 - jogadorAtual;
        }
    }

    printf("O que voce deseja? (selecione 1 ou 2)\n");
    printf("1.jogar novamente\n");
    printf("2.voltar ao menu\n");
    printf("escolha: ");
    scanf("%d", &novaJogada);

    while(novaJogada < 1 || novaJogada > 2)
    {
        printf("escolha invalida, selecione 1 ou 2\n");
        printf("1.jogar novamente\n");
        printf("2.voltar ao menu\n");
        printf("escolha: ");
        scanf("%d", &novaJogada);
    }

    if(novaJogada == 2)
    {
        return;
    }

    } while(novaJogada == 1);

}

//função de mostar jogadores do gousmas war

void exibirJogadores (int gousmas [2][2], int ativas[2][2], char nomes[2][50]) 
{
    for(int i = 0;i < 2; i++)
    {
        printf("jogador %d - %s\n", i + 1, nomes[i]);
        for (int j = 0; j < 2; j++) 
        {
            if(ativas[i][j] == 1)
            {
            printf("gousma %d - %d\n",j + 1, gousmas[i][j]);
            }
            else 
            {
                printf("gousma %d: destruida\n", j + 1);
            }
        }
    }
}
void gousmasWar () 
{
    //variáveis do jogo 3 

    int gousmas[2][2];
    int gousmaAtacante;
    int gousmaAlvo;
    int ativas[2][2];
    int turnoAtual;
    int jogoAtivo = 1;
    char nomes[2][50];
    int açaoJogador;

    //inicialização dos turnos

    srand(time(NULL));
    turnoAtual = rand() % 2;

    //inicialização de arrays 

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++)
        {
            gousmas[i][j] = 1;
            ativas[i][j] = 1;
        }
    }

    //pergunta do nome do jogador 1

    printf("Jogador 1, qual o seu nome?: ");
    scanf("%s", nomes[0]);

    //pergunta nome jogador 2

    printf("jogador 2, qual o seu nome?: ");
    scanf("%s", nomes[1]);

    //inicio do loop

    do{
        exibirJogadores(gousmas,ativas,nomes);
        printf("vez de %s\n", nomes[turnoAtual]);
        printf("escolha a sua ação\n");
        printf("1. Atacar\n");
        printf("2. dividir\n");
        scanf("%d", &açaoJogador);

        //validação da resposta 
        
        while(açaoJogador < 1 || açaoJogador > 2)
        {
            printf("vez de %s\n", nomes[turnoAtual]);
            printf("escolha uma opcao valida (1 0u 2)\n")
            printf("escolha a sua ação\n");
            printf("1. Atacar\n");
            printf("2. dividir\n");
            scanf("%d", &açaoJogador);
        }

        //lógica do ataque

            for (int j = 0; j < 2; j++) 
    {
        if(ativas[turnoAtual][j] == 1)
        {
            printf("gousma %d - %d\n", j + 1, gousmas[turnoAtual][j]);
        }
    }
    
    //gousma atacante

    printf("selecione a gousma atacante\n 1. \n 2.\n");
    scanf("%d", &gousmaAtacante);

    //validação gousma atacante

    while(gousmaAtacante < 1 || gousmaAtacante > 2)
    {
     printf("escolha uma opçao valida (1 ou 2)\n");   
    printf("selecione a gousma atacante\n 1. \n 2.");
    scanf("%d", &gousmaAtacante);
    }

    for (int j = 0; j < 2; j++) 
    {
        if(ativas[1 - turnoAtual][j] == 1)
        {
            printf("gousma %d - furia %d\n", j + 1, gousmas[1 - turnoAtual][j]);
        }
    }

    //gousma atingida

    printf("qual a gousma que vai ser atacada?\n 1. \n 2\n");
    scanf("%d", &gousmaAlvo);

    //validação gousma alvo

    while(gousmaAlvo < 1 || gousmaAlvo > 2)
    {
        printf("escolha uma alternativa valida (1 ou 2)");
        printf("qual a gousma que vai ser atacada?\n 1. \n 2\n");
        scanf("%d", &gousmaAlvo);    
    }

    ///soma da fúria

    gousmas[1 - turnoAtual][gousmaAlvo - 1] += gousmas[turnoAtual][gousmaAtacante - 1];

    //verificação de destruição das gousmas

    for(int j = 0; j < 2; j++)
{
    if(gousmas[1 - turnoAtual][j] > 5)
    {
        ativas[1 - turnoAtual][j] = 0;
    }
}

if(ativas[1 - turnoAtual][0] == 0 && ativas[1 - turnoAtual][1] == 0)
{
    jogoAtivo = 0;
    printf("%s perdeu!\n", nomes[1 - turnoAtual]);
    printf("%s venceu!\n", nomes[turnoAtual]);
}


    } while(jogoAtivo != 0)
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