#include "NODE.h"
#include <stdio.h>
#include <stdlib.h>
#include<string>
#include <iostream>
using namespace std;

int main()
{
    list Flight;

    struct NODE* head = NULL;

    Flight.push(&head, "Denver");
    Flight.push(&head, "Detroit");
    Flight.push(&head, "Baltimore");
    Flight.push(&head, "Arizona");
    Flight.push(&head, "Chicago");
    Flight.push(&head, "Houston");


    //Prepend Dallas to the list
    Flight.insertBefore(&head, head, "Dallas");
    //Remove Arizona from the list
    Flight.deleteNode(&head, head->next->next->next);
    //Append Kansas City to the list
    Flight.appendNode(&head, "Kansas City");
    //Insert Minneapolis after Kansas City in the list
    Flight.insertAfter(head->next->next->next->next->next->next, "Minneapolis");

    Flight.printList(head);
    //Flight.printListReverse(head);

    //getchar();
    return 0;
}

