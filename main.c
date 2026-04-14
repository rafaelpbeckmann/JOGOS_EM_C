# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>

typedef void (*ImpressorBloco)(void *ctx);

int parseLinhaInteiro(const char *entrada, long *out)
{
    char *fim;
    *out = strtol(entrada, &fim, 10);
    if (fim == entrada) {
        return 0;
    }
    while (*fim != '\0') {
        if (*fim != '\n' && *fim != ' ' && *fim != '\t' && *fim != '\r') {
            return 0;
        }
        fim++;
    }
    return 1;
}

/* 1 ok, 0 formato inválido, -1 EOF. */
int lerUmInteiroDaLinha(long *v)
{
    char buf[64];
    if (fgets(buf, sizeof(buf), stdin) == NULL) {
        return -1;
    }
    if (!parseLinhaInteiro(buf, v)) {
        return 0;
    }
    return 1;
}

int lerInteiroIntervalo(int min, int max)
{
    long v;
    int primeiro = 1;

    for (;;) {
        if (!primeiro) {
            printf("Digite novamente (%d a %d): ", min, max);
        }
        primeiro = 0;

        {
            int r = lerUmInteiroDaLinha(&v);
            if (r == -1) {
                return min;
            }
            if (r == 0) {
                printf("Entrada invalida. Use apenas numeros entre %d e %d.\n", min, max);
                continue;
            }
        }

        if (v >= (long)min && v <= (long)max) {
            return (int)v;
        }
        printf("Opcao invalida. Escolha um numero entre %d e %d.\n", min, max);
    }
}

int lerInteiroIntervaloComBloco(int min, int max, ImpressorBloco bloco, void *ctx)
{
    long v;

    for (;;) {
        bloco(ctx);
        {
            int r = lerUmInteiroDaLinha(&v);
            if (r == -1) {
                return min;
            }
            if (r == 0) {
                printf("Entrada invalida. Use apenas numeros entre %d e %d.\n", min, max);
                continue;
            }
        }

        if (v >= (long)min && v <= (long)max) {
            return (int)v;
        }
        printf("Opcao invalida. Escolha um numero entre %d e %d.\n", min, max);
    }
}

// --- Perguntas e respostas ---

void imprimirPergunta1(void *ctx)
{
    (void)ctx;
    printf("\n============================================================\n");
    printf("                       PERGUNTA 1                           \n");
    printf("============================================================\n");
    printf("qual o maior planeta do sistema solar?\n");
    printf("1. marte\n");
    printf("2. terra\n");
    printf("3. jupiter\n");
    printf("4. venus\n");
    printf("Resposta (1 a 4): ");
}

void imprimirPergunta2(void *ctx)
{
    (void)ctx;
    printf("\n============================================================\n");
    printf("                       PERGUNTA 2                           \n");
    printf("============================================================\n");
    printf("qual e a capital da alemanha?\n");
    printf("1. Belem\n");
    printf("2. Berlim\n");
    printf("3. bruxelas\n");
    printf("4. toquio\n");
    printf("Resposta (1 a 4): ");
}

void imprimirPergunta3(void *ctx)
{
    (void)ctx;
    printf("\n============================================================\n");
    printf("                       PERGUNTA 3                           \n");
    printf("============================================================\n");
    printf("se um anel tem 3 pedras, quantas pedras tem 11 aneis ?\n");
    printf("1. 33\n");
    printf("2. 300\n");
    printf("3. 27\n");
    printf("4. 90\n");
    printf("Resposta (1 a 4): ");
}

void imprimirPergunta4(void *ctx)
{
    (void)ctx;
    printf("\n============================================================\n");
    printf("                       PERGUNTA 4                           \n");
    printf("============================================================\n");
    printf("A queda do muro de Berlim foi um marco de qual evento histórico?\n");
    printf("1. Guerra da viatna\n");
    printf("2. Guerra da Coreia\n");
    printf("3. Invasao da normandia\n");
    printf("4. Guerra fria\n");
    printf("Resposta (1 a 4): ");
}

void imprimirPergunta5(void *ctx)
{
    (void)ctx;
    printf("\n============================================================\n");
    printf("                       PERGUNTA 5                           \n");
    printf("============================================================\n");
    printf("como e chamado o ponto mais distante entre continentes?\n");
    printf("1. triangulo das bermudas\n");
    printf("2. ponto nemo\n");
    printf("3. mar do pacifico\n");
    printf("4. polo norte\n");
    printf("Resposta (1 a 4): ");
}

