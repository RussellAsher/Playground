#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <iostream>
using namespace std;
//Simple linked list data structure
template<typename ElementType>
class Node
{
public:
	ElementType data;
	Node* next;
	Node(ElementType input)
	{
		data = input;
		next = NULL;
	}

};
template<typename ElementType>
class LinkedList
{
private:
	Node<ElementType>* root;
	int size;  //The number of elements the linked list currently holds
	ElementType number;
public:
	LinkedList();
	~LinkedList();
	void PushBack(ElementType Element);
	void PopFront();
	void PrintList();
	bool IsEmpty();
	void ReverseList();


};


#endif