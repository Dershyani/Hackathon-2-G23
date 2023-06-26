#include <iostream>
#include <windows.h>
#include <string>
#include "Food.h"
#include "Country.h"
#include "Celebration.h"

using namespace std;

int main()
{
	char newOrResume;
	FoodList f;
	CountryList c;
	CelebrationList cl;
	int hint;
	int scores = 0;
	string output;
	
	//start game
	cout << "Do you want to play a game(y/n): ";
	cin>>newOrResume;
	
	while(newOrResume=='y' || newOrResume=='Y')
	{
		//food
		f.appendNode("apple");
		f.appendNode("chicken");
		f.appendNode("pizza");
		f.appendNode("rice");
		f.appendNode("sandwich");
		
		//country
		c.appendNode("malaysia");
		c.appendNode("america");
		c.appendNode("india");
		c.appendNode("singapore");
		c.appendNode("china");
		
		//celebration
		cl.appendNode("raya");
		cl.appendNode("christmas");
		cl.appendNode("deepavali");
		cl.appendNode("ponggal");
		cl.appendNode("thaipusam");
		
		//food game
	    string a_food[5] = { "apple","pizza","sandwich","chicken","rice" };
	    char arr_food[10][10];
	
		for(int b=0; b<5; b++)
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
		
		    int index = rand() % 5;
		    output = a_food[index];
		
		    if (a_food[index].length() % 2 == 0) {
		        // for even string length case
		        int row = rand() % 10;
		        int col = rand() % 3;
		        for (int i = 0; a_food[index][i] != '\0'; i++, col++) {
		            arr_food[row][col] = a_food[index][i];
		        }
		    }
		    else {
		        // for odd string length case
		        int row = rand() % 3;
		        int col = rand() % 10;
		        for (int i = 0; a_food[index][i] != '\0'; i++, row++) {
		            arr_food[row][col] = a_food[index][i];
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
		    else if (hint == 2) {
		        cout << "Guessed word in puzzle size is  :       ";
		        cout << output.size();
		        cout << endl;
		        cout << "Enter word you guess         :       ";
		        cin.ignore();  // Ignore any previous newline character in the input buffer
		        getline(cin, guess);
		    }
		    else {
		        cout << "Invalid input	";
		        return 0;  // Exit the function since the input is invalid
		    }
		
		    cout << endl;
		    if (f.searchNode(guess)) 
			{
		        cout << "Congratulations! You have guessed the correct word." << endl;
		        scores += 2;
		    }
		    else {
		        cout << "Wrong guess. The correct word was: " << output << endl;
		    }
		    cout << endl;
		}
		
		//country game
	    string a_country[5] = { "malaysia","america","singapore","india","china" };
	    char arr_country[10][10];
	
		for(int b=0; b<5; b++)
		{
		    for (int i = 0; i < 10; i++) {
		        for (int j = 0; j < 10; j++) {
		            char c;
		            int r;
		            r = rand() % 26;   // generate a random number
		            c = 'a' + r;            // Convert to a character from a-z
		            arr_country[i][j] = c;
		        }
		    }
		
		    int index = rand() % 5;
		    output = a_country[index];
		
		    if (a_country[index].length() % 2 == 0) {
		        // for even string length case
		        int row = rand() % 10;
		        int col = rand() % 3;
		        for (int i = 0; a_country[index][i] != '\0'; i++, col++) {
		            arr_country[row][col] = a_country[index][i];
		        }
		    }
		    else {
		        // for odd string length case
		        int row = rand() % 3;
		        int col = rand() % 10;
		        for (int i = 0; a_country[index][i] != '\0'; i++, row++) {
		            arr_country[row][col] = a_country[index][i];
		        }
		    }
		
		    for (int i = 0; i < 10; i++) {
		        for (int j = 0; j < 10; j++) {
		            cout << " " << arr_country[i][j];
		            Sleep(90);
		        }
		        cout << endl;
		    }
		
		    string guess;
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
		    else if (hint == 2) {
		        cout << "Guessed word in puzzle size is  :       ";
		        cout << output.size();
		        cout << endl;
		        cout << "Enter word you guess         :       ";
		        cin.ignore();  // Ignore any previous newline character in the input buffer
		        getline(cin, guess);
		    }
		    else {
		        cout << "Invalid input	";
		        return 0;  // Exit the function since the input is invalid
		    }
		
		    cout << endl;
		    if (c.searchNode(guess)) 
			{
		        cout << "Congratulations! You have guessed the correct word." << endl;
		        scores += 2;
		    }
		    else {
		        cout << "Wrong guess. The correct word was: " << output << endl;
		    }
		    cout << endl;
		}
		
		//celebration game
	    string a_celebration[5] = { "raya","deepavali","ponggal","thaipusam","christmas" };
	    char arr_celebration[10][10];
	
		for(int b=0; b<5; b++)
		{
		    for (int i = 0; i < 10; i++) {
		        for (int j = 0; j < 10; j++) {
		            char c;
		            int r;
		            r = rand() % 26;   // generate a random number
		            c = 'a' + r;            // Convert to a character from a-z
		            arr_celebration[i][j] = c;
		        }
		    }
		
		    int index = rand()%5;
		    output = a_celebration[index];
		
		    if (a_celebration[index].length() % 2 == 0) {
		        // for even string length case
		        int row = rand() % 10;
		        int col = rand() % 3;
		        for (int i = 0; a_celebration[index][i] != '\0'; i++, col++) {
		            arr_celebration[row][col] = a_celebration[index][i];
		        }
		    }
		    else {
		        // for odd string length case
		        int row = rand() % 3;
		        int col = rand() % 10;
		        for (int i = 0; a_celebration[index][i] != '\0'; i++, row++) {
		            arr_celebration[row][col] = a_celebration[index][i];
		        }
		    }
		
		    for (int i = 0; i < 10; i++) {
		        for (int j = 0; j < 10; j++) {
		            cout << " " << arr_celebration[i][j];
		            Sleep(90);
		        }
		        cout << endl;
		    }
		
		    string guess;
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
		    else if (hint == 2) {
		        cout << "Guessed word in puzzle size is  :       ";
		        cout << output.size();
		        cout << endl;
		        cout << "Enter word you guess         :       ";
		        cin.ignore();  // Ignore any previous newline character in the input buffer
		        getline(cin, guess);
		    }
		    else {
		        cout << "Invalid input	";
		        return 0;  // Exit the function since the input is invalid
		    }
		
		    cout << endl;
		    if (cl.searchNode(guess)) 
			{
		        cout << "Congratulations! You have guessed the correct word." << endl;
		        scores += 2;
		    }
		    else {
		        cout << "Wrong guess. The correct word was: " << output << endl;
		    }
		    cout << endl;
		}
		
	}
	
	cout << "Your total score is: " << scores << endl;
	return 0;
}
