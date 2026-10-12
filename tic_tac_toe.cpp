#include <iostream>
#include <limits>
using namespace std;

void displayBoard(const char board[3][3]) {
    cout << "\n";
    for (int row = 0; row < 3; row++) {
        cout << " ";
        for (int col = 0; col < 3; col++) {
            cout << board[row][col];
            if (col < 2) cout << " | ";
        }
        cout << "\n";
        if (row < 2) cout << "---+---+---\n";
    }
    cout << "\n";
}

bool checkWin(const char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

bool boardFull(const char board[3][3]) {
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (board[row][col] != 'X' && board[row][col] != 'O')
                return false;
    return true;
}

void playGame() {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    char currentPlayer = 'X';
    bool gameOver = false;

    cout << "\n=== TIC TAC TOE ===\n";
    cout << "Choose a cell by entering its number (1-9).\n";

    while (!gameOver) {
        displayBoard(board);
        cout << "Player " << currentPlayer << ", enter a cell number (1-9): ";

        int choice;
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice < 1 || choice > 9) {
            cout << "Please choose a number from 1 to 9.\n";
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "That cell is already occupied. Try another one.\n";
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Congratulations! Player " << currentPlayer << " wins!\n";
            gameOver = true;
        } else if (boardFull(board)) {
            displayBoard(board);
            cout << "It's a draw!\n";
            gameOver = true;
        } else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
}

int main() {
    char replay;

    do {
        playGame();
        cout << "\nWould you like to play again? (Y/N): ";
        cin >> replay;
        while (replay != 'Y' && replay != 'y' && replay != 'N' && replay != 'n') {
            cout << "Please enter Y or N: ";
            cin >> replay;
        }
    } while (replay == 'Y' || replay == 'y');

    cout << "\nThanks for playing Tic Tac Toe!\n";
    return 0;
}
