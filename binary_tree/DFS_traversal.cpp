#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

class Node {
public:
    string val;
    Node* left;
    Node* right;

    explicit Node(string value) : val(value), left(nullptr), right(nullptr) { }
};

vector<string> DFStree(Node* root) {
    vector<string> values;
    stack<Node*> st;
    if (root != nullptr) {
        st.push(root);
    }
    while (!st.empty()) {
        Node* curr = st.top();
        values.push_back(curr->val);
        st.pop();
        if (curr->right != nullptr) {
            st.push(curr->right);
        }
        if (curr->left != nullptr) {
            st.push(curr->left);
        }
    }
    return values;
}

int main() {
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

    vector<string> order = DFStree(&a); 
    //    -> ["a", "b", "d", "e", "c", "f"]
    for (const auto& el : order) {
        cout << el << " "; 
    }
    return 0;
}
