#include <iostream>
using namespace std;
//create list node
struct node{
int data;
node *next;
};
//print list node
void printList(node *head){
  while(head != NULL){
    cout<<head->data;
    head = head->next;
  }
}
//adding node in list from front
node *push(node *head , int newData){
  node *newNode = new node();
  newNode->data = newData;
  newNode->next = head;
  head = newNode;
  return head;
  
}
int main() {
  node *head = NULL;
  head = push(head , 12);
  head = push(head , 13);
 head = push(head , 14);
  printList(head);

}