#include <iostream>

struct IntListNode
{
    int val;
    IntListNode *next;
};

int main()
{
    int n, first;
    std::cout << "Input n" << std::endl;
    std::cin >> n;

    IntListNode *head;
    head = NULL;

    for (int i = 0; i < (n - 1); i++)
    {
        int current;
        std::cin >> current;

        IntListNode *newnode = new IntListNode;
        newnode->val = current;
        newnode->next = head;
        head = newnode;
    }


    IntListNode *lit;
    lit = head;

    while (lit != NULL)
    {
        std::cout << lit->val << std::endl;
        lit = lit->next;
    }

    lit = head;

    while (lit != NULL)
    {
        head = lit->next;
        delete lit;
        lit = head;
    }
}