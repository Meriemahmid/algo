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
     Node *head = NULL;
     return head;
    }
    
    int IsEmpty(Node *head){ int chk;
        if (head!=NULL){
           head = NULL;
            return chk=1;
        } 
        else {
            return chk=0; 
        } 
    }
    
    Node* AddAtBiginning (Node *head){
        Node* NowNode;
        NowNode = (Node*)malloc(sizeof(Node));
        printf("give the Product big:");
        scanf("%d%s%d",&NowNode -> Prod.ID, NowNode -> Prod.Name, &NowNode -> Prod.Price);
        if ((IsEmpty(head))==0){
            head = NowNode;
            NowNode -> next = NowNode;
            return NowNode;
        }
        else{
            NowNode -> next = head;
            Node *temp= head->next;
            while((temp -> next) != head){
                temp = temp -> next;
            }
            temp -> next = NowNode;
            head = NowNode;
            return NowNode;
        }
        
    } 
    Node* AddAtEnd(Node *head){
      struct Node* NowNode = (Node*)malloc(sizeof(struct Node));
      printf("give the Product end:");
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
      return NowNode;
    }
    void DisPlayList(Node *head) {

    if (IsEmpty(head)==0) {
        printf("\nList is empty\n");
        return;
    }
    else{
    Node *temp = head;
    do {
        printf("Product ID : %d ,name : %s,Price : %d\n", temp->Prod.ID,temp->Prod.Name,temp->Prod.Price);
        temp = temp->next;
    } while (temp != head);
    }   
    }
int main (){ Node *head;
     CreatEmpty();
     IsEmpty(head);
     AddAtBiginning(head);
     AddAtEnd(head);
     DisPlayList(head);
     return 0;
}
