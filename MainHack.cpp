#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "Food.h"
#include "Country.h"
#include "Celebration.h"

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
	int hint;
	int scores = 0;
	string output;
	
	//start game
	cout << "What is your name warrior: ";
	cin.ignore();
	getline(cin, name);
	cout << "Do you want to play a new game(y) or resume a game(n): ";
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
		c.appendNode("japan");
		c.appendNode("china");
		
		//celebration
		cl.appendNode("raya");
		cl.appendNode("christmas");
		cl.appendNode("deepavali");
		cl.appendNode("ponggal");
		cl.appendNode("thaipusam");
		
		//food game
	    f.foodGame(scores);
	    category = "food";
	    cout << "Do you want to stop the game? (y/n): ";
	    cin >> stop;
	    if(stop=='Y' || stop=='y')
	    {
	    	of.open("text.txt", ios::app);
	    	of << name << endl;
	    	of << category << endl;
	    	of << scores << endl;
	    	cout << "Progress saved.";
	    	of.close();
	    	break;	    	
		}
		else if(stop=='N' || stop=='n')
		{
			//country game
		    c.countryGame(scores);
		    category = "country";
		    cout << "Do you want to stop the game? (y/n): ";
		    cin >> stop;
		    if(stop=='Y' || stop=='y')
		    {
		    	of.open("text.txt", ios::app);
		    	of << name << endl;
		    	of << category << endl;
		    	of << scores << endl;
		    	cout << "Progress saved.";
		    	of.close();
		    	break;	    	
			}
			else if (stop=='N' || stop=='n')
			{
				//celebration game
		    	cl.celebrationGame(scores);	
		    	category = "celebration";
		    	cout << "Do you want to stop the game? (y/n): ";
			    cin >> stop;
			    if(stop=='Y' || stop=='y')
			    {
			    	of.open("text.txt", ios::app);
			    	of << name << endl;
			    	of << category << endl;
			    	of << scores << endl;
			    	cout << "Progress saved.";
			    	of.close();
			    	break;	    	
				}
				else if (stop=='N' || stop=='n')
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
		else
		{ 
			cout << "Invalid input";
			break;
		}
	}
	
	//resume game
	while(newOrResume=='n' || newOrResume=='N')
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
					    c.countryGame(scores);
					    string category = "country";
					    cout << "Do you want to stop the game? (y/n): ";
					    cin >> stop;
					    if(stop=='Y' || stop=='y')
					    {
					    	of.open("text.txt", ios::app);
					    	of << name << endl;
					    	of << category << endl;
					    	of << scores << endl;
					    	cout << "Progress saved.";
					    	of.close();
					    	break;	    	
						}
						else if (stop=='N' || stop=='n')
						{
							//celebration game
					    	cl.celebrationGame(scores);	
					    	string category = "celebration";
					    	cout << "Do you want to stop the game? (y/n): ";
						    cin >> stop;
						    if(stop=='Y' || stop=='y')
						    {
						    	of.open("text.txt", ios::app);
						    	of << name << endl;
						    	of << category << endl;
						    	of << scores << endl;
						    	cout << "Progress saved.";
						    	of.close();
						    	break;	    	
							}
							else if (stop=='N' || stop=='n')
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
					    cl.celebrationGame(scores);	
					    string category = "celebration";
					    cout << "Do you want to stop the game? (y/n): ";
						cin >> stop;
						if(stop=='Y' || stop=='y')
						{
						of.open("text.txt", ios::app);
						of << name << endl;
						of << category << endl;
						of << scores << endl;
						cout << "Progress saved.";
						of.close();
						break;	    	
						}
						else if (stop=='N' || stop=='n')
						{
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
	cout << "Your total score is: " << scores << endl;
	
	if (scores>=25)
	{
		cout << "You have scored enough to save the princess!! Congratulations " << name << ", you're a true warrior!" << endl;
		cout << "The doors to the tower is now opened." << endl;
		cout << "Go back with the princess and have a good rest champ!" << endl;;
	}
	else
	{
		cout << "OH NOO!!! You score is insufficient to save the princess." << endl;
		cout << "The doors to the tower is now locked. You need to leave without the princess." << endl;
	}
	return 0;
}
