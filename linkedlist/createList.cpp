#include <iostream>
using namespace std;

//Linked list Node
struct node{
int data;
node *next;
};

// For printing the linkedlist
void printList(node *head){
  while(head  != NULL){
    cout<<head->data <<endl;
    head = head->next;
  }
}
//This is driver code 
int main() {
node *first = new node();
  node *second = new node();
  node *third = new node();

  first -> data = 12;
  first -> next = second;

  second -> data = 14;
  second -> next = third;

  third -> data = 30;
  third -> next = NULL;
 printList(first);
}
