#include <iostream>
#ifndef CELEBRATION_H
#define CELEBRATION_H
#include <string>
using namespace std;

class CelebrationList
{
	private:
		struct ListNode
		{
			string CelebrationName;
			struct ListNode* next;					
		};
		ListNode* head;
	public:
		CelebrationList();
		void appendNode(string);
		bool searchNode(string);
};

#endif
