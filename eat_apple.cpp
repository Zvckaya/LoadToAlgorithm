#include <iostream>
#include <algorithm>

using namespace std;

struct Apple
{
    int y;
    int x;
};

int N;
int map[10][10];

int max_apple_cnt = 0;

Apple apples[11];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        max_apple_cnt = 0;

        cin >> N;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> map[i][j];
                if (map[i][j] != 0)
                {
                    apples[map[i][j]] = {i, j};                    // n번째 사과 저장
                    max_apple_cnt = max(max_apple_cnt, map[i][j]); // 최대 사과 인덱스 갱신
                }
            }
        }

        // 사과를 받았으니, 0,0에서부터 출발해야 한다.

        int ans = 0;
        int curY = 0, curX = 0; // 출발점 위치
        int dir = 0;            // 방향 여기서 순서는 오 아래 왼 상

        for (int apple_cnt = 1; apple_cnt <= max_apple_cnt; apple_cnt++)
        {
            int nextY = apples[apple_cnt].y;
            int nextX = apples[apple_cnt].x;

            bool down = nextY > curY;  // 아래쪽에 있는가?
            bool right = nextX > curX; // 오른쪽에 있는가?

            if (dir == 0) // 오른쪽
            {
                if (down && right) // 오른쪽 아래 있는가?
                {
                    ans += 1; // 1번돌고
                    dir = 1;
                }
                else if (down && !right)
                {
                    ans += 2;
                    dir = 2;
                }
                else
                {
                    ans += 3;
                    dir = 3;
                }
            }
            else if (dir == 1) // 아래
            {
                if (down && !right) // 오른쪽 아래 있는가?
                {
                    ans += 1; // 1번돌고
                    dir = 2;
                }
                else if (!down && !right)
                {
                    ans += 2;
                    dir = 3;
                }
                else
                {
                    ans += 3;
                    dir = 0;
                }
            }
            else if (dir == 2) // 왼쪽
            {
                if (!down && !right)
                {
                    ans += 1;
                    dir = 3;
                }
                else if (!down && right)
                {
                    ans += 2;
                    dir = 0;
                }
                else
                {
                    ans += 3;
                    dir = 1;
                }
            }
            else // 위
            {
                if (!down && right)
                {
                    ans += 1;
                    dir = 0;
                }
                else if (down && right)
                {
                    ans += 2;
                    dir = 1;
                }
                else
                {
                    ans += 3;
                    dir = 2;
                }
            }

            curY = nextY;
            curX = nextX;
        }

        cout << "#" << test_case << " " << ans << "\n";
    }
}