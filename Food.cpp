#include "Food.h"
#include <windows.h>
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

FoodList::FoodList() //constructor
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
	ListNode* nodeptr; //to traverse
	
	if(head==nullptr) //if no linked list
	{
		return false;
	}
	
	nodeptr=head;
	while(nodeptr!=nullptr)
	{
		if(nodeptr->foodName==guess) //if same
		{
			return true; //return true value
		}
		nodeptr = nodeptr->next; //move to next
	}
	return false;
	
}

void FoodList::foodGame(int& scores) //return scores
{
	string a_food[5] = { "rice", "apple","pizza","sandwich","chicken" };
	    char arr_food[10][10];
	    int f_index = 0;
		
		for(int x=5; x>0; x--)
		{
		    for (int i = 0; i < 10; i++) {
		        for (int j = 0; j < 10; j++) {
		            char c;
		            int r;
		            r = rand() % 26;   // generate a random number
		            c = 'a' + r;            // Convert to a character from a-z
		            arr_food[i][j] = c;
		        }
		    }
			
			string output = a_food[f_index];
		    //word search
		    if (a_food[f_index].length() % 2 == 0) {
		        // for even string length case
		        int row = rand() % 10;
		        int col = rand() % 3;
		        for (int i = 0; a_food[f_index][i] != '\0'; i++, col++) {
		            arr_food[row][col] = a_food[f_index][i];
		        }
		    }
		    else {
		        // for odd string length case
		        int row = rand() % 3;
		        int col = rand() % 10;
		        for (int i = 0; a_food[f_index][i] != '\0'; i++, row++) {
		            arr_food[row][col] = a_food[f_index][i];
		        }
		    }
		
		    for (int i = 0; i < 10; i++) {
		        for (int j = 0; j < 10; j++) {
		            cout << " " << arr_food[i][j];
		            Sleep(90);
		        }
		        cout << endl;
		    }
		
		    string guess;
		    int hint;
		    //guessing
	        cout << "Press 1 for Guess" << endl;
		    cout << "Press 2 for see Hint and then guess" << endl;
		    cout << "Enter input		:	";
		    cin >> hint;
		    cout << endl;
		
		    if (hint == 1) {
		        cout << "Enter word you guess         :       ";
		        cin.ignore();  // Ignore any previous newline character in the input buffer
		        getline(cin, guess);
		    }
		    else if (hint == 2) {//if hint
		        cout << "Guessed word in puzzle size is  :       ";
		        cout << output.size();
		        cout << endl;
		        cout << "Enter word you guess         :       ";
		        cin.ignore();  // Ignore any previous newline character in the input buffer
		        getline(cin, guess);
		    }
		    else {
		        cout << "Invalid input	";
		        break;  // Exit the function since the input is invalid
		    }
		
		    cout << endl;
		    if (searchNode(guess)) {
		    // Convert the guessed word and the correct word to lowercase for comparison
		    string lowercaseGuess = guess;
		    string lowercaseOutput = output;
		    transform(lowercaseGuess.begin(), lowercaseGuess.end(), lowercaseGuess.begin(), [](unsigned char c) { return tolower(c); });
		    transform(lowercaseOutput.begin(), lowercaseOutput.end(), lowercaseOutput.begin(), [](unsigned char c) { return tolower(c); });
		
		    if (lowercaseGuess == lowercaseOutput) {
		        cout << "Congratulations! You have guessed the correct word." << endl;
		        scores += 2;
		    } 
				else {
		        cout << "Wrong guess. The correct word was: " << output << endl;
		    	}
			} 	
			else {
		    cout << "Wrong guess. The correct word was: " << output << endl;
			}
			cout << endl;
		    f_index++;
		}
}
