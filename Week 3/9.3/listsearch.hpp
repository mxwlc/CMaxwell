#include <iostream>

struct IntListNode
{
    int val;
    IntListNode *next;
};

int main()
{
    IntListNode* head;
    head = NULL;
    
    int n;
    std::cout << "Input n" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
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
    bool inlist = false;
    int search;
    std::cout << "Enter a number" << std::endl;
    std::cin >> search;

    while (lit != NULL)
    {
        if (lit->val = search)
        {   
            inlist = true;
            lit = NULL;
        }
    }

    std::cout << inlist << std::endl;
    lit = head;

    while (lit != NULL)
    {
        head = lit->next;
        delete lit;
        lit = head;
    }
}