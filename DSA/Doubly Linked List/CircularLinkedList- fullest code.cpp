#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = tail = nullptr;
    }

    // 1. Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // 2. Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // 3. Insert at position (0-based)
    void insertAtPosition(int val, int pos) {
        if (pos == 0) {
            insertAtBeginning(val);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Position out of range!" << endl;
            return;
        }

        if (temp == tail) {
            insertAtEnd(val);
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    // 4. Delete at beginning
    void deleteAtBeginning() {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    // 5. Delete at end
    void deleteAtEnd() {
        if (!tail) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
    }

    // 6. Delete at position (0-based)
    void deleteAtPosition(int pos) {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }

        if (pos == 0) {
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 0; i < pos && temp; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Position out of range!" << endl;
            return;
        }

        if (temp == tail) {
            deleteAtEnd();
            return;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    // 7. Display forward
    void displayForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // 8. Display backward
    void displayBackward() {
        Node* temp = tail;
        cout << "Backward: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

// Main function to test everything
int main() {
    DoublyLinkedList dll;

    // Insert at beginning
    cout << "Inserting at beginning..." << endl;
    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtBeginning(30);
    dll.displayForward();
    dll.displayBackward();

    // Insert at end
    cout << "Inserting at end..." << endl;
    dll.insertAtEnd(5);
    dll.insertAtEnd(1);
    dll.displayForward();
    dll.displayBackward();

    // Insert at position
    cout << "Inserting at position..." << endl;
    dll.insertAtPosition(15, 2); // Insert at position 2
    dll.insertAtPosition(25, 0); // Insert at beginning again
    dll.insertAtPosition(2, 100); // Out of range
    dll.displayForward();
    dll.displayBackward();

    // Delete at beginning
    cout << "Deleting at beginning..." << endl;
    dll.deleteAtBeginning();
    dll.displayForward();

    // Delete at end
    cout << "Deleting at end..." << endl;
    dll.deleteAtEnd();
    dll.displayForward();

    // Delete at position
    cout << "Deleting at position..." << endl;
    dll.deleteAtPosition(2);
    dll.displayForward();

    dll.deleteAtPosition(100); // Out of range
    dll.displayForward();

    return 0;
}
