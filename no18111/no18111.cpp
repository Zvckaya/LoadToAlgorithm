//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M, B = 0;
//	cin >> N >> M >> B;
//	int max_count = 0;
//	int max_height = 0;
//	int result = 0;
//
//	vector<vector<int>> grid(N, vector<int>(M, 0));
//	int blocks[257] = { 0 };
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			int temp = 0;
//			cin >> temp;
//			blocks[temp]++;
//			grid[i][j] = temp;
//		}
//	}
//
//	for (int i = 0; i < 257; i++) {
//		if (blocks[i] >= max_count) {
//			max_height = i;
//			max_count = blocks[i];
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (grid[i][j] > max_height) {
//				result = result + (grid[i][j] - max_height) * 2;
//			}
//			else if (grid[i][j] < max_height) {
//				result = result + (max_height - grid[i][j]);
//			}
//		}
//	}
//
//	if (result > B)
//	{
//
//	}
//
//	cout << result << " " << max_height;
//}
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, B;
    cin >> N >> M >> B;

    vector<vector<int>> grid(N, vector<int>(M, 0));
    int minTime = INT32_MAX, targetHeight = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    for (int h = 0; h <= 256; h++) {
        int removeBlocks = 0, addBlocks = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] > h) {
                    removeBlocks += grid[i][j] - h; 
                }
                else {
                    addBlocks += h - grid[i][j];   
                }
            }
        }

        if (removeBlocks + B >= addBlocks) {
            int time = removeBlocks * 2 + addBlocks; 

            if (time < minTime || (time == minTime && h > targetHeight)) {
                minTime = time;
                targetHeight = h;
            }
        }
    }

    cout << minTime << " " << targetHeight << "\n";
    return 0;
}

