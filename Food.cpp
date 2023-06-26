#include "Food.h"
#include <iostream>
using namespace std;

FoodList::FoodList()
{
	head = nullptr;
}

void FoodList::appendNode(string word)
{
	ListNode *newNode;//for a new node
	ListNode *nodePtr;//to check if it is nullptr(it will move)
	
	newNode = new ListNode;
	newNode->foodName = word; //putting the word into foodName
	newNode->next = nullptr;
	
	//to make the value we inserted now as the 1st value
	if(!head) //head is assigned as nullptr
		head = newNode;
	else //otherwise, insert newNode at the end;
	{
		nodePtr = head; 
		
		//to find last node
		while(nodePtr->next)//till it exists
		{
			nodePtr = nodePtr->next;//put the next value into nodePtr
			//this will make it move
		}
		
		//insert newNode as last node 
		//the next of the last node will be newNode
		nodePtr->next = newNode;
	}
}

bool FoodList::searchNode(string guess)
{
	ListNode* nodeptr;
	
	if(head==nullptr)
	{
		return false;
	}
	
	nodeptr=head;
	while(nodeptr!=nullptr)
	{
		if(nodeptr->foodName==guess)
		{
			return true;
		}
		nodeptr = nodeptr->next;
	}
	return false;
	
}
