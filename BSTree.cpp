#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            left = right = nullptr;
        }
};

class Tree {
    public:
        Node* root;

        Tree(){
            root = nullptr;
        }

        Node* insert(Node* node, int value){
            if (node == nullptr){
                return new Node(value);
            }
            if (value < node->data){
                node->left = insert(node->left, value);
            } else {
                node->right = insert(node->right, value);
            }
            return node;
        }

        void inOrederTraversal(Node* node){
            if (node != nullptr){
                inOrederTraversal(node->left);
                cout << node->data << " ";
                inOrederTraversal(node->right);
            }
        }

        void preOrederTraversal(Node* node){
            if (node != nullptr){
                cout << node->data << " ";
                inOrederTraversal(node->left);
                inOrederTraversal(node->right);
            }
        }

        void postOrederTraversal(Node* node){
            if (node != nullptr){
                inOrederTraversal(node->left);
                inOrederTraversal(node->right);
                cout << node->data << " ";
            }
        }
};