#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() : data(0), next(nullptr) {}

    Node(int data) : data(data), next(nullptr) {}
};

class Solution
{
public:
    Node *constructLL(vector<int> &arr)
    {
        if (arr.empty())
            return nullptr; // Handle empty array case

        Node *head = new Node(arr[0]);
        Node *mover = head;
        for (int i = 1; i < arr.size(); i++)
        {
            Node *temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
};

// Function to display the linked list
void display(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution s;
    Node *head = s.constructLL(arr);
    display(head);

    // Free the allocated memory
    Node *temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
