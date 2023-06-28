#include <iostream>
#ifndef CELEBRATIONL_H
#define CELEBRATIONL_H
#include <string>
using namespace std;

class CelebrationList
{
	private:
		struct ListNode //linked list
		{
			string CelebrationName; //store words
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
