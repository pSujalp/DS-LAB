/*Write a program to create a singly linked list of integers. Add an integer and delete an integer from the list and display the contents on the screen.*/
//Name:Sujal Padmadevarathnam Pullagura
//Roll.no : 2248001
//Date:14/09/2023

#include<stdio.h>
#include<stdlib.h>

struct Node
{
     int data;
     struct Node * next;
};

struct linked_list
{
     int s=0;
     struct Node * head=NULL;
     struct Node * tail=NULL;
     void push(int data)
     {
        struct Node * new1 =(struct Node*) malloc(sizeof(Node));
        new1->data = data;
         if(head==NULL)
         { 
            head=new1;
            tail=new1;
            s++;
            return;
         }
         else
         {
            s++;
            tail->next=new1;
            tail=new1;
         }
     }
     void display()
     { 
        struct Node * temp=head;
        while(temp!=NULL)
        {
         printf("%d->",temp->data);
         temp=temp->next; 
        }
        printf("NULL\n");
     }
     void erase(int n)
     { 
         struct Node * temp=head;
         struct Node * prev=NULL;
         if(head->data==n)
         {
            head->next=head;
            s--;
            return;
         }
      else if(tail->data==n)
      {
            while(temp->next!=NULL)
            {
            prev=temp;
            temp=temp->next;
            }
             prev->next=NULL;
             tail=prev;
             free(temp);
             s--;
             return;
      }
      else
      {
         int c=0;
         while(temp->next!=NULL)
         {
            if(temp->data==n)
            {
               c=1; 
               break;
            }
            prev=temp;
            temp=temp->next;
         }
         if(c==1)
         {
            prev->next=temp->next;
            s--;
            free(temp);
         }
      }
     }
     void insert_at_end(int d)
     {
       struct Node * new1 = (struct Node*) malloc(sizeof(struct Node));
       new1->data=d;
       tail->next=new1;
       tail=new1;
       s++;
     }
     void insert_at_beginning(int d)
     {
       struct Node * new1 = (struct Node*) malloc(sizeof(struct Node));
       new1->data=d;
       new1->next=head;
       head=new1;
       s++;
     }
     void delete_at_beginning()
     {
      struct Node * temp=head;
      head->next=head;
      free(temp);
      s--;
      return;
     }
     void delete_at_end()
     {
      Node * temp=tail;
      Node * prev=NULL;
      while(temp->next!=NULL)
      {
            prev=temp;
            temp=temp->next;
      }
      prev->next=NULL;
      tail=prev;
      free(temp);
      s--;
      return;
     }
     void insert_at_middle(int d,int i)
     {
         if(i==0)
         {
            struct Node * new1 = (struct Node*) malloc(sizeof(struct Node));
            new1->data=d;
            new1->next=head;
            head=new1;
            return;
         }
         else if(i==length()-1)
         {
            struct Node * new1 = (struct Node*) malloc(sizeof(struct Node));
            new1->data=d;
            tail->next=new1;
            tail=new1;
         }
         else if(i>0 && i<length()-1)
         {
            struct Node * t=head;
            struct Node * prev=NULL;
            int j=0;
            while(j!=i)
            {
               prev=t;
               t=t->next;
               j++;
            }
            struct Node * new1 = (struct Node*) malloc(sizeof(struct Node));
            new1->data=d;
            prev->next=new1;
            new1->next=t;
         }
     }
     int length()
     {
        struct Node * t=head;
        int i=0;
        while(t!=NULL)
        {
         i++;
         t=t->next;
        }
        return i;
     }
     int nth_node_from_end(int d)
     {
        int arr[length()];
        struct Node * t=head;                 //space complexity : O(N)  // time complexity :O(N)
        int i=0;
        while(t!=NULL)
        {
          arr[i++]=t->data;
          t=t->next;
        }
        return arr[length()-d-1];
     }
     bool checkcycle()
     {
        struct Node * c=head;
        struct Node * t=head->next;
        while(t!=NULL)                            //space complexity : O(1)  // time complexity :O(N)
        {                                              
           if(t->next==head) return true;
           t=t->next;
        }
        return false;
     }
     int middle_node()
     {
       int arr[length()];
       int i=0;                //space complexity : O(N)  // time complexity :O(1)
       struct Node * t=head;
       while(t!=NULL)
       {
         arr[i++]=t->data;
         t=t->next;
       }
       return arr[length()/2];
     }
     void insert_in_sorted_order(int d)
     {
        if(d<=head->data)
        {
           struct Node * new1 = (Node*)malloc(sizeof(Node));
           new1->data=d;
           new1->next=head;
           head=new1;
        }
        else if(d>=tail->data)
        {
              struct Node * new1 = (Node*)malloc(sizeof(Node));
              new1->data=d;
              tail->next=new1;
              tail=new1;
        }
        else 
        {
            struct Node * t= head;
           struct  Node * prev=NULL;
            int c=0;
            while(t->next!=NULL)
            {
                prev=t;
                t=t->next;
                if(d>=prev->data && d<t->data)
                {
                   c=1;
                   break;
                }
            }
            if(c==1)
            {
                struct Node * new1 = (struct Node*)malloc(sizeof(Node));
                new1->data=d;
                prev->next=new1;
                new1->next=t;
            }
        }
     }
};

int main()
{     
        linked_list l;
        printf("Enter the no .of Nodes \n");
        int s;
        scanf("%d",&s);
        for(int i=0;i<s;i++)
        {
           int x;
           scanf("%d",&x);
           l.push(x);
        }

        l.insert_at_middle(45,1);
        l.erase(3);
        l.display();
       
 }