void imprimirBlocoFimRodadaPerguntas(void *ctx)
{
    (void)ctx;
    printf("\n============================================================\n");
    printf("                     FIM DA RODADA                          \n");
    printf("============================================================\n");
    printf("Sequencia correta: 3, 2, 1, 4, 2\n");
    printf("------------------------------------------------------------\n");
    printf("O que voce deseja?\n");
    printf("1. Jogar novamente\n");
    printf("2. Ir para o menu\n");
    printf("Escolha: ");
}

//funções dos jogos 

void perguntasErespostas (void)
{
    printf("\n============================================================\n");
    printf("                 PERGUNTAS E RESPOSTAS                      \n");
    printf("============================================================\n");
    printf("Responda as perguntas escolhendo a alternativa correta.\n");
    printf("------------------------------------------------------------\n");

    int resposta;
    int novaJogada = 0;

    do {
        resposta = lerInteiroIntervaloComBloco(1, 4, imprimirPergunta1, NULL);

        if (resposta == 3) {
            printf("Resultado: parabens! voce acertou!\n");
        } else {
            printf("Resultado: escolha errada!\n");
            printf("Resposta correta: 3 (jupiter)\n");
        }

        resposta = lerInteiroIntervaloComBloco(1, 4, imprimirPergunta2, NULL);

        if (resposta == 2) {
            printf("Resultado: parabens! voce acertou!\n");
        } else {
            printf("Resultado: escolha errada!\n");
            printf("Resposta correta: 2. Berlim\n");
        }

        resposta = lerInteiroIntervaloComBloco(1, 4, imprimirPergunta3, NULL);

        if (resposta == 1) {
            printf("Resultado: parabens! voce acertou!\n");
        } else {
            printf("Resultado: escolha errada!\n");
            printf("Resposta correta: 1. 33\n");
        }

        resposta = lerInteiroIntervaloComBloco(1, 4, imprimirPergunta4, NULL);

        if (resposta == 4) {
            printf("Resultado: parabens! voce acertou!\n");
        } else {
            printf("Resultado: escolha errada!\n");
        }

        resposta = lerInteiroIntervaloComBloco(1, 4, imprimirPergunta5, NULL);

        if (resposta == 2) {
            printf("Resultado: parabens! voce acertou!\n");
        } else {
            printf("Resultado: escolha errada!\n");
        }

        novaJogada = lerInteiroIntervaloComBloco(1, 2, imprimirBlocoFimRodadaPerguntas, NULL);

        if (novaJogada == 2) {
            printf("\nObrigado por jogar!\n");
            return;
        }
    } while (novaJogada == 1);
}

// --- Cobra na caixa ---

typedef struct {
    char (*nomes)[20];
    int numJogador;
} CobraNomeEscolha;

void cobra_imprimirEscolhaNomeJogador(void *ctx)
{
    CobraNomeEscolha *c = (CobraNomeEscolha *)ctx;
    printf("\n============================================================\n");
    printf("                     COBRA NA CAIXA                         \n");
    printf("============================================================\n");
    printf("Escolha os nomes dos jogadores para iniciar.\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s\n", i + 1, c->nomes[i]);
    }
    printf("------------------------------------------------------------\n");
    printf("Jogador %d, qual o numero do seu nome?\n", c->numJogador);
    printf("Escolha: ");
}

typedef struct {
    char (*nomes)[20];
    int idNome1;
    int idNome2;
    int jogadorAtual;
    int caixas[5];
} CobraTelaTurno;

