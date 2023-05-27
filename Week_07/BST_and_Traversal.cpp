// Suzen Firasta
//210968058

#include <iostream>

using namespace std;

// Define a node structure for the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node with the given data
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node with the given data into the tree
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// In-order traversal function
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

// Pre-order traversal function
void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Post-order traversal function
void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

// Suzen Firasta
//210968058

int main() {
    // Create an empty tree
    Node* root = NULL;

    // Get user input for the values to be inserted into the tree
    int numValues;
    cout << "Enter the number of values to insert into the tree: ";
    cin >> numValues;
    cout << "Enter " << numValues << " values: ";
    for (int i = 0; i < numValues; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    // Display the tree elements using in-order traversal
    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    // Display the tree elements using pre-order traversal
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    // Display the tree elements using post-order traversal
    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
// Suzen Firasta
//210968058
