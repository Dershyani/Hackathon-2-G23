#ifndef FOODL_H
#define FOODL_H
#include <iostream>
#include <string>
using namespace std;

class FoodList
{
	private:
		struct ListNode
		{
			string foodName;
			struct ListNode *next;					
		};
		ListNode* head;
	public:
		FoodList();
		void appendNode(string);
		bool searchNode(string);
		void foodGame(int&);
};

#endif
