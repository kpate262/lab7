#include "stdio.h"
#include "iostream"

struct Node{
  int d;
  Node *next;
};

void printL(Node *list){
  Node *p = list;
  while(p != NULL){
    printf("%d\n", p.d);     
    p = p.next;
  }
}


int main(){
  int i = 0;
  Node *list = new Node;
  list->d = i;
  list->next = NULL;

  Node *p = list;
  while(i != 5){
    i++;
    Node *temp = new Node;
    temp->d = i;
    temp->next = NULL;
    p.next = temp;
    p = temp;
    temp = NULL;
    delete(temp);
  }
  printL(list);
  return 0;
}
