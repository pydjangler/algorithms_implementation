#include <iostream>

class Node {
public:
    int val; 
    Node* next;

    explicit Node (int value) : val(value), next(nullptr) {}
};

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    Node a(1);
    Node b(2);
    Node c(3);
    Node d(4);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    printList(&a);
    return 0;
}
