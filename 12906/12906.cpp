#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    auto iterator = arr.begin();

    while (iterator != arr.end());
    {
        if (answer.empty()) {
            answer.push_back(*iterator);
        }
        if (answer.back() != *iterator) {
            answer.push_back(*iterator);
        }
        iterator++;
    }

    return answer;
}

int main() {

}