#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;

vector<string> DFS(unordered_map<string, vector<string>>& gr, const string& root) {
    vector<string> res;
    stack<string>stack;
    stack.push(root);
    while (!stack.empty()) {
        string curr = stack.top();
        res.push_back(curr);
        stack.pop();
        if(!gr[curr].empty()) {
            for (const auto &e: gr[curr]) {
                stack.push(e);
            }
        }
    }
    return res;
}


vector<string> BFS(unordered_map<string, vector<string>>& gr, const string& root) {
    vector<string> res;
    queue<string> queue;
    queue.push(root);
    while (!queue.empty()) {
        string curr = queue.front();
        res.push_back(curr);
        queue.pop();
        if (!gr[curr].empty()) {
            for (const auto& e : gr[curr]) {
                queue.push(e);
            }
        }
    }
    return res;
}

int main() {
    unordered_map<string, vector<string>> gr = {
            {"a", {"b", "c"} },
            {"b", {"d"} },
            {"c", {"e"} },
            {"d", {"f"} },
            {"e", { } },
            {"f", { } },
    };

    vector<string> dfs_traversal = DFS(gr, "a");
    for (auto& e : dfs_traversal) {
        cout << e << " ";
    }

    cout << "\n";
    
    vector<string> bfs_traversal = BFS(gr, "a");
    for (auto& e : bfs_traversal) {
        cout << e << " ";
    }

    return 0;
}
