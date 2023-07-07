#include <iostream>
using namespace std;

//Node
struct Node
{
    string label;
    Node *left, *right, *parent;
};


Node *root, *newNode, *nodeBapak, *nodePaman, *nodeSaya, *nodeAdekSaya;

//Buat Tree Baru
void createNewTree(string label){
    if(root != NULL){
        cout << "Sudah ada tree yang dibuat" << endl;
    } else {
        root = new Node();
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << label << " berhasil dibuat\n" << endl;
    }
    
}

//Insert Left
Node *insertLeft( string label, Node *node){
    if(root == NULL){
        cout << "Buat tree dahulu" << endl;
        return NULL;
    } else {
        if(node->left != NULL){
            cout << "Sudah ada left !!!" << endl;
            return NULL;
        } else{
            newNode = new Node;
            newNode->label = label;
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->parent = node ;
            node->left = newNode;
            cout << label << " berhasil dibuat di left " << newNode->parent->label << "\n" << endl;
            return newNode;
        }
    }
}

//Insert Right
Node *insertRight( string label, Node *node){
    if(root == NULL){
        cout << "Buat tree dahulu !!!" << endl;
        return NULL;
    } else {
        if(node->right != NULL){
            cout << "Sudah ada right !!!" << endl;
            return NULL;
        } else{
            newNode = new Node;
            newNode->label = label;
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->parent = node ;
            node->right = newNode;
            cout << label << " berhasil dibuat di right " << newNode->parent->label << "\n" << endl;
            return newNode;
        }
    }
}

//Empty
void empty(){
    if(root == NULL){
        cout << "Tree tidak ada" << endl;
    } else{
        cout << "Tree sudah ada" << endl;
    }
}

//Update
void update(string label, Node *node){
    if(root == NULL){
        cout << "Buat tree dahulu !!!" << endl;
    } else {
        if(node == NULL){
            cout << "Node tidak ada !!!" << endl;
        }else{
        string temp = node->label;
        node->label = label;
        cout << "Label " << temp << " berhasil dirubah menjadi " << label << "\n" << endl;
        }
    }
}

//Retrieve
void retrieve(Node *node){
    if(root == NULL){
        cout << "Buat tree dahulu !!!" << endl;
    } else {
        if(node == NULL){
            cout << "Node tidak ada !!!" << endl;
        }else{
        cout << "Label Node = " << node->label << "\n" << endl;
        }
    }
}


//Find
void find(Node *node){
    if(root == NULL){
        cout << "Buat tree dahulu !!!" << endl;
    } else {
        cout << "Label = " << node->label << endl;
        if(node->parent == NULL){
            cout << node->label << " adalah root" << endl;
        } else{
            cout << "Parent = " << node->parent->label << endl;
        }
        if(node->parent->right == NULL){
            cout << node->label << " tidak punya saudara";
        } else{
            cout << "Saudara = " <<  node->parent->right->label << endl;
        }
        if(node->left == NULL){
            cout << node->label << " tidak punya left" << endl;
        } else{
            cout << "Left = " << node->left->label << endl;
        }
        if(node->right == NULL){
            cout << node->label << " tidak punya right" << endl;
        } else{
            cout << "Right = " << node->right->label << "\n" << endl;
        }
    }
}


int main(){
    
    createNewTree("Kakek");
    nodeBapak = insertLeft("Bapak",root);
    nodePaman = insertRight("Paman",root);
    nodeSaya = insertLeft("Saya",nodeBapak);
    nodeAdekSaya = insertRight("Adek Saya",nodeBapak);

    empty();

    update("Ayah",nodeBapak);

    retrieve(nodeBapak);

    find(nodeBapak);


    cin.get();
    return 0;
}
