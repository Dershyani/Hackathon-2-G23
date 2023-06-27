#include <iostream>
#ifndef COUNTRYL_H
#define COUNTRYL_H
#include <string>
using namespace std;

class CountryList
{
	private:
		struct ListNode
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
