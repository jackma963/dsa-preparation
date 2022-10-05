#include <iostream>
using namespace std;
//create list node
struct node{
int data;
node *next;
};
//print List node for linkedlist
void printList(node *head){
  while(head != NULL){
    cout<<head->data;
    head = head->next;
  }
}
//Adding node in List from front
node *push(node *head , int newData){
  node *newNode = new node();
  newNode->data = newData;
  newNode->next = head;
  head = newNode;
  return head;
  
}
//This is driver code
int main() {
  node *head = NULL;
  head = push(head , 12);
  head = push(head , 13);
 head = push(head , 14);
  printList(head);

}
