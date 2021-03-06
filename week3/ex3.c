#include <stdio.h>
#include <malloc.h>


typedef struct Node{
    int value;
    struct Node *next;
} Node;


Node *head;
int size=0;


void print_list(){
    if(size==0) printf("There is nothing to print");
    else {
        Node *p = head;
        while (p->next != NULL) {
            printf("%d\n", p->value);
            p=p->next;
        }
        printf("%d\n", p->value);
        printf("___________________________\n");
    }
}

void insert_node(int value,int position){
    Node* node=(Node*)malloc(sizeof(Node));
    node->value=value;
    if(size==0){
        node->next=NULL;
        head=node;
    }
    else if(position==1){
        node->next=head;
        head=node;
    }
    else if(position==size+1){
        push_node(value);
    }
    else{
        int pos=1;
        Node *p=head;
        while(pos!=position-1){
            p=p->next;
            pos++;
        }
        node->next=p->next->next;
        p->next=node;
    }
    size++;
}

void push_node(int value){
    Node* node=(Node*)malloc(sizeof(Node));
    node->value=value;
    if(size==0){
        node->next=NULL;
        head=node;
    }
    else{
        Node*p=head;
        while (p->next!=NULL){
            p=p->next;
        }
        p->next=node;
        node->next=NULL;
    }
}

void pop_node(){
    if(size==0) printf("There is nothing to delete");
    else if(size==1){
        size--;
    }
    else {
        Node*p=head;
        while (p->next->next!=NULL){
            p=p->next;
        }
        p->next=NULL;
    }
}

void delete_node(int position){
    if(size==0) printf("There is nothing to delete");
    else if(size==1){
        size--;
    }
    else if(position==1){
        head=head->next;
    }
    else if(position==size){
        pop_node();
    }
    else {
        int pos=1;
        Node *p=head;
        while(pos!=position-1){
            p=p->next;
            pos++;
        }
        p->next=p->next->next;
        size--;
    }
}

int main(){
    insert_node(3,1);
    insert_node(4,2);
    insert_node(5,3);
    print_list();
    delete_node(2);
    print_list();
    delete_node(size);
    print_list();
}