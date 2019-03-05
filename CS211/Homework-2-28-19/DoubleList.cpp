#include "NODE.h"
#include <stdio.h> 
#include <stdlib.h> 
#include<string>
#include <iostream>
using namespace std;


void list::push(struct NODE** headNode, string newFlight)  
{  
    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));  
    newNode->data = newFlight;  
    newNode->next = (*headNode);  
    newNode->prev = NULL;  

    if ((*headNode) != NULL)  
        (*headNode)->prev = newNode;  
        (*headNode) = newNode;  
}  

void list::appendNode(struct NODE** headNode, string newFlight) { 

    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE)); 
    struct NODE* last = *headNode; 
    newNode->data = newFlight; 
    newNode->next = NULL; 
  
    if (*headNode == NULL) { 
        newNode->prev = NULL; 
        *headNode = newNode; 
        return; 
    } 

    while (last->next != NULL) 
        last = last->next; 
        last->next = newNode; 
        newNode->prev = last; 
  
    return; 
} 

void list::insertAfter(struct NODE* previousNode, string newFlight) { 
  
    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = newFlight; 
    newNode->next = previousNode->next; 
    previousNode->next = newNode; 
    newNode->prev = previousNode; 

    if (newNode->next != NULL) 
        newNode->next->prev = newNode; 
}

void list::insertBefore(struct NODE** headNode, struct NODE* next_NODE, string newFlight)  {  
    
    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));  
    newNode->data = newFlight;  
    newNode->prev = next_NODE->prev;  
    next_NODE->prev = newNode;  
    newNode->next = next_NODE;  

    if (newNode->prev != NULL)  
        newNode->prev->next = newNode;  
    else
        (*headNode) = newNode; 
}  
  
void list::printList(struct NODE* NODE){  
    struct NODE* last;  
    cout<<"Flight Records for HowardAir Flight CSCI0136:"<<endl;
    while (NODE != NULL) {  
        cout<< NODE->data << " to "<< NODE->data<<endl;  
        last = NODE;  
        NODE = NODE->next;  
        //cout<<NODE->data<<endl;
    }  
    cout<<""<<endl; 

    cout<<"Reverse Flight Records for HowardAir Flight CSCI0136:"<<endl;  
    while (last != NULL) {  
        cout<<last->data<< " to ";  
        //last = last->prev;  
        cout<<last->data<<endl; 
    }  
}

void list::deleteNode(struct NODE** headNode, struct NODE* del){ 
    if (*headNode == NULL || del == NULL) 
        return; 
  
    if (*headNode == del) 
        *headNode = del->next; 

    if (del->next != NULL) 
        del->next->prev = del->prev; 

    if (del->prev != NULL) 
        del->prev->next = del->next; 

    free(del); 
    return; 
}

