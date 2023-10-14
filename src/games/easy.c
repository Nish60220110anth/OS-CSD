#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time(NULL));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}
