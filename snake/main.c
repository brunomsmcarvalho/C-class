#include <stdio.h>
#include <stdlib.h>
#include <conio.h>   // _kbhit(), _getch()
#include <windows.h> // Sleep, gotoxy
#include <time.h>
#include <stdbool.h>

#define LARGURA 40
#define ALTURA 20
#define TAM_INICIAL 1
#define MAX_CORPO 1000

// Função para mover cursor
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função para esconder cursor
void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

// Função para mostrar cursor
void showCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = TRUE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

// Estrutura para coordenadas
typedef struct {
    int x, y;
} Ponto;

// Variáveis globais
Ponto cobra[MAX_CORPO];
int tamanho = TAM_INICIAL;
int direcao = 3; // 0=cima, 1=baixo, 2=esq, 3=dir
Ponto fruta;
bool gameOver = false;
const char *palavra = "BRUNO";

// Gera fruta em posição válida
void novaFruta() {
    bool dentro;
    do {
        dentro = false;
        fruta.x = rand() % (LARGURA - 2) + 1;
        fruta.y = rand() % (ALTURA - 2) + 1;

        // Garante que não cai dentro da cobra
        for (int i = 0; i < tamanho; i++) {
            if (cobra[i].x == fruta.x && cobra[i].y == fruta.y) {
                dentro = true;
                break;
            }
        }
    } while (dentro);

    gotoxy(fruta.x, fruta.y);
    printf("@");
}

// Inicializa jogo
void iniciar() {
    tamanho = TAM_INICIAL;
    cobra[0].x = LARGURA / 2;
    cobra[0].y = ALTURA / 2;

    // Desenha borda
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < LARGURA; x++) {
            if (y == 0 || y == ALTURA - 1 || x == 0 || x == LARGURA - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    novaFruta();
}

// Atualiza direção com teclado
void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'w': if (direcao != 1) direcao = 0; break;
            case 's': if (direcao != 0) direcao = 1; break;
            case 'a': if (direcao != 3) direcao = 2; break;
            case 'd': if (direcao != 2) direcao = 3; break;
        }
    }
}

// Atualiza lógica do jogo (sem apagar tudo)
void logica() {
    // guarda último segmento (para apagar depois)
    Ponto ultimo = cobra[tamanho - 1];

    // move corpo
    for (int i = tamanho - 1; i > 0; i--) {
        cobra[i] = cobra[i - 1];
    }

    // move cabeça
    switch (direcao) {
        case 0: cobra[0].y--; break;
        case 1: cobra[0].y++; break;
        case 2: cobra[0].x--; break;
        case 3: cobra[0].x++; break;
    }

    // colisão com parede
    if (cobra[0].x <= 0 || cobra[0].x >= LARGURA - 1 ||
        cobra[0].y <= 0 || cobra[0].y >= ALTURA - 1) {
        gameOver = true;
        return;
    }

    // colisão com corpo
    for (int i = 1; i < tamanho; i++) {
        if (cobra[0].x == cobra[i].x && cobra[0].y == cobra[i].y) {
            gameOver = true;
            return;
        }
    }

    // se comeu fruta
    if (cobra[0].x == fruta.x && cobra[0].y == fruta.y) {
        if (tamanho < MAX_CORPO) {
            tamanho++;
            cobra[tamanho - 1] = ultimo; // mantém último segmento
        }
        novaFruta();
    } else {
        // apaga último segmento se não cresceu
        gotoxy(ultimo.x, ultimo.y);
        printf(" ");
    }

    // desenha cobra
    for (int i = 0; i < tamanho; i++) {
        gotoxy(cobra[i].x, cobra[i].y);
        printf("%c", palavra[i % strlen(palavra)]);
    }

    // mostra pontuação
    gotoxy(0, ALTURA);
    printf("Pontos: %d   ", tamanho - TAM_INICIAL);
}

int main() {
    srand(time(NULL));
    hideCursor();
    iniciar();

    while (!gameOver) {
        input();
        logica();
        Sleep(120);
    }

    showCursor();
    gotoxy(0, ALTURA + 1);
    printf("GAME OVER! Pontuação final: %d\n", tamanho - TAM_INICIAL);
    return 0;
}
