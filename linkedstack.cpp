#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* next;
};
struct linkedlc{
    Node* head ;
    linkedlc();
    bool isEmpty();
    void insertNode(char enterChar);
    void insertAppend(char enterChar);
    int count_words();
    void display();
    void deleteNode(char to_delete);
    void insertBefore(char to_insert,char before_It);
    bool is_found(char to_find);
};
int main(){
    linkedlc ls;
    cout << boolalpha << ls.isEmpty() << noboolalpha << endl;
    ls.insertNode('m');
    ls.insertNode('a');
    ls.insertNode('l');
    ls.insertNode('s');
    ls.insertNode('E');
    cout << ls.count_words() << endl;
    cout << endl;
    cout << boolalpha << ls.isEmpty() << noboolalpha << endl;
    cout << boolalpha << ls.is_found('a') << endl;
    ls.display() ;

    return 0;
}



    linkedlc::linkedlc(){
        head = NULL;
    }
    bool linkedlc::is_found(char to_find){
        Node* temp = head;
        while(head !=NULL){
            if(temp->data == to_find){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

  // void linkedlc::insertBefore(char to_insert,char before_It){

    //}

    /*void linkedlc::deleteNode(char to_delete){

    }*/
    bool linkedlc::isEmpty(){
        return (head == NULL);
    }
    /*void linkedlc::insertAppend(char enterChar){

    }*/
    void linkedlc::insertNode(char enterChar){
        Node* newNode = new Node;
        newNode->data = enterChar;
        if(isEmpty()){
            newNode->next = NULL;
            head = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    };
    int linkedlc::count_words(){
        int counter = 0;
        Node* temp = head;
        while(temp != NULL){
            counter++;
            temp = temp->next;
        }
        return counter;
    };
    void linkedlc::display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
