using namespace std;
#include <iostream>

struct Node{
    string data;
    Node* right ,*left;
    Node(string da){
        right = left = NULL;
        data = da;
    }
};
struct bss{
Node* root;
bss(){
    root = NULL;
}
Node* insert(Node* r,string da){
    if(r == NULL){
        Node* newnode = new Node(da);
        r = newnode;
    }
    else if(da < r->data ){
        r->left = insert(r->left,da);
    }
    else{
        r->right = insert(r->right , da);
    }
    return r;
}
void insert(string da){
    root = insert(root, da);
}

void preorder(Node* r){
    if(r == NULL){
        return;
    }
    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);
}

void inorder(Node* r){
    if(r == NULL){
        return;
    }
    inorder(r->left);
    cout << r->data << " ";
    inorder(r->right);
}
void postorder(Node* r){
    if(r == NULL){
        return;
    }
    postorder(r->left);
    postorder(r->right);
    cout << r->data << " ";
}
};
int main(){
  bss bstring;
    bstring.insert("eslam");
    bstring.insert("khalid");
    bstring.insert("hassan");
    bstring.insert("amer");
    
    bstring.insert("amer");

    bstring.preorder(bstring.root);
    cout << endl;
    bstring.inorder(bstring.root);
    cout << endl;
    bstring.postorder(bstring.root);
  
    return 0;
}
