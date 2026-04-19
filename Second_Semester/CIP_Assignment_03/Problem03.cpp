#include<iostream>
#include <vector>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
};

class LinkedList{
    public:
        Node* head;

        LinkedList(const vector<int>& vals){
            head = nullptr;
            Node* tail = nullptr;
            for (int v : vals){
                Node* newNode = new Node(v);
                if (!head){
                    head = newNode;
                    tail = newNode;
                } 
			    else{
                    tail->next = newNode;
                    tail = newNode;
                }
            }
        }

        LinkedList(const LinkedList& other){
            head = nullptr;
            if (!other.head) return;

            Node* src = other.head;
            Node* tail = nullptr;

            while (src){
                Node* newNode = new Node(src->val);
                if (!head){
                    head = newNode;
                    tail = newNode;
                } 
				else{
                tail->next = newNode;
                tail = newNode;
                }
                src = src->next;
            }
        }

        ~LinkedList() {
            Node* curr = head;
            while (curr){
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
        }

        void print(){
            Node* curr = head;
            while (curr){
                cout << curr->val << " ";
                curr = curr->next;
            }
            cout << endl;
        }
};

int main() {
    LinkedList list1({1, 2, 3, 4});
    cout << "List 1: ";
    list1.print();
    LinkedList list2 = list1;
    cout << "List 2 (after copy): ";
    list2.print();
    list2.head->val = 99;
    cout << "List 1 after modifying list2: ";
    list1.print();
    cout << "List 2 after modification: ";
    list2.print();
    return 0;
}

