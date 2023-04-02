#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printData(struct node *myNode){
    while(myNode!=NULL){
        printf("data: %d\n",myNode->data);
        myNode=myNode->next;
    }
}
 void insertAfter(struct node *prev_node, int datafor_newnode) {
    if(prev_node==NULL){
        printf("The previous node is NULL");
        return ; //to stop function, we use "return"  To stop program, we use "exit(0)"
    }  
    struct node *new_node=static_cast<node *>(malloc(sizeof(struct node)));
new_node->data=datafor_newnode;
new_node->next=prev_node->next; //၁၅ pee yin ၂၀ lrr poh
prev_node->next=new_node; // ၁၀ pee yin ၁၅ lrr poh


}

bool  searchingData(struct node *myNode,int data){ // if u use bool fun , we can get the result true for 1 & flase for 0
 if (myNode==NULL){
    printf("Node is NULL");
    return 0 ;
 }
 while(myNode!=NULL){
if (myNode->data== data){
return 1;
 } else{
  myNode= myNode->next;
 }
}
return 0;
}


void atBeginning(struct node **myNode, int newData){

struct node *beginNode=(struct node*)(malloc(sizeof(struct node)));

beginNode->data=newData;
beginNode->next=(*myNode);
(*myNode)=beginNode;
}

/*struct node* atBeginning(struct node *myNode,int newData){
    //                                     TYPE                       SIZE
                struct node *beginNode=(struct node*)(malloc(sizeof(struct node)));
//we can use static_cast<node *>       ...............  

beginNode->data=newData;
beginNode->next=myNode;
myNode=beginNode;
return beginNode;



}*/


int main(){
struct node *head;
struct node *one=NULL;
struct node *two=NULL;
struct node *three=NULL;
 one =static_cast<node *>(malloc(sizeof(struct node)));
two =static_cast<node *>(malloc(sizeof(struct node)));
three =static_cast<node *>(malloc(sizeof(struct node)));

one->data=10;
two->data=20;
three->data=30;

one->next=two;
two->next=three;
three->next=NULL;

printData(one);
insertAfter(one, 15);

printf("\nAfter inserted new node:\n");
printData(one);
bool result=searchingData(one,44); //  since this is not void fun , we should take variable to recieve the return value
printf("Result :%d",result);
if(result==1){
    printf("\nwe found!");
    }
else{
    printf("\nNot found!\n");
}
atBeginning(&one,5);
printData(one);
//struct node *newLL= atBeginning(one , 5);
//printData(newLL);
    return 0;
}