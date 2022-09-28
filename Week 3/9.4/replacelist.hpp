#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

typedef std::string list_t;

// using typedef we can change the type only in one line
// if we want a linked list implementation
// that works for a different type

struct ListNode
{
    list_t val;
    ListNode *next;
};

ListNode *cons_list(list_t e, ListNode *l)
{
    ListNode *tmp;

    tmp = new ListNode;

    tmp->val = e;
    tmp->next = l;

    return tmp;
}

void print_list(ListNode *l)
{
    while (l != NULL)
    {
        std::cout << l->val << std::endl;
        l = l->next;
    }
}

void deallocate_list(ListNode *l)
{
    ListNode *tmp;

    while (l != NULL)
    {
        tmp = l->next;
        delete l;
        l = tmp;
    }
}

int length_list(ListNode *l)
{
    int len = 0;
    while (l != NULL)
    {
        len++;
        l = l->next;
    }
    return len;
}

bool search_list(list_t e, ListNode *l)
{
    while (l != NULL)
    {
        if (l->val == e)
        {
            return true;
        }
        l = l->next;
    }
    return false;
}

bool search_ordered_list(list_t e, ListNode *l)
{
    while (l != NULL)
    {
        if (e < l->val)
        {
            return true;
        }
        l = l->next;
    }
    return false;
}

bool replace_list(list_t e, list_t n, ListNode *l, bool all)
{
    bool repl = false;
    while (l != NULL)
    {
        if (all == false && e == l->val)
        {
            l->val = n;
            return true;
        }
        if (e == l->val)
        {
            l->val = n;
            repl = true;
        }
        l = l->next;
    }
    return repl;
}

int main()
{
    std::ifstream infile;
    infile.open("input.txt");

    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }

    ListNode *l = NULL;

    std::string tmp;
    while (infile >> tmp)
    {
        l = cons_list(tmp, l);
    }
    std::cout << "end" << std::endl;
    print_list(l);
    std::cout << std::endl;
    replace_list("a", "c", l, true);
    print_list(l);
    deallocate_list(l);
}