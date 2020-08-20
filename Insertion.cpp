#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void push(struct node* node,int data){
    struct node* code=(struct node*)malloc(sizeof(struct node));
    code->data=data;
    code->next=head;
    head=code;
}
void printlist(struct node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<endl;
}
void insertattheend(struct node* node,int data){
    struct node* code=(struct node*)malloc(sizeof(struct node));
    code->data=data;
    code->next=NULL;
    struct node* sum=head;
    if(head==NULL){
        head=code;
        return ;
    }
    while(sum->next!=NULL){
        sum=sum->next;
    }
    sum->next=code;
    return ;
}
void after(struct node* node,int data,int position){
    if(position==0){
        struct node* code=(struct node*)malloc(sizeof(struct node));
        code->data=data;
        code->next=head;
        head=code;
    }
    else{
        struct node* code=head;
        struct node* sum=(struct node*)malloc(sizeof(struct node));
        sum->data=data;
        for(int i=0;i<position-2;i++){
            code=code->next;
        }
        sum->next=code->next;
        code->next=sum;
    }
}
int main(){
    #ifndef ONLINE_JUDGE 
  

    // For getting input from input.txt file 
    freopen("ss.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
#endif
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    push(head,6);
    insertattheend(head,10);
    after(head,13,4);
    printlist(head);
    return 0;
    /*
    time complexity
    O(1)-front
    O(n)-end
    O(1)-after
    */

}
