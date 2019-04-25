#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "List.h"

//Linked List Ctor
List::List() : head(0), tail(0) { }

//Linked List Dtor
List::~List()
{
  Node* currNode = head;
  Node* nextNode;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->cData;
    delete currNode;
    currNode = nextNode;
  }
}

//Adds a course to the Linked List
void List::add(Course* cPtr)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->cData = cPtr;
  tmpNode->next = 0;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (cPtr->lessThan(currNode->cData))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  tmpNode->next  = currNode;

  if(tmpNode->next == NULL){
    tail = tmpNode;

  }

}

//Prints out the data referenced in each Linked List node
void List::print()
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->cData->print();
    currNode = currNode->next;
  }
  
  cout << "-----------------------------------------------------" << endl;

  cout << "** HEAD: "; 

  head->cData->print();
  
  cout << "** TAIL: ";
  
  tail->cData->print();
  
  return;
}

