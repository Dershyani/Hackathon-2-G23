#include <iostream>
#ifndef COUNTRYL1_H
#define COUNTRYL1_H
#include <string>
using namespace std;

class CountryList
{
	private:
		struct ListNode //linked list
		{
			string CountryName;
			struct ListNode *next;					
		};
		ListNode* head;
	public:
		CountryList();
		void appendNode(string);
		bool searchNode(string);
		void countryGame(int&);
};

#endif