void cobra_imprimirGradeCaixas(const int caixas[5])
{
    const int larguraTela = 80;
    const int larguraCaixa = 11;
    const int espacoEntre = 4;

    int recuoPrimeiraLinha = (larguraTela - ((2 * larguraCaixa) + espacoEntre)) / 2;
    int recuoSegundaLinha = (larguraTela - ((3 * larguraCaixa) + (2 * espacoEntre))) / 2;

    if (recuoPrimeiraLinha < 0) {
        recuoPrimeiraLinha = 0;
    }
    if (recuoSegundaLinha < 0) {
        recuoSegundaLinha = 0;
    }

    for (int linha = 0; linha < 2; linha++) {
        int inicio = (linha == 0) ? 0 : 2;
        int quantidade = (linha == 0) ? 2 : 3;
        int recuo = (linha == 0) ? recuoPrimeiraLinha : recuoSegundaLinha;

        for (int i = 0; i < recuo; i++) {
            printf(" ");
        }
        for (int i = 0; i < quantidade; i++) {
            printf(" _________ ");
            if (i < quantidade - 1) {
                for (int j = 0; j < espacoEntre; j++) {
                    printf(" ");
                }
            }
        }
        printf("\n");

        for (int i = 0; i < recuo; i++) {
            printf(" ");
        }
        for (int i = 0; i < quantidade; i++) {
            printf("|         |");
            if (i < quantidade - 1) {
                for (int j = 0; j < espacoEntre; j++) {
                    printf(" ");
                }
            }
        }
        printf("\n");

        for (int i = 0; i < recuo; i++) {
            printf(" ");
        }
        for (int i = 0; i < quantidade; i++) {
            int indiceCaixa = inicio + i;
            char conteudo = (caixas[indiceCaixa] == 1) ? 'X' : (char)('1' + indiceCaixa);
            printf("|    %c    |", conteudo);
            if (i < quantidade - 1) {
                for (int j = 0; j < espacoEntre; j++) {
                    printf(" ");
                }
            }
        }
        printf("\n");

        for (int i = 0; i < recuo; i++) {
            printf(" ");
        }
        for (int i = 0; i < quantidade; i++) {
            printf("|_________|");
            if (i < quantidade - 1) {
                for (int j = 0; j < espacoEntre; j++) {
                    printf(" ");
                }
            }
        }
        printf("\n");

        for (int i = 0; i < recuo; i++) {
            printf(" ");
        }
        for (int i = 0; i < quantidade; i++) {
            int numeroCaixa = inicio + i + 1;
            printf("     %d     ", numeroCaixa);
            if (i < quantidade - 1) {
                for (int j = 0; j < espacoEntre; j++) {
                    printf(" ");
                }
            }
        }
        printf("\n");

        if (linha == 0) {
            printf("\n");
        }
    }
}

void cobra_imprimirTelaTurno(void *ctx)
{
    CobraTelaTurno *c = (CobraTelaTurno *)ctx;
    if (c->jogadorAtual == 0) {
        printf("\n============================================================\n");
        printf("Vez de %s\n", c->nomes[c->idNome1]);
        printf("============================================================\n");
    } else {
        printf("\n============================================================\n");
        printf("Vez de %s\n", c->nomes[c->idNome2]);
        printf("============================================================\n");
    }
    printf("Escolha uma caixa disponivel.\n");
    printf("------------------------------------------------------------\n");
    cobra_imprimirGradeCaixas(c->caixas);
    printf("\nEscolha a sua caixa: ");
}

void cobra_imprimirJogarNovamente(void *ctx)
{
    (void)ctx;
    printf("\n------------------------------------------------------------\n");
    printf("O que voce deseja?\n");
    printf("1. Jogar novamente\n");
    printf("2. Voltar ao menu\n");
    printf("Escolha: ");
}

