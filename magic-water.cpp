#include <iostream>
#include <algorithm>

using namespace std;

int N;
int tree[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    for(int test_case=1;test_case<=T;test_case++)
    {
        int N;
        cin>>N;
        int height_tree=0;
        for(int i=0;i<N;i++)
        {
            cin>>tree[i];
            height_tree = max(height_tree,tree[i]);
        }

    
        int cnt1=0;
        int cnt2=0;
        int ans=0;

        for(int i=0;i<N;i++)
        {
            int dif=height_tree - tree[i];//차이를 구함
            cnt1+= dif%2;
            cnt2+= dif/2;
        }

        while (cnt2>cnt1+1) //짝수 날짜가 더 많을 떄까지 
        {
            cnt2--;
            cnt1+=2;
        }

        if(cnt1>cnt2)//홀수 날짜가 더 많으면 
        {
            ans=cnt1*2 -1;
        }
        else if(cnt1<=cnt2)
        {
            ans=cnt2*2;
        }
        
        cout<<"#"<<test_case<<" "<<ans<<"\n";

    }

}