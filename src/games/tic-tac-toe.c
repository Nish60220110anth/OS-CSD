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

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
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

        if (computerMove()) {
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
