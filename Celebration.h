#include <iostream>
#ifndef CELEBRATIONL_H
#define CELEBRATIONL_H
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
		void celebrationGame(int&);
};

#endif
