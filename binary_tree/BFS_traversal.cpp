#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Node {
public:
    string val;
    Node* left;
    Node* right;
    explicit Node(string value) : val(value), left(nullptr), right(nullptr) { }
};

vector<string> BFStree(Node* root) {
    queue<Node*> queue;
    vector<string> values;
    if (root != nullptr) {
        queue.push(root);
    }
    while (!queue.empty()) {
        Node* curr = queue.front();
        values.push_back(curr->val);
        queue.pop();
        if (curr->left != nullptr) {
            queue.push(curr->left); 
        }
        if (curr->right != nullptr) {
            queue.push(curr->right);
        }
    }
    return values;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Node a("a");
    Node b("b");
    Node c("c");
    Node d("d");
    Node e("e");
    Node f("f");

    a.left = &b;
    a.right = &c;
    b.left = &d;
    b.right = &e;
    c.right = &f;

    //      a
    //    /   \
    //   b     c
    //  / \     \
    // d   e     f

    vector<string> output = BFStree(&a);
    //    -> ["a", "b", "c", "d", "e", "f"]
    for (auto& el : output) {
        cout << el << " ";
    }
    return 0;
}
