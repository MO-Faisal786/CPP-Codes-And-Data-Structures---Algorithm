#include<bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


// // first Method
// int calcHeight(Node* root){
//     if(root == nullptr){
//         return 0;
//     }

//     int leftHeight = calcHeight(root->left);
//     int rightHeight = calcHeight(root->right);

//     return max(leftHeight, rightHeight) + 1;
// }

// int calcDiameter(Node* root){
//     if(root == nullptr){
//         return 0;
//     }

//     int lHeight = calcHeight(root->left);
//     int rHeight = calcHeight(root->right);
//     int currDiameter = lHeight + rHeight + 1;

//     int lDiameter = calcDiameter(root->left);
//     int rDiameter = calcDiameter(root->right);

//     return max(currDiameter, max(lDiameter, rDiameter));
// }

// second method

int calcDiameter(Node* root, int* height){
    if(root == nullptr){
        *height = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lD = calcDiameter(root->left, &lh);
    int rD = calcDiameter(root->right, &rh);

    int currD = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currD, max(lD, rD));
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);

    root->right = new Node(3);
    root->left->left = new Node(4);

    root->left->right = new Node(5);
    root->right->left = new Node(6);

    root->right->right = new Node(7);

    int height = 0;
    cout<<calcDiameter(root, &height);
    return 0;
}