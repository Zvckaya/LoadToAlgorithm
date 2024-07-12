#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    vector<Node*> children;
    int value;
    Node(int n) :value (n) {};

    void PrintNode() {
        if (children.empty())
            cout << value << "의 자식노드는 없습니다."<<"\n";
        else {
            cout << value << "의 자식노드들은";
            for (auto i : children)
                cout << i->value;
            cout << "입니다"<<"\n";
        }
    }

    void addChild(Node* child) {
        children.push_back(child);
    }
};


int findWinner(vector<Node*> nodes, int start) {
    int p1 = 0;
    int p2 = 0;
    int next = 0;

    bool isP1 = true;

    Node* cursor = nodes[start - 1];
    

    while (true)
    {
        if (cursor->children.empty())
            break;
        else {
            if (isP1) 
                p1 += cursor->value;
            else 
                p2 += cursor->value;
            isP1 != isP1;
            
            for (auto i : cursor->children) {
                if (i->value > next)
                    next = i->value;
            }
            cursor = nodes[next - 1];
        }

    }

    if (p1 >= p2)
        return 1;
    else
        return 0;
}


int main() {
    vector<Node*> nodes;

    int length;
    cin >> length;

    for (int i = 1; i <= length; i++) {
        nodes.emplace_back(new Node(i));
    }
    
    for (int i = 0; i < length - 1; i++) {
        int u, v;
        cin >> u >> v;
        if (u < v)
            nodes[u - 1]->addChild(nodes[v - 1]);
        else 
            nodes[v - 1]->addChild(nodes[u - 1]);
        u, v = 0;
    }

    for (int i = 1; i < length; i++) {
        cout << findWinner(nodes, i) << "\n";
    }


    for (auto i : nodes) {
        delete i;
    }

    /*for (int i = 1; i <= length; i++) {
        int p1 = 0;
        int p2 = 0;
        bool isP1 = true;

        Node cursor = nodes[i-1];
     
        
        while (true)
        {
            int max = 0;
            if (isP1) {
                p1 += cursor.value;
                isP1 = false;
            }
            else {
                p2 += cursor.value;
                isP1 = true;
            }
            
            if (cursor.nodes.empty())
                break;


            for (auto i : cursor.nodes) {
                if (i.value > max)
                    max = i.value;
            }
            cursor = nodes[max - 1];
            max = 0;
        }

        if (p1 >= p2)
            cout << "1";
        else
            cout << "0";
        p1 = 0;
        p2 = 0;
    }
    */

}
