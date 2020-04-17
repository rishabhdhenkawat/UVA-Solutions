#include <iostream>
#include <cstdio>


using namespace std;


char input[100000];

struct node{
    char c;
    struct node* next;
};

struct node* insert(node* n, char s)
{
    struct node* temp = new node();
    temp->c=s;
    temp->next=n->next;
    n->next=temp;
    return temp;
}


void printList( node* dummy ){
 
    node* tmp = dummy;
 
    while( tmp = tmp->next )
        putchar(tmp->c);
 
    printf("\n");
}
 

int main()
{


while(fgets(input,100000,stdin))
{
struct node* dummy= new node();
dummy->next=NULL;
struct node* cur=dummy;
struct node* tail=dummy;
int f=0;
for(int i=0; input[i];++i)
{
    if(input[i]=='[')
    {
    cur=dummy;
    f=1;
    continue;
        
    }
    if(input[i]==']')
    {
        f=0;
        struct node* tmp=tail;
        struct node* show=cur;
        while(tmp->next!=NULL)
       { tmp=tmp->next;}
        tail=cur=tmp;
        
        continue;
        
    }
    
    
        
        
        
    cur=insert(cur,input[i]);
    if(f==0)
    tail=cur;
    

    }

    
    printList(dummy);
 
    
}

    
}