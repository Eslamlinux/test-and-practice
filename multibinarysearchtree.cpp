// /******************************************************************************
// multi binary search tree
// *******************************************************************************/
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int Fdata;
//     string Sdata;
//     Node* right;
//     Node* left;
//     Node(int Fvalue,string Svalue)
//     {
//         Fdata = Fvalue;
//         Sdata = Svalue;
//         right = left = NULL;
//     }
// };

// class BST{
//     public:
//     Node* root;
//     BST(){
//         root = NULL;
//     }
//     Node* insert(Node* r,int Fvalue, string Svalue){
//         if(r == NULL){
//             Node* newnode = new Node(Fvalue,Svalue);
//             r = newnode;
//         }
//         else if(Fvalue < r->Fdata){
//             r->left = insert(r->left ,Fvalue,Svalue);
//         }
//         else{
//             r->right = insert(r->right,Fvalue,Svalue);
//         }
//         return r;
//     }
//     void insert(int Fvalue,string Svalue){
//         root = insert(root,Fvalue,Svalue);
//     }
//     void preorder(Node* r){
//         if(r == NULL){
//             return;
//         }
//         else{
//             cout << r->Fdata << " " << r->Sdata << endl;
//             preorder(r->left);
//             preorder(r->right);
//         }
//     }
//     void inorder(Node *r){
//         if(r == NULL){
//             return;
//         }
//         else{
//             inorder(r->left);
//             cout << r->Fdata << " " << r->Sdata << endl;
//             inorder(r->right);
//         }
//     }
//     void postorder(Node* r){
//         if(r == NULL){
//             return;
//         }
//         else{
//             postorder(r->left);
//             postorder(r->right);
//             cout << r->Fdata << " " << r->Sdata << endl;
//         }
//     }
//     Node* Search(Node* r,int id){
//         if(r == NULL){
//             return NULL;
//         }
//         else if(id == r->Fdata){
//             return r;
//         }
//         else if(id < r->Fdata){
//             return Search(r->left,id);
//         }
//         else{
//             return Search(r->right,id);
//         }
//     };
//     bool Search(int id){
//         Node* result = Search(root,id);
//         cout << boolalpha;
//         return result == NULL? false : true;
//     }
//     void SearchName(int id){
//         if(!Search(id)){
//             cout << id << " not found it\n" << boolalpha;
//         }
//         else{
//             cout << "Id:" << root->Fdata << "\nName: " << root->Sdata << "\n" ;
//         }

//     }
    
//     // SearchByName func it search in all tree 
//     Node* SearchByName(Node* r ,string name){
//         if(r == NULL){
//             return NULL;
//         }
//         else if(r->Sdata == name){
//             return r;
//         }
//     Node* foundit = SearchByName(r->left,name);
//         if(foundit != NULL){
//             return foundit;
//         }
//         else{
//             return SearchByName(r->right,name);
//         }
//         return r;
//     }
//     void SearchByName(string name) {
//         Node* result = SearchByName(root, name);
//         if (result == NULL) {
//             cout << "Name: " << name << " not found." << endl;
//         } 
//         else {
//             cout << "Name is: " << result->Sdata << ", Id: " << result->Fdata << endl;
//         }
// }


//     Node* miniId(Node* r){
//         if(r == NULL){
//             return NULL;
//         }
//         else if(r->left == NULL){
//             return r;
//         }
//         else{
//             return miniId(r->left);
//         }
//     }
//     Node* maximumId(Node* r){
//         if(r == NULL){
//             return NULL;
//         }
//         else if(r->right == NULL){
//             return r;
//         }
//         else{
//             return maximumId(r->right);
//         }
//     }
    
//     Node* Delete(Node* r,int id){
//         if(r == NULL){
//             return NULL;
//         }
//         else if(id < r->Fdata){
//             r->left = Delete(r->left,id);
//         }
//         else if(id > r->Fdata){
//             r->right = Delete(r->right,id);
//         }
//         else{
//             if(r->left == NULL && r->right == NULL){
//                 delete r;
//                 r = NULL;
//             }
//             else if(r->left !=NULL && r->right == NULL){
//                 Node* temp;
//                 temp = r->left;
//                 delete r;
//                 return temp;
//             }
//             else if(r->right != NULL && r->left == NULL){
//                 Node* temp;
//                 temp = r->right;
//                 delete r;
//                 return temp;
//             }
//             else{
//                 Node* mini = miniId(r->right);
//                 r->Fdata = mini->Fdata;
//                 r->Sdata = mini->Sdata;
//                 r->right = Delete(r->right,mini->Fdata);
//             }
//         }
//         return r;
//     }
//     void Delete(int id) {
//         root = Delete(root, id);
//     }
// };
// int main()
// {

// BST b1;
// b1.insert(45,"eslam");
// b1.insert(15,"hassan");
// b1.insert(47,"mohamed");
// b1.insert(90,"aya");
// b1.insert(10,"najah");
// b1.insert(55,"khalid");
// b1.insert(12,"ahmed");
// b1.insert(20,"sagda");
// b1.insert(50,"selia");

// cout << " *******search by name only******** \n";

// b1.SearchByName("eslam");// using search by name befor delete

// b1.Delete(45);// using delete func

// b1.SearchByName("eslam"); // using search by name after delete

// cout << " *******pre order output******** \n";

// b1.preorder(b1.root);// using preorder func
// cout << " *******in order output******** \n";
// b1.inorder(b1.root);
// cout << " *******post order output******** \n";
// b1.postorder(b1.root);
// cout << " *******search by id******** \n";
// b1.SearchName(50);// using search by id number
// cout << " *******mini******** \n";
// Node* topr = b1.miniId(b1.root);
// cout << topr->Fdata <<endl;
// cout << " *******max******** \n";
// Node* toprmax = b1.maximumId(b1.root);
// cout << toprmax->Fdata << endl;
//     return 0;
// }
