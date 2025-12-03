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
            printf("is not empty\n");
            return 1;
        } 
        else {
            printf("is empty\n");
            return 0; 
        } 
    }
    
    Node* AddAtBiginning (Node *head){
        Node* NowNode;
        NowNode = (Node*)malloc(sizeof(Node));
        printf("give the Product big\n:");
        scanf("%d%s%d",&NowNode -> Prod.ID, NowNode -> Prod.Name, &NowNode -> Prod.Price);
        if ((IsEmpty(head))==0){
            head = NowNode;
            NowNode -> next = NowNode;
            
        }
        else{
            NowNode -> next = head;
            Node *temp= head->next;
            while((temp -> next) != head){
                temp = temp -> next;
            }
            temp -> next = NowNode;
            head = NowNode;
        }
         return head;
    } 
    Node* AddAtEnd(Node *head){
      struct Node* NowNode = (Node*)malloc(sizeof(struct Node));
      printf("give the Product end\n:");
      scanf("%d%s%d",&NowNode -> Prod.ID, NowNode -> Prod.Name, &NowNode -> Prod.Price);
      if((IsEmpty(head))==0){
          NowNode -> next = NowNode;
          head = NowNode;
      }
      else{
          Node *temp = head->next;
          while((temp -> next)!=head){
              temp = temp -> next;
          }
          temp -> next = NowNode;
          NowNode -> next = head;
      }
      return head;
    }
    void DisPlayList(Node *head) {
        if (IsEmpty(head)==0) {
        printf("\nList is empty\n");
    }
    else{
    Node *temp = head;
    do {
        printf("Product ID : %d ,name : %s,Price : %d\n", temp->Prod.ID,temp->Prod.Name,temp->Prod.Price);
        temp = temp->next;
    } while (temp != head);
    }
    return;
    }
int main (){ Node *head =  CreatEmpty();
     IsEmpty(head);
     head = AddAtBiginning(head);
     AddAtEnd(head);
     AddAtBiginning(head);
     AddAtEnd(head);
     AddAtEnd(head);
     AddAtBiginning(head);
     AddAtEnd(head);
     AddAtEnd(head);
     AddAtBiginning(head);
     AddAtEnd(head);
     IsEmpty(head);
     DisPlayList(head);
     return 0;
}
