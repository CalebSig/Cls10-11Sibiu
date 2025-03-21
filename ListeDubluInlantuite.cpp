#include <iostream>

using namespace std;

struct nod{
    int info;
    nod *next;
    nod *prev;
};

nod *createNode(int key)
{
    nod *newNode=new nod;
    newNode->info=key;
    newNode->next=newNode->prev=NULL;
    return newNode;
}

void inserareInceput(nod *&head, nod*&tail, int key)
{
    nod *newNode=createNode(key);
    newNode->next=head;
    if(head==NULL) head=tail=newNode;
    else
    {
        head->prev=newNode;
        newNode->next=head; ///facem leg
        head=newNode; ///mutam pointerul head
    }

}

void inserareFinal(nod *&head, nod *&tail, int key)
{
    nod *newNode=createNode(key);
    if(tail==NULL) head=tail=newNode;
    else
    {
        tail->next=newNode;
        newNode->prev=tail; ///facem leg
        tail=newNode; ///mutam pointerul tail
    }
}

void inserareInainteDeElement(nod *&head, nod *&tail,int info, int key)
{
    nod *newNode=createNode(key);
    if(head!=NULL)
    {
        nod *p=head;
        while(p!=NULL && p->info!=info) p=p->next;
        if(p!=NULL)
        {
            if(p==head) inserareInceput(head,tail,key);
            else
            {
                newNode->prev=p->prev;
                p->prev->next=newNode;
                newNode->next=p;
                p->prev=newNode;
            }
        }
    }
}

void afisList(nod *head)
{
    nod *p=head;
    while(p!=NULL)
    {
        cout<<p->info<< " ";
        p=p->next;
    }
}

void afisListInv(nod *tail)
{
    nod *p=tail;
    while(p!=NULL)
    {
        cout<<p->info<< " ";
        p=p->prev;
    }
}

void stergeInceput(nod *&head, nod *&tail)
{
    if(head!=NULL)
    {
        if(head==tail)
        {
            nod *p=head;
            head=tail=NULL;
            delete(p);
        }
        else
        {
            nod *p=head;
            head=p->next;
            head->prev=NULL;
            delete(p);
        }
    }
}

void stergeFinal(nod *&head, nod *&tail)
{
    if(tail!=NULL)
    {
        if(head==tail)
        {
            nod *p=head;
            head=tail=NULL;
            delete(p);
        }
        else
        {
            nod *p=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete(p);
        }
    }
}

void stergeElementDupaCheie(nod *&head, nod *&tail, int key)
{
    if(head!=NULL)
    {
        nod *p=head;
        while(p!=NULL && p->info!=key) p=p->next;
        if(p!=NULL)
        {
            if(head==p)
            {
                stergeInceput(head,tail);
            }
            else if(tail==p)
            {
                stergeFinal(head,tail);
            }
            else
            {
                p->prev->next=p->next;
                p->next->prev=p->prev;
                delete(p);
            }
        }
    }
}

int main()
{
    nod *head,*tail;
    head=tail=NULL;
    int A[]={1,2,3,4,5,6,7,8,9,10,15,15,16};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)
        inserareFinal(head,tail,A[i]);

    inserareInainteDeElement(head,tail,1,70);
    inserareInainteDeElement(head,tail,6,42);

    stergeInceput(head,tail);
    stergeFinal(head,tail);

    stergeElementDupaCheie(head,tail,42);

    afisList(head);
    cout<<endl;
    afisListInv(tail);
    return 0;
}
