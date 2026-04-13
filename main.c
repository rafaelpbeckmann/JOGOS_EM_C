# include <stdio.h>
# include <stdlib.h>
# include <time.h>

//funções dos jogos 

void perguntasErespostas () 
{
    printf("\n============================================================\n");
    printf("                 PERGUNTAS E RESPOSTAS                      \n");
    printf("============================================================\n");
    printf("Responda as perguntas escolhendo a alternativa correta.\n");
    printf("------------------------------------------------------------\n");

    //variaveis do jogo 1

    int resposta;
    int novaResposta;
    int novaJogada = 0;
    int acertos[5];

    //pergunta 1

    do 
    {
        printf("\n============================================================\n");
        printf("                       PERGUNTA 1                           \n");
        printf("============================================================\n");
        printf("qual o maior planeta do sistema solar?\n");
        printf("1. marte\n");
        printf("2. terra\n");
        printf("3. jupiter\n");
        printf("4. venus\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);

        // condição de resposta 1

        while (resposta < 1 || resposta > 4) 
        {
        printf("\nOpcao invalida. Escolha uma alternativa valida (1 a 4).\n");
        printf("------------------------------------------------------------\n");
        printf("qual o maior planeta do sistema solar?\n");
        printf("1. marte\n");
        printf("2. terra\n");
        printf("3. jupiter\n");
        printf("4. venus\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);
        }

        //resultado 1

        if (resposta == 3) 
        {
            printf("Resultado: parabens! voce acertou!\n");
            acertos[0] = 1;
        }

        else 
        {
            printf("Resultado: escolha errada!\n");
            printf("Resposta correta: 3 (jupiter)\n");
            acertos[0] = 0;
        }

        //pergunta2

        printf("\n============================================================\n");
        printf("                       PERGUNTA 2                           \n");
        printf("============================================================\n");
        printf("qual e a capital da alemanha?\n");
        printf("1. Belem\n");
        printf("2. Berlim\n");
        printf("3. bruxelas\n");
        printf("4. toquio\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);
        
        //condiçao de resposta 2

        while(resposta < 1 || resposta > 4) 
        {
        printf("\nOpcao invalida. Escolha uma alternativa valida (1 a 4).\n");
        printf("------------------------------------------------------------\n");
        printf("qual e a capital da alemanha?\n");
        printf("1. Belem\n");
        printf("2. Berlim\n");
        printf("3. bruxelas\n");
        printf("4. toquio\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);
        }

        //resultado  2

        if(resposta == 2) 
        {
            printf("Resultado: parabens! voce acertou!\n");
            acertos[1] = 1;
        }

        else
        {
            printf("Resultado: escolha errada!\n");
            printf("Resposta correta: 2. Berlim\n");
            acertos[1] = 0;
        }

        //pergunta 3

        printf("\n============================================================\n");
        printf("                       PERGUNTA 3                           \n");
        printf("============================================================\n");
        printf("se um anel tem 3 pedras, quantas pedras tem 11 aneis ?\n");
        printf("1. 33\n");
        printf("2. 300\n");
        printf("3. 27\n");
        printf("4. 90\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);

        //condição de resposta 3

        while(resposta < 1 || resposta > 4) 
        {
           printf("\nOpcao invalida. Escolha uma alternativa valida (1 a 4).\n");
           printf("------------------------------------------------------------\n");
           printf("se um anel tem 3 pedras, quantas pedras tem 11 aneis ?\n");
           printf("1. 33\n");
           printf("2. 300\n");
           printf("3. 27\n");
           printf("4. 90\n");
           printf("Resposta (1 a 4): ");
           scanf("%d", &resposta);
        }

        //resultado 3

        if(resposta == 1) 
        {
            printf("Resultado: parabens! voce acertou!\n");
            acertos[2] = 1;
        }

        else 
        {
            printf("Resultado: escolha errada!\n");
            printf("Resposta correta: 1. clube do remo\n");
            acertos[2] = 0;
        }

        //pergunta 4

        printf("\n============================================================\n");
        printf("                       PERGUNTA 4                           \n");
        printf("============================================================\n");
        printf("A queda do muro de Berlim foi um marco de qual evento histórico?\n");
        printf("1. Guerra da viatna\n");
        printf("2. Guerra da Coreia\n");
        printf("3. Invasao da normandia\n");
        printf("4. Guerra fria\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);

        //validação da resposta 4

        while(resposta < 1 || resposta > 4)
        {
            printf("\nOpcao invalida. Escolha uma alternativa valida (1 a 4).\n");
            printf("------------------------------------------------------------\n");
            printf("A queda do muro de Berlim foi um marco de qual evento histórico?\n");
            printf("1. Guerra da viatna\n");
            printf("2. Guerra da Coreia\n");
            printf("3. Invasao da normandia\n");
            printf("4. Guerra fria\n");
            printf("Resposta (1 a 4): ");
            scanf("%d", &resposta);
        }

        //resultado 4

        if(resposta == 4)
        {
            printf("Resultado: parabens! voce acertou!\n");
            acertos[3] = 1;    
        }

        else
        {
            printf("Resultado: escolha errada!\n");
            acertos[3] = 0;
        }

        //pergunta 5

        printf("\n============================================================\n");
        printf("                       PERGUNTA 5                           \n");
        printf("============================================================\n");
        printf("como e chamado o ponto mais distante entre continentes?\n");
        printf("1. triangulo das bermudas\n");
        printf("2. ponto nemo\n");
        printf("3. mar do pacifico\n");
        printf("4. polo norte\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);

        //validação da pergunta 5

        while(resposta < 1 || resposta > 4)
        {
        printf("\nOpcao invalida. Escolha uma alternativa valida (1 a 4).\n");
        printf("------------------------------------------------------------\n");
        printf("como e chamado o ponto mais distante entre continentes?\n");
        printf("1. triangulo das bermudas\n");
        printf("2. ponto nemo\n");
        printf("3. mar do pacifico\n");
        printf("4. polo norte\n");
        printf("Resposta (1 a 4): ");
        scanf("%d", &resposta);
        }

        if(resposta == 2) 
        {
            printf("Resultado: parabens! voce acertou!\n");
            acertos[4] = 1;
        }

        else
        {
            printf("Resultado: escolha errada!\n");
            acertos[4] = 0;
        }

        //encerramento do ciclo das perguntas

        //mostrar resultados

        printf("\n============================================================\n");
        printf("                     FIM DA RODADA                          \n");
        printf("============================================================\n");
        printf("Sequencia correta: 3, 2, 1, 4, 2\n");

        //pergunta ao usuario

        printf("------------------------------------------------------------\n");
        printf("O que voce deseja?\n");
        printf("1. Jogar novamente\n");
        printf("2. Ir para o menu\n");
        printf("Escolha: ");
        scanf("%d", &novaJogada);

        //validaçao da escolha

        while(novaJogada < 1 || novaJogada > 2)
        {
        printf("\nOpcao invalida. Selecione 1 ou 2.\n");
        printf("1. Jogar novamente\n");
        printf("2. Ir para o menu\n");
        printf("Escolha: ");
        scanf("%d", &novaJogada);
        }

        if (novaJogada == 2)
        {
            printf("\nObrigado por jogar!\n");
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

    printf("\n============================================================\n");
    printf("                     COBRA NA CAIXA                         \n");
    printf("============================================================\n");
    printf("Escolha os nomes dos jogadores para iniciar.\n");
    printf("------------------------------------------------------------\n");

    for(int i = 0 ; i < 7; i++)
    {
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    //resposta do jogador 1
    
    printf("------------------------------------------------------------\n");
    printf("Jogador 1, qual o numero do seu nome?\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    //validação de resposta do jogador 1

    while(escolhaJogador < 1 || escolhaJogador > 7)
    {
    printf("\nOpcao invalida, tente novamente.\n");
    printf("Jogador 1, qual o numero do seu nome?\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);
    }
    idNome1 = escolhaJogador - 1;

    //resposta do jogador 2

    printf("\nJogador 2, qual o numero do seu nome?\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    //validação de resposta do jogador 2

    while(escolhaJogador < 1 || escolhaJogador > 7)
    {
        printf("\nOpcao invalida, tente novamente.\n");
        printf("Jogador 2, qual o numero do seu nome?\n");
        printf("Escolha: ");
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
            printf("\n============================================================\n");
            printf("Vez de %s\n", nomes[idNome1]);
            printf("============================================================\n");
        }
        else
        {
            printf("\n============================================================\n");
            printf("Vez de %s\n", nomes[idNome2]);
            printf("============================================================\n");
        }

        printf("Escolha uma caixa disponivel.\n");
        printf("------------------------------------------------------------\n");
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
        printf("\nEscolha a sua caixa: ");
        scanf("%d", &escolhaJogador);

        //validação de resposta

        while(escolhaJogador < 1 || escolhaJogador > 5 || caixas[escolhaJogador - 1] == 1) 
        {
        if(escolhaJogador >= 1 && escolhaJogador <= 5 && caixas[escolhaJogador - 1] == 1)
        {
            printf("\nEssa caixa ja foi aberta, escolha outra.\n");
        }
        else
        {
        printf("\nEscolha invalida. Use um numero de caixa valido.\n");
        }
        printf("Escolha uma caixa disponivel.\n");
        printf("------------------------------------------------------------\n");
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
        printf("\nEscolha a sua caixa: ");
        scanf("%d", &escolhaJogador);
        }

        if(escolhaJogador == posicaoBotao)
        {
            if(jogadorAtual == 0)
            {
                printf("\n============================================================\n");
                printf("%s venceu! Encontrou o botao!\n", nomes[idNome1]);
                printf("%s perdeu.\n", nomes[idNome2]);
                printf("============================================================\n");
            }
            else
            {
                printf("\n============================================================\n");
                printf("%s venceu! Encontrou o botao!\n", nomes[idNome2]);
                printf("%s perdeu.\n", nomes[idNome1]);
                printf("============================================================\n");
            }
            break;
        }
        else if(escolhaJogador == posicaoCobra)
        {
            if(jogadorAtual == 0)
            {
                printf("\n============================================================\n");
                printf("%s perdeu! A cobra estava nessa caixa!\n", nomes[idNome1]);
                printf("%s venceu!\n", nomes[idNome2]);
                printf("============================================================\n");
            }
            else
            {
                printf("\n============================================================\n");
                printf("%s perdeu! A cobra estava nessa caixa!\n", nomes[idNome2]);
                printf("%s venceu!\n", nomes[idNome1]);
                printf("============================================================\n");
            }
            break;
        }
        else
        {
            caixas[escolhaJogador - 1] = 1;
            jogadorAtual = 1 - jogadorAtual;
        }
    }

    printf("\n------------------------------------------------------------\n");
    printf("O que voce deseja?\n");
    printf("1. Jogar novamente\n");
    printf("2. Voltar ao menu\n");
    printf("Escolha: ");
    scanf("%d", &novaJogada);

    while(novaJogada < 1 || novaJogada > 2)
    {
        printf("\nOpcao invalida, selecione 1 ou 2.\n");
        printf("1. Jogar novamente\n");
        printf("2. Voltar ao menu\n");
        printf("Escolha: ");
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
        printf("\nJogador %d - %s\n", i + 1, nomes[i]);
        for (int j = 0; j < 2; j++) 
        {
            if(ativas[i][j] == 1)
            {
            printf("  Gousma %d - %d\n",j + 1, gousmas[i][j]);
            }
            else 
            {
                printf("  Gousma %d: destruida\n", j + 1);
            }
        }
    }
}
void gousmasWar() {
    
    // Variáveis do jogo

    int gousmas[2][2];
    int gousmaAtacante;
    int gousmaAlvo;
    int ativas[2][2];
    int turnoAtual;
    int jogoAtivo = 1;
    char nomes[2][50];
    int acaoJogador;

    // Inicialização

    srand(time(NULL));
    turnoAtual = rand() % 2;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            gousmas[i][j] = 1;
            ativas[i][j] = 1;
        }
    }

    printf("\n============================================================\n");
    printf("                       GOUSMAS WAR                          \n");
    printf("============================================================\n");
    printf("Jogador 1, qual o seu nome?: ");
    scanf("%s", nomes[0]);
    printf("Jogador 2, qual o seu nome?: ");
    scanf("%s", nomes[1]);

    // Início do loop principal
    do {
        // Mostra o status através da função

        printf("\n------------------------------------------------------------\n");
        printf("                    STATUS DA PARTIDA                       \n");
        printf("------------------------------------------------------------\n");
        exibirJogadores(gousmas, ativas, nomes);
        
        printf("\n============================================================\n");
        printf("Vez de %s\n", nomes[turnoAtual]);
        printf("============================================================\n");
        printf("Escolha a sua acao:\n");
        printf("1. Atacar\n");
        printf("2. Dividir\n");
        printf("Escolha: ");
        scanf("%d", &acaoJogador);

        // Validação da ação

        while (acaoJogador < 1 || acaoJogador > 2) {
            printf("Opcao invalida. Escolha 1 ou 2: ");
            scanf("%d", &acaoJogador);
        }

        if (acaoJogador == 1) { 
            
            //ataque
            
            // Validação da Gousma atacante

            do {
                printf("\nSelecione a sua gousma atacante (1 ou 2): ");
                scanf("%d", &gousmaAtacante);
                
                if (gousmaAtacante < 1 || gousmaAtacante > 2 || ativas[turnoAtual][gousmaAtacante - 1] == 0) {
                    printf("Invalido! Escolha uma gousma sua que esteja ativa.\n");
                } else {
                    break;
                }
            } while (1);

            // Validação da Gousma alvo

            do {
                printf("Qual gousma inimiga vai ser atacada? (1 ou 2): ");
                scanf("%d", &gousmaAlvo);
                
                if (gousmaAlvo < 1 || gousmaAlvo > 2 || ativas[1 - turnoAtual][gousmaAlvo - 1] == 0) {
                    printf("Alvo invalido! Escolha uma gousma ativa do adversario.\n");
                } else {
                    break;
                }
            } while (1);

            // Soma da fúria

            gousmas[1 - turnoAtual][gousmaAlvo - 1] += gousmas[turnoAtual][gousmaAtacante - 1];

        } else if (acaoJogador == 2) {
            // lógica da divisão
            int pontos, gousmaDoadora, gousmaReceptora;
            
            // escolhe quem doa
            printf("\nEscolha a gousma doadora (1 ou 2): ");
            scanf("%d", &gousmaDoadora);
            
            // valida se a doadora pode dar pontos

            while(gousmaDoadora < 1 || gousmaDoadora > 2 || ativas[turnoAtual][gousmaDoadora - 1] == 0 || gousmas[turnoAtual][gousmaDoadora - 1] <= 1) {
                printf("Invalido! Escolha uma gousma ativa com furia maior que 1: ");
                scanf("%d", &gousmaDoadora);
            }

            // a receptora é sempre a outra gousma do mesmo jogador

            if (gousmaDoadora == 1) {
                gousmaReceptora = 2;
            } else {
                gousmaReceptora = 1;
            }

            printf("Quantos pontos transferir? (Maximo %d): ", gousmas[turnoAtual][gousmaDoadora - 1] - 1);
            scanf("%d", &pontos);

            // verifica se os pontos sao validos antes de transferir

            if (pontos >= 1 && pontos < gousmas[turnoAtual][gousmaDoadora - 1]) {
                gousmas[turnoAtual][gousmaDoadora - 1] -= pontos;
                gousmas[turnoAtual][gousmaReceptora - 1] += pontos;

                // Regra de reviver: se a outra estava morta, volta pro jogo

                if (ativas[turnoAtual][gousmaReceptora - 1] == 0) {
                    ativas[turnoAtual][gousmaReceptora - 1] = 1;
                    printf("\nA Gousma %d reviveu!\n", gousmaReceptora);
                }
            } else {
                printf("Quantidade de pontos invalida!\n");
            }
        }

        // Verificação de destruição (> 5)

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (gousmas[i][j] > 5 && ativas[i][j] == 1) {
                    printf("\n============================================================\n");
                    printf("!!! Gousma %d de %s explodiu !!!\n", j + 1, nomes[i]);
                    printf("============================================================\n");
                    ativas[i][j] = 0;
                    gousmas[i][j] = 0;
                }
            }
        }

        // Verificação de vitória 

        if (ativas[1 - turnoAtual][0] == 0 && ativas[1 - turnoAtual][1] == 0) {
            exibirJogadores(gousmas, ativas, nomes);
            printf("\n============================================================\n");
            printf("PARABENS! %s VENCEU O JOGO!\n", nomes[turnoAtual]);
            printf("============================================================\n");
            jogoAtivo = 0;
        } else {
            
            //inversão do turno
            
            turnoAtual = 1 - turnoAtual;
        }

    } while (jogoAtivo != 0);
}

int lerOpcaoMenu() 
{
    char entrada[64];
    char *fimNumero;
    long opcaoLida;

    if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
        return -1;
    }

    opcaoLida = strtol(entrada, &fimNumero, 10);

    if (fimNumero == entrada) {
        return -1;
    }

    while (*fimNumero != '\0') {
        if (*fimNumero != '\n' && *fimNumero != ' ' && *fimNumero != '\t' && *fimNumero != '\r') {
            return -1;
        }

        fimNumero++;
    }

    if (opcaoLida < 1 || opcaoLida > 4) {
        return -1;
    }

    return (int)opcaoLida;
}

int main () 
{
    //variaveis menu

    int opcao;

    do
    {

        //exibição do menu

        printf("\n============================================================\n");
        printf("                      JOGOS EM C                            \n");
        printf("============================================================\n");
        printf("                    MENU PRINCIPAL                          \n");
        printf("------------------------------------------------------------\n");
        printf("  1. Perguntas e respostas\n");
        printf("  2. Cobra na caixa\n");
        printf("  3. Gousmas War\n");
        printf("  4. Sair\n");
        printf("------------------------------------------------------------\n");
        printf("Selecione a sua opcao: ");
        opcao = lerOpcaoMenu();
        
        //caso de resposta errada

        while (opcao < 1 || opcao > 4)
        {
            printf("\nOpcao invalida, selecione uma das opcoes abaixo.\n");
            printf("============================================================\n");
            printf("                      JOGOS EM C                            \n");
            printf("============================================================\n");
            printf("                    MENU PRINCIPAL                          \n");
            printf("------------------------------------------------------------\n");
            printf("  1. Perguntas e respostas\n");
            printf("  2. Cobra na caixa\n");
            printf("  3. Gousmas War\n");
            printf("  4. Sair\n");
            printf("------------------------------------------------------------\n");
            printf("Selecione a sua opcao: ");
            opcao = lerOpcaoMenu();
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