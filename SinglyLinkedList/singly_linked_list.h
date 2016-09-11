#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

//The list node
typedef struct SinglyLinkedListNode
{
	int value;
	SinglyLinkedListNode* next;
}SinglyLinkedListNode;

/**
*The list object. Holds the head of the list and a counter
*/
typedef struct SinglyLinkedList
{
	SinglyLinkedListNode* head;
	int count;
}SinglyLinkedList;

/**
*Creates a singly linked list
*@returns a pointer to a singly linked list
*/
SinglyLinkedList* singlyLnkedListCreate();

/**
*Destroys a list by freeing any memory associated with it
*@param list: A pointer to the list
*/
void singlyLinkedListDestroy(SinglyLinkedList* list);

/**
*Inserts a new node at the start of the list
*@param list: A pointer to the list
*@param value: The value that will be saved to the new node
*/
void singlyLinkedListInsertAtStart(SinglyLinkedList* list, int value);

/**
*@param list: A pointer to the list
*@param value: The value that will be saved in the new node
*/
void singlyLinkedListInsertAtEnd(SinglyLinkedList* list, int value);

/**
* In
*/
void singlyLinkedListInsertAfter(SinglyLinkedList* list, SinglyLinkedListNode* savedNode, SinglyLinkedListNode* node)
#endif