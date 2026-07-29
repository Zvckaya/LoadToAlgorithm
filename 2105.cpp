#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int N;
int cafe[20][20];
int answer;

int startRow;
int startCol;

int dr[4]={1,1,-1,-1};
int dc[4]={1,-1,-1,1};

bool eaten[101];

bool isOut(int row,int col)//나갔는지 체크
{
    return row<0||row>=N||col<0||col>=N;
    
}

void dfs(int row, int col,int direction, int count)
{
    for(int nextDirection = direction;
    nextDirection<=direction+1&&nextDirection<4;nextDirection++)
    {
        int nextRow = row+dr[nextDirection];
        int nextCol = col+dc[nextDirection];

        if(nextRow==startRow&&nextCol==startCol)
        {
            if(nextDirection ==3&&count>=4)
            {
                answer = max(answer,count);
            }

            continue;
        }

        if(isOut(nextRow,nextCol))
        {
            continue;
        }

        int dessert =cafe[nextRow][nextCol];

        if(eaten[dessert])
        {
            continue;
        }

        eaten[dessert] = true;

        dfs(nextRow,nextCol,nextDirection,count+1);

        eaten[dessert]= false;
    }
}


int main()
{
     ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int testCase = 1; testCase <= T; testCase++)
    {
        cin>>N;
        for(int row=0;row<N;row++)
        {
            for(int col =0;col<N;col++)
            {
                cin>>cafe[row][col];
            }
        }

        answer = -1;

        for(int row =0;row<N-2;row++)
        {
            for(int col= 1;col<N-1;col++)
            {
                memset(eaten,false,sizeof(eaten));

                startRow = row;
                startCol= col;

                int startDesert = cafe[row][col];
                eaten[startDesert]= true;

                int nextRow = row+ dr[0];
                int nextCol = col +dc[0];

                int nextDesert =cafe[nextRow][nextCol];

                if(!eaten[nextDesert]) //먹은적없으면
                {
                    eaten[nextDesert]=true;

                    dfs(nextRow,nextCol,0,2); //해당 좌표를 시작점으로 가지는 모든 사각형 탐색

                    eaten[nextDesert]= false;
                }

            }
        }
         cout << "#" << testCase << " " << answer << '\n';
    }
}