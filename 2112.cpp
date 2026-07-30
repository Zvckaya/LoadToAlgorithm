#include <iostream>
#include <algorithm>

using namespace std;

int D, W, K;
int min_cnt;
int film[13][20];

bool check()
{
    for(int x = 0; x < W; x++)
    {
        int continuous = 1;
        bool passed = (K == 1);

        for(int y = 1; y < D; y++)
        {
            if(film[y][x] == film[y - 1][x])
            {
                continuous++;
            }
            else
            {
                continuous = 1;
            }

            if(continuous >= K)
            {
                passed = true;
                break;
            }
        }

        if(!passed)
        {
            return false;
        }
    }

    return true;
}

void dfs(int y, int changeCnt)
{
    if(changeCnt >= min_cnt)
    {
        return;
    }

    if(check())
    {
        min_cnt = changeCnt;
        return;
    }

    if(y == D)
    {
        return;
    }

    int backup[20];

    for(int x = 0; x < W; x++)
    {
        backup[x] = film[y][x];
    }

    // 현재 행 그대로
    dfs(y + 1, changeCnt);

    // 현재 행을 A로 변경
    for(int x = 0; x < W; x++)
    {
        film[y][x] = 0;
    }

    dfs(y + 1, changeCnt + 1);

    // 현재 행을 B로 변경
    for(int x = 0; x < W; x++)
    {
        film[y][x] = 1;
    }

    dfs(y + 1, changeCnt + 1);

    // 원상 복구
    for(int x = 0; x < W; x++)
    {
        film[y][x] = backup[x];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for(int test_case = 1; test_case <= T; test_case++)
    {
        cin >> D >> W >> K;

        for(int i = 0; i < D; i++)
        {
            for(int j = 0; j < W; j++)
            {
                cin >> film[i][j];
            }
        }

        min_cnt = K;

        dfs(0, 0);

        cout << "#" << test_case << " " << min_cnt << '\n';
    }

    return 0;
}