#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;
    vector<int> cranes(N);
    for (int i = 0; i < N; i++) cin >> cranes[i];

    cin >> M;
    vector<int> boxes(M);
    for (int i = 0; i < M; i++) cin >> boxes[i];

    sort(cranes.begin(), cranes.end(), greater<int>());
    sort(boxes.begin(), boxes.end(), greater<int>());

    if (boxes[0] > cranes[0]) {
        cout << -1;
        return 0;
    }

    vector<bool> moved(M, false);
    vector<int> pos(N, 0);
    int movedCount = 0;
    int answer = 0;

    while (movedCount < M) {
        answer++;

        for (int i = 0; i < N; i++) { //모든 크레인 순회
            int cap = cranes[i];


            while (pos[i] < M) { //박스를 돌면서 
                if (!moved[pos[i]] && boxes[pos[i]] <= cap) {
                    moved[pos[i]] = true; //해당 박스는 옮겨짐 
                    movedCount++; //총 옮긴 박스 개수 
                    pos[i]++; //다음에 탐색할 박스 인덱스 
                    break;
                }
                pos[i]++;
            }
        }
    }

    cout << answer;
    return 0;
}
