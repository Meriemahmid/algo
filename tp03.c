#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   typedef struct Product {
        int ID;
        char Name[20];
        int Price;
    }Product;
    
    typedef struct Node {
        Product Prod;
        struct Node *next;
    }Node;
    
    Node* CreatEmpty (){
     return NULL;
    }
    
    int IsEmpty(Node *head){
        if (head!=NULL){
            printf("the list isn't Empty");
            return 1;
        } 
        else {
            printf("the list is Empty");
            return 0;
        } 
    }
    
    Node* AddAtBiginning (Node *head){
        Node* NowNode;
        NowNode = (Node*)malloc(sizeof(Node));
        printf("give the Product:");
        scanf("%d%s%d",&NowNode -> Prod.ID, NowNode -> Prod.Name, &NowNode -> Prod.Price);
        if (IsEmpty(head)==0){
            NowNode -> next = NowNode;
            head = NowNode;
            return NowNode;
        }
        else{
            NowNode -> next = head;
            Node *temp= head->next;
            while((temp -> next) != head){
                temp = temp -> next;
            }
            temp -> next = NowNode;
            return NowNode;
        }
        
    } 
    Node* AddAtEnd(Node *head){
      struct Node* NowNode = (struct Node*)malloc(sizeof(struct Node));
      printf("give the Product:");
      scanf("%d%s%d",&NowNode -> Prod.ID, NowNode -> Prod.Name, &NowNode -> Prod.Price);
      if(IsEmpty(head)==0){
          NowNode -> next = NowNode;
          head = NowNode;
      }
      else{
          Node *temp = head->next;
          while((temp -> next)!=head){
              temp = temp -> next;
          }
          temp -> next = NowNode;
          NowNode -> next = head
      }
      
    }
    void DisPlayList(Node *head) {

    if (IsEmpty(head)==0) {
        printf("\nList is empty\n");
        return;
    }
    else{
    Node *temp = head;
    do {
        printf("%d %s %d\n", temp->Prod.ID,temp->Prod.Name,temp->Prod.Price);
        temp = temp->next;
    } while (temp != head);
    }   
    }
int main (){ 
    
   
}

