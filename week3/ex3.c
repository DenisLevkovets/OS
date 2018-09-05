#include <stdio.h>
#include <malloc.h>


typedef struct Node{
    int value;
    struct Node *pr;
} Node;


Node *current;
int size=0;


void print_list(){
    if(size==0) printf("There is nothing to print");
    else {
        Node *p = current;
        while (p->pr != -1) {
            printf("%d\n", p->value);
            p = p - 2;
        }
        printf("%d\n", p->value);
        printf("___________________________\n");
    }
}

void insert_node(int value){
    Node* node=(Node*)malloc(sizeof(Node));
    node->value=value;
    if(size==0){
        node->pr=-1;
    }
    else{
        node->pr=current;
    }
    current=node;
    size++;
}

void delete_node(){
    if(size==0) printf("There is nothing to delete");
    else {
        current = current->pr;
        size--;
    }
}

int main(){

    insert_node(5);
    delete_node();
    insert_node(7);
    insert_node(6);
    insert_node(8);
    print_list();
    delete_node();
    print_list();

}
