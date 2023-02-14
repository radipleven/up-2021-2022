#include <iostream>
using namespace std;

bool isSafe(int x, int y, int** chessBoard, int N) {
    return (x >= 0 && x < N&& y >= 0 && y < N&& chessBoard[x][y] == -1);
}

bool solveKTUtil(int** chessBoard, int x, int y, int move, int xMove[], int yMove[], int N) {
    int next_x, next_y;
    if (move == N * N)
        return true;
    for (int i = 0; i < 8; i++) {
        next_x = x + xMove[i];
        next_y = y + yMove[i];
        if (isSafe(next_x, next_y, chessBoard, N)) {
            chessBoard[next_x][next_y] = move;
            if (solveKTUtil(chessBoard, next_x, next_y, move + 1, xMove, yMove, N))
                return true;
            else
                chessBoard[next_x][next_y] = -1;
        }
    }
    return false;
}

bool openKnightTour(int** chessBoard, int N) {
    // Initial starting position
    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    // Initialize all cells to -1
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            chessBoard[i][j] = -1;
        }
    }

    // Start from the first cell
    chessBoard[0][0] = 0;

    // Start the knight's tour
    if (!solveKTUtil(chessBoard, 0, 0, 1, xMove, yMove, N)) {
        cout << "Solution does not exist" << endl;
        return false;
    }
    else {
        // Print the solution
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << chessBoard[i][j] << " ";
            }
            cout << endl;
        }
    }
    return true;
}

int main() {
    int n; // size of the board
    cin >> n;
    int** chessBoard = new int* [n];
    for (int i = 0; i < n; i++)
        chessBoard[i] = new int[n];
    if (openKnightTour(chessBoard, n))
        cout << "Open Knight's Tour is possible on " << n << "x" << n << " board" << endl;
    else
        cout << "Open Knight's Tour is not possible on " << n << "x" << n << " board" << endl;
    return 0;
}
