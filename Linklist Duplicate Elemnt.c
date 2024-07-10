#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node
{
    int data;
    struct Node *next;
};

struct Node* removeAllDuplicates(struct Node* head)
{
    // code here
    int m;
    struct Node *h,*p,*f;
    h=head->next;
    p=head;
    while(h!=NULL)
    {
        if(h->data==p->data)
        {
            m=p->data;
            if(p==head)
                head=h;
            else
                f->next=h;
        }
        else if(m==p->data)
        {
            if(p==head)
                head=h;
            else
                f->next=h;
        }
        else
            f=p;
        p=h;
        h=h->next;
    }
    if(m==p->data)
    {
        if(p==head)
                head=h;
            else
                f->next=h;
    }
    return head;
}

// } Driver Code Ends