void cobraNaCaixa (void)
{
    int escolhaJogador;
    int posicaoCobra;
    int posicaoBotao;
    int caixas[5];
    char nomes[7][20] = {"rameses","nefertiti","tutancamon","cleopatra","anubis","horus","osiris"};
    int idNome1;
    int idNome2;
    int novaJogada;
    CobraNomeEscolha nomeEscolha;
    CobraTelaTurno telaTurno;

    nomeEscolha.nomes = nomes;
    nomeEscolha.numJogador = 1;
    escolhaJogador = lerInteiroIntervaloComBloco(1, 7, cobra_imprimirEscolhaNomeJogador, &nomeEscolha);
    idNome1 = escolhaJogador - 1;

    nomeEscolha.numJogador = 2;
    escolhaJogador = lerInteiroIntervaloComBloco(1, 7, cobra_imprimirEscolhaNomeJogador, &nomeEscolha);
    idNome2 = escolhaJogador - 1;

    do {
        int jogadorAtual = rand() % 2;
        posicaoBotao = (rand() % 5) + 1;

        do {
            posicaoCobra = (rand() % 5) + 1;
        } while (posicaoCobra == posicaoBotao);

        for (int i = 0; i < 5; i++) {
            caixas[i] = 0;
        }

        while (1) {
            telaTurno.nomes = nomes;
            telaTurno.idNome1 = idNome1;
            telaTurno.idNome2 = idNome2;
            telaTurno.jogadorAtual = jogadorAtual;
            memcpy(telaTurno.caixas, caixas, sizeof caixas);

            for (;;) {
                escolhaJogador = lerInteiroIntervaloComBloco(1, 5, cobra_imprimirTelaTurno, &telaTurno);
                if (escolhaJogador >= 1 && escolhaJogador <= 5 && caixas[escolhaJogador - 1] == 1) {
                    printf("\nEssa caixa ja foi aberta, escolha outra.\n");
                    continue;
                }
                break;
            }

            if (escolhaJogador == posicaoBotao) {
                if (jogadorAtual == 0) {
                    printf("\n============================================================\n");
                    printf("%s venceu! Encontrou o botao!\n", nomes[idNome1]);
                    printf("%s perdeu.\n", nomes[idNome2]);
                    printf("============================================================\n");
                } else {
                    printf("\n============================================================\n");
                    printf("%s venceu! Encontrou o botao!\n", nomes[idNome2]);
                    printf("%s perdeu.\n", nomes[idNome1]);
                    printf("============================================================\n");
                }
                break;
            }
            if (escolhaJogador == posicaoCobra) {
                if (jogadorAtual == 0) {
                    printf("\n============================================================\n");
                    printf("%s perdeu! A cobra estava nessa caixa!\n", nomes[idNome1]);
                    printf("%s venceu!\n", nomes[idNome2]);
                    printf("============================================================\n");
                } else {
                    printf("\n============================================================\n");
                    printf("%s perdeu! A cobra estava nessa caixa!\n", nomes[idNome2]);
                    printf("%s venceu!\n", nomes[idNome1]);
                    printf("============================================================\n");
                }
                break;
            }

            caixas[escolhaJogador - 1] = 1;
            jogadorAtual = 1 - jogadorAtual;
        }

        novaJogada = lerInteiroIntervaloComBloco(1, 2, cobra_imprimirJogarNovamente, NULL);

        if (novaJogada == 2) {
            return;
        }
    } while (novaJogada == 1);
}

//função de mostar jogadores do gousmas war

void exibirJogadores (int gousmas [2][2], int ativas[2][2], char nomes[2][50])
{
    for (int i = 0; i < 2; i++) {
        printf("\nJogador %d - %s\n", i + 1, nomes[i]);
        for (int j = 0; j < 2; j++) {
            if (ativas[i][j] == 1) {
                printf("  Gousma %d - %d\n", j + 1, gousmas[i][j]);
            } else {
                printf("  Gousma %d: destruida\n", j + 1);
            }
        }
    }
}

typedef struct {
    int gousmas[2][2];
    int ativas[2][2];
    char nomes[2][50];
    int turno;
} GousmasCtx;

void gousmas_imprimirBlocoAcao(void *ctx)
{
    GousmasCtx *g = (GousmasCtx *)ctx;
    printf("\n------------------------------------------------------------\n");
    printf("                    STATUS DA PARTIDA                       \n");
    printf("------------------------------------------------------------\n");
    exibirJogadores(g->gousmas, g->ativas, g->nomes);

    printf("\n============================================================\n");
    printf("Vez de %s\n", g->nomes[g->turno]);
    printf("============================================================\n");
    printf("Escolha a sua acao:\n");
    printf("1. Atacar\n");
    printf("2. Dividir\n");
    printf("Escolha: ");
}

void gousmas_imprimirPerguntaAtacante(void *ctx)
{
    (void)ctx;
    printf("\nSelecione a sua gousma atacante (1 ou 2): ");
}

void gousmas_imprimirPerguntaAlvo(void *ctx)
{
    (void)ctx;
    printf("Qual gousma inimiga vai ser atacada? (1 ou 2): ");
}

void gousmas_imprimirPerguntaDoadora(void *ctx)
{
    (void)ctx;
    printf("\nEscolha a gousma doadora (1 ou 2): ");
}

