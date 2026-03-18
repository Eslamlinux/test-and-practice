using namespace std;
#include <iostream>
class Node{
    public:
    int data;
    Node* right;
    Node* left;
Node(int entrydata){
    right = left = NULL;
    data = entrydata;
}
};
class Bst{
    public:
    Node* root ;
    Bst(){
        root = NULL;
    }
    Node* insert(Node* ro,int daitem){
        if(ro == NULL){
            Node* newnode =new Node(daitem);
            ro = newnode;
        }
        else if(daitem < ro->data){
            ro->left = insert(ro->left , daitem);
        }
        else{
            ro->right = insert(ro->right,daitem);
        }
        return ro;
    }
    void insert(int item){
        root = insert(root, item);
    }
    void preOrderd(Node* r);
    void inOrderd(Node* r);
    void postOrderd(Node* r);


};


int main(){

//45,15,79,90,10,55,12,20,50

Bst bone;
bone.insert(45);
bone.insert(15);
bone.insert(79);
bone.insert(90);
bone.insert(10);
bone.insert(55);
bone.insert(12);
bone.insert(20);
bone.insert(50);

bone.preOrderd(bone.root);
cout << "\n";
bone.inOrderd(bone.root);
cout << "\n";
bone.postOrderd(bone.root);

    return 0;
}
void Bst::preOrderd(Node* r){
    if(r == NULL){
        return;
    }
    cout << r->data << " ";
    preOrderd(r->left);
    preOrderd(r->right);
}

void Bst::inOrderd(Node* r){
    if(r == NULL){
        return;
    }
    inOrderd(r->left);
    cout << r->data << " ";
    inOrderd(r->right);
}

void Bst::postOrderd(Node* r){
    if(r == NULL){
        return;
    }
    postOrderd(r->left);
    postOrderd(r->right);
    cout << r->data << " ";
}
