// 16.Binary tree(insert,delete,traversal).cpp
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
struct Node *createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Insert node......
struct Node *insertNode(Node *ptr, int data)
{
    if (ptr == NULL)
        ptr = createNode(data);
    else if (ptr->data >= data)
        ptr->left = insertNode(ptr->left, data);
    else
        ptr->right = insertNode(ptr->right, data);
    return ptr;
}
// Pre-Order traversal......
void preOrder(Node *ptr)
{
    if (ptr != NULL)
    {
        cout << ptr->data << " ";
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}
// Post-Order traversal......
void postOrder(Node *ptr)
{
    if (ptr != NULL)
    {
        postOrder(ptr->left);
        postOrder(ptr->right);
        cout << ptr->data << " ";
    }
}
// In-Order traversal......
void inOrder(Node *ptr)
{
    if (ptr != NULL)
    {
        inOrder(ptr->left);
        cout << ptr->data << " ";
        inOrder(ptr->right);
    }
}

void display(Node *root)
{
    cout << "Current list!!\n";
    cout << "Pre Order: ";
    preOrder(root);
    cout << endl;

    cout << "In Order: ";
    inOrder(root);
    cout << endl;

    cout << "Post Order: ";
    postOrder(root);
    cout << endl;
}
int main()
{
    Node *root = NULL;
    while (1)
    {
        system("cls");
        display(root);
        cout << "\nEnter I for insert element!\n";
        cout << "Enter any for exit!\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;
        if (ch == 'i' || ch == 'I')
        {
            system("cls");
            display(root);
            cout << "Enter element for insert: ";
            int element;
            cin >> element;
            root = insertNode(root, element);
        }
        else
            break;
    }
}