void gousmasWar(void)
{
    int gousmas[2][2];
    int gousmaAtacante;
    int gousmaAlvo;
    int ativas[2][2];
    int turnoAtual;
    int jogoAtivo = 1;
    char nomes[2][50];
    int acaoJogador;
    GousmasCtx gw;

    srand((unsigned)time(NULL));
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
    scanf("%49s", nomes[0]);
    printf("Jogador 2, qual o seu nome?: ");
    scanf("%49s", nomes[1]);

    do {
        memcpy(gw.gousmas, gousmas, sizeof gousmas);
        memcpy(gw.ativas, ativas, sizeof ativas);
        memcpy(gw.nomes, nomes, sizeof nomes);
        gw.turno = turnoAtual;

        acaoJogador = lerInteiroIntervaloComBloco(1, 2, gousmas_imprimirBlocoAcao, &gw);

        if (acaoJogador == 1) {
            for (;;) {
                gousmaAtacante = lerInteiroIntervaloComBloco(1, 2, gousmas_imprimirPerguntaAtacante, NULL);
                if (gousmaAtacante >= 1 && gousmaAtacante <= 2
                    && ativas[turnoAtual][gousmaAtacante - 1] == 1) {
                    break;
                }
                printf("Invalido! Escolha uma gousma sua que esteja ativa.\n");
            }

            for (;;) {
                gousmaAlvo = lerInteiroIntervaloComBloco(1, 2, gousmas_imprimirPerguntaAlvo, NULL);
                if (gousmaAlvo >= 1 && gousmaAlvo <= 2
                    && ativas[1 - turnoAtual][gousmaAlvo - 1] == 1) {
                    break;
                }
                printf("Alvo invalido! Escolha uma gousma ativa do adversario.\n");
            }

            gousmas[1 - turnoAtual][gousmaAlvo - 1] += gousmas[turnoAtual][gousmaAtacante - 1];

        } else if (acaoJogador == 2) {
            int pontos, gousmaDoadora, gousmaReceptora;

            for (;;) {
                gousmaDoadora = lerInteiroIntervaloComBloco(1, 2, gousmas_imprimirPerguntaDoadora, NULL);
                if (gousmaDoadora >= 1 && gousmaDoadora <= 2
                    && ativas[turnoAtual][gousmaDoadora - 1] == 1
                    && gousmas[turnoAtual][gousmaDoadora - 1] > 1) {
                    break;
                }
                printf("Invalido! Escolha uma gousma ativa com furia maior que 1.\n");
            }

            if (gousmaDoadora == 1) {
                gousmaReceptora = 2;
            } else {
                gousmaReceptora = 1;
            }

            {
                int maxPontos = gousmas[turnoAtual][gousmaDoadora - 1] - 1;
                printf("Quantos pontos transferir? (Maximo %d): ", maxPontos);
                pontos = lerInteiroIntervalo(1, maxPontos);
                gousmas[turnoAtual][gousmaDoadora - 1] -= pontos;
                gousmas[turnoAtual][gousmaReceptora - 1] += pontos;

                if (ativas[turnoAtual][gousmaReceptora - 1] == 0) {
                    ativas[turnoAtual][gousmaReceptora - 1] = 1;
                    printf("\nA Gousma %d reviveu!\n", gousmaReceptora);
                }
            }
        }

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

        if (ativas[1 - turnoAtual][0] == 0 && ativas[1 - turnoAtual][1] == 0) {
            exibirJogadores(gousmas, ativas, nomes);
            printf("\n============================================================\n");
            printf("PARABENS! %s VENCEU O JOGO!\n", nomes[turnoAtual]);
            printf("============================================================\n");
            jogoAtivo = 0;
        } else {
            turnoAtual = 1 - turnoAtual;
        }

    } while (jogoAtivo != 0);
}

int lerOpcaoMenu (void)
{
    char entrada[64];
    long opcaoLida;

    if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
        return -1;
    }

    if (!parseLinhaInteiro(entrada, &opcaoLida)) {
        return -1;
    }

    if (opcaoLida < 1 || opcaoLida > 4) {
        return -1;
    }

    return (int)opcaoLida;
}

int main (void)
{
    int opcao;

    do {
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

        while (opcao < 1 || opcao > 4) {
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

        switch (opcao) {
            case 1: perguntasErespostas(); break;
            case 2: cobraNaCaixa(); break;
            case 3: gousmasWar(); break;
            case 4: printf("saindo do menu"); break;
        }

    } while (opcao != 4);

    return 0;
}
