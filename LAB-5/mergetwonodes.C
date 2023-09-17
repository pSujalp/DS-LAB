#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    Node * next;
};

struct linked_list
{
    Node * head=NULL;
    Node * tail=NULL;

    void merge_of_two_linked_list()
    {
        printf("enter the size of first list:\n");
        int s;
        scanf("%d",&s);
        Node * dum = (Node *) malloc(sizeof(Node));
        tail=dum;
        while(s>0)
        {
            printf("Enter the value of element\n");
            int x;
            scanf("%d",&x);
            Node * new1 = (Node *) malloc(sizeof(Node));
            new1->data=x;
            tail->next=new1;
            tail=new1;
            s--;
        }
        printf("enter the size of second list:\n");
        scanf("%d",&s);
        while(s>0)
        {
            printf("Enter the value of element\n");
            int x;
            scanf("%d",&x);
            Node * new1 = (Node *) malloc(sizeof(Node));
            new1->data=x;
            tail->next=new1;
            tail=new1;
            s--;
        }
        head=dum->next;
    }
    void print_list()
    {
        Node * temp=head;
        while(temp!=NULL)
        {
            printf("%d>>", temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }

};

int main()
{
    linked_list l;
    l.merge_of_two_linked_list();
    l.print_list();
}