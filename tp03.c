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
    //------ creat an empty list
    Node* CreatEmpty (){
     return NULL;
    }
    //------ chek if the list is empty or not
    int IsEmpty(Node *head){ 
        if (head!=NULL){
           //not 
            return 1;
        } 
        else {
            
            return 0; 
        } 
        
        } 
        
     //------ add a now node at the biginning
    Node* AddAtBiginning (Node *head){ int t;
        Node* NowNode;
        NowNode = (Node*)malloc(sizeof(Node));
        printf("\ngive the Product that you wanna add at the biginning:");
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
    //------ add a now node at the end
    Node* AddAtEnd(Node *head){ int t;
      struct Node* NowNode = (Node*)malloc(sizeof(struct Node));
      printf("\ngive the Product that you wanna add at the end:");
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
    //----- writing the list
    void DisPlayList(Node *head) { int t;
    IsEmpty(head);
        if ((IsEmpty(head))==0) {
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
    //------- testing my functing in main
int main (){ int t; Node *head =  CreatEmpty();
     IsEmpty(head);
     head = AddAtBiginning(head);
     AddAtEnd(head);
     AddAtBiginning(head);
     AddAtEnd(head);
     IsEmpty(head);
     AddAtBiginning(head);
     AddAtEnd(head);
     IsEmpty(head);
     DisPlayList(head);
     return 0;
           }
