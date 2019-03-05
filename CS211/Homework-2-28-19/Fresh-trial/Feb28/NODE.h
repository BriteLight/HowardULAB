#ifndef NODE_h
#define NODE_h
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

struct NODE {
    string data;
    struct NODE* next;
    struct NODE* prev;
};

struct FLIGHT {
 int flightNum;
 string destination;
};

class list
{
  private:
  NODE *head, *tail;

  public:
  //list(NODE* head = 0, NODE* tail = 0);
  void push(struct NODE** head_ref, string new_data);
  void appendNode(struct NODE** head_ref, string new_data);

  void insertAfter(struct NODE* prev_node, string new_data);
  void insertBefore(struct NODE** head_ref, struct NODE* next_NODE, string new_data);


  void printList(struct NODE* NODE);
  void deleteNode(struct NODE** head_ref, struct NODE* del);

};
#endif

