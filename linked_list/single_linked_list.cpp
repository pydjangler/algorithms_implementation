#include <iostream>

class Node {
public:
    int val; 
    Node* next;

    explicit Node(int value) {
        this->val = value;
        this->next = nullptr;
    }
};

void printList(Node* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
}

/* recursive print
void printList(Node* head) {
    if (head == nullptr) { 
        return;
    }
    std::cout << head->val << " ";
    head = head->next;
    printList(head);
}
*/

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
