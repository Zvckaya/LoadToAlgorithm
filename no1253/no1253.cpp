#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int p1 = 0;
    int p2 = 0;
    vector<int> nums;
    int result = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int temp = 0;
        cin >> temp;
        nums.push_back(temp);
    }
    
    p2 = nums.size() - 1;
    sort(nums.begin(), nums.end());

    for (int k = 0; k < N; k++) {
        int findNum = nums[k];
        int i = p1;
        int j = p2;
        while (i < j) {
            if (nums[i] + nums[j] == findNum) {
                if (i != k && j != k) {
                    result++;
                    break;
                }
                else if (i == k) {
                    i++;
                }
                else {
                    j--;
                }
            }
            else if (nums[i] + nums[j] < findNum) {
                i++;
            }
            else {
                j--;
            }
          

        }
        
    }
    cout << result;
    
}