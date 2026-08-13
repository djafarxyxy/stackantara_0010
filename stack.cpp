// Program Stack (Linked List)
// Implementasi stack menggunakan struktur data linked list
#include <iostream>
using namespace std;
//1. inisialisasi class node
class Node {
public:
    //2. inisialisasi variabel data dan Node next sebagai member class
    int data;
    Node* next;
    //3. pemberian value next sebagai NULL
    Node() {
        next = NULL;
    }
};
//4. inisialisasi class Stack
class Stack {
private:
    //5. inisialisasi Node top sebagai private untuk mengecek ujung dari Stack
    Node* top;

public:
    //6. inisialisasi nilai awal top sebagai NULL
    Stack() {
        top = NULL;
    }
    //7. pembuatan method push
    int push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value: " << value << endl;
        return value;
    }
