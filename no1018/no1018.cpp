#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<char>> sliceVector(const vector<vector<char>>& myVec, int N, int M) {
    int endCol = M + 8;
    vector<vector<char>> subVector;

    for (int i = N; i < N + 8; i++) {
        vector<char> rowSlice(myVec[i].begin() + M, myVec[i].begin() + endCol);
        subVector.push_back(rowSlice);
    }
    return subVector;
}

int countRepaint(const vector<vector<char>>& myVec, char startColor) {
    int count = 0;
    char expectedColor = startColor;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (myVec[i][j] != expectedColor) {
                count++;
            }
            expectedColor = (expectedColor == 'B') ? 'W' : 'B';
        }
        expectedColor = (expectedColor == 'B') ? 'W' : 'B';
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<char>> chessBoard(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> chessBoard[i][j];
        }
    }

    int minRepaints = 100; 

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            vector<vector<char>> subChess = sliceVector(chessBoard, i, j);
            int repaintCountBlackStart = countRepaint(subChess, 'B');
            int repaintCountWhiteStart = countRepaint(subChess, 'W');
            int minRepaintForThisSubChess = min(repaintCountBlackStart, repaintCountWhiteStart);
            minRepaints = min(minRepaints, minRepaintForThisSubChess);
        }
    }

    cout << minRepaints << "\n";

    return 0;
}
