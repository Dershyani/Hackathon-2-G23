#include <iostream>
#include <fstream>
#include <limits>
#include <windows.h>
#include <string>
#include "FoodL.h"
#include "CountryL.h"
#include "CelebrationL.h"
#include "ChapterL.h"

using namespace std;

int main()
{
	ofstream of;
	fstream F;
	char newOrResume, stop;
	string name, category, line;
	FoodList f;
	CountryList c;
	CelebrationList cl;
	Chapter ch;
	int hint;
	int scores = 0;
	string output;
	
	//start game
	ch.startGame();
	cout << "What is your name warrior: ";
	getline(cin, name);
	cout << "Press any key to continue" << endl;
	cin.ignore();
	cout << "Do you want to play a new game or resume a game(n/r): ";
	cin >> newOrResume;
	
	
	while(newOrResume == 'n' || newOrResume == 'N')
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
		c.appendNode("japan");
		c.appendNode("china");
		
		//celebration
		cl.appendNode("raya");
		cl.appendNode("easter");
		cl.appendNode("holi");
		cl.appendNode("vesak");
		cl.appendNode("diwali");
		
		//food game
		ch.foodIntro();
	    f.foodGame(scores);
	    category = "food";
	    cout << "Do you want to stop the game? (y/n): ";
	    cin >> stop;
	    if(stop=='y' || stop=='Y')
	    {
	    	of.open("text.txt", ios::app);
	    	of << name << endl;
	    	of << category << endl;
	    	of << scores << endl;
	    	cout << "Progress saved.";
	    	of.close();
	    	break;	    	
		}
		else if(stop=='n' || stop=='N')
		{
			//country game
			ch.countryIntro();
		    c.countryGame(scores);
		    category = "country";
		    cout << "Do you want to stop the game? (y/n): ";
		    cin >> stop;
		    if(stop=='y' || stop=='Y')
		    {
		    	of.open("text.txt", ios::app);
		    	of << name << endl;
		    	of << category << endl;
		    	of << scores << endl;
		    	cout << "Progress saved.";
		    	of.close();
		    	break;	    	
			}
			else if (stop=='n' || stop=='N')
			{
				//celebration game
				ch.celebrationIntro();
		    	cl.celebrationGame(scores);	
		    	category = "celebration";
		    	cout << "Do you want to stop the game? (yes/no): ";
			    cin >> stop;
			    if(stop=='y' || stop=='Y')
			    {
			    	of.open("text.txt", ios::app);
			    	of << name << endl;
			    	of << category << endl;
			    	of << scores << endl;
			    	cout << "Progress saved.";
			    	of.close();
			    	break;	    	
				}
				else if (stop=='n' || stop=='N')
				{
					cout << "Your total score is: " << scores << endl;
					if (scores>=25)
					{
						ch.winGame();
					}
					else
					{
						ch.loseGame();
					}
					break;
				}
				else
				{
					cout << "Invalid input";
					break;
				}
			}
			else 
			{
				cout << "Invalid input";
				break;
			}			
		}
		else
		{ 
			cout << "Invalid input";
			break;
		}
	}
	
	//resume game
	while(newOrResume=='r' || newOrResume=='R')
	{
		cout << "Enter your previous category(food, country, celebration): ";
		cin >> category;
		if (category=="food"||category=="FOOD"||category=="Food")
		{
			F.open("text.txt");
			while(F)
			{
				getline(F,line);
				if(line==name)
				{
					cout << "Name: " << line << endl;
					getline(F,line);
					if(line==category)
					{
						cout << "Category: " << line << endl;
						getline(F,line);
						cout << "Scores: " << line << endl;
						cout << "Your next kingdom is Country" << endl;
						//country game
						ch.countryIntro();
					    c.countryGame(scores);
					    string category = "country";
					    cout << "Do you want to stop the game? (y/n): ";
					    cin >> stop;
					    if(stop=='y' || stop=='Y')
					    {
					    	of.open("text.txt", ios::app);
					    	of << name << endl;
					    	of << category << endl;
					    	of << scores << endl;
					    	cout << "Progress saved.";
					    	of.close();
					    	break;	    	
						}
						else if (stop=='n' || stop=='N')
						{
							//celebration game
							ch.celebrationIntro();
					    	cl.celebrationGame(scores);	
					    	string category = "celebration";
					    	cout << "Do you want to stop the game? (y/n): ";
						    cin >> stop;
						    if(stop=='y' || stop=='Y')
						    {
						    	of.open("text.txt", ios::app);
						    	of << name << endl;
						    	of << category << endl;
						    	of << scores << endl;
						    	cout << "Progress saved.";
						    	of.close();
						    	break;	    	
							}
							else if (stop=='n' || stop=='N')
							{
								break;
							}
							else
							{
								cout << "Invalid input";
								break;
							}
						}
						else 
						{
							cout << "Invalid input";
							break;
						}			
					}
				}
				
			}
			F.close();
		}
		else if(category=="country"||category=="COUNTRY"||category=="Country")
		{
			F.open("text.txt");
			while(F)
			{
				getline(F,line);
				if(line==name)
				{
					cout << "Name: " << line << endl;
					getline(F,line);
					if(line==category)
					{
						cout << "Category: " << line << endl;
						getline(F,line);
						cout << "Scores: " << line << endl;
						cout << "Your next kingdom is Celebration" << endl;
						
						//celebration game
						ch.celebrationIntro();
					    cl.celebrationGame(scores);	
					    string category = "celebration";
					    cout << "Do you want to stop the game? (y/n): ";
						cin >> stop;
						if(stop=='y' || stop=='Y')
						{
						of.open("text.txt", ios::app);
						of << name << endl;
						of << category << endl;
						of << scores << endl;
						cout << "Progress saved.";
						of.close();
						break;	    	
						}
						else if (stop=='n' || stop=='N')
						{
							cout << "Your total score is: " << scores << endl;
							if (scores>=25)
							{
								ch.winGame();
							}
							else
							{
								ch.loseGame();
							}
							break;
						}
						else
						{
							cout << "Invalid input";
							break;
						}
					}			
				}
			}
			F.close();
		}
		else if(category=="celebration"||category=="CELEBRATION"||category=="Celebration")
		{
			F.open("text.txt");
			while(F)
			{
				getline(F,line);
				if(line==name)
				{
					cout << "Name: " << line << endl;
					getline(F,line);
					if(line==category)
					{
						cout << "Category: " << line << endl;
						getline(F,line);
						cout << "Scores: " << line << endl;
						cout << "Your total score is: " << scores << endl;
						if (scores>=25)
						{
							ch.winGame();
						}
						else
						{
							ch.loseGame();
						}
					}
				}
			}
			F.close();
		}
		else
		{
			cout << "Invalid input";
			break;
		}			
	}
	
	return 0;
}
