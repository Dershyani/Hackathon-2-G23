#include <iostream>
#include <fstream>
#include <limits>
#include <windows.h>
#include <string>
#include "Food.h"
#include "Country.h"
#include "Celebration.h"
#include "Chapter.h"

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
	cout << "What is your name warrior: "; //enter name
	getline(cin, name);
	cout << "Press any key to continue" << endl;
	cin.ignore();
	cout << "Do you want to play a new game or resume a game(n/r): "; //to start a new game or resume game
	cin >> newOrResume;
	
	
	while(newOrResume == 'n' || newOrResume == 'N')
	{
		//appending words into linked lists
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
		ch.foodIntro(); //from chapter class for the intro
	    f.foodGame(scores); //from food class to play the game
	    category = "food";
	    cout << "Do you want to stop the game? (y/n): "; //to stop the game
	    cin >> stop;
	    if(stop=='y' || stop=='Y')
	    {
	    	//writes to a text file
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
			ch.countryIntro(); //from chapter class for intro
		    c.countryGame(scores); //from country class to play game
		    category = "country";
		    cout << "Do you want to stop the game? (y/n): "; //to stop the game
		    cin >> stop;
		    if(stop=='y' || stop=='Y')
		    {
		    	//writes into a text file
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
				ch.celebrationIntro(); //from chapter class for intro
		    	cl.celebrationGame(scores);	//from celebration class to play the game
		    	category = "celebration";
		    	cout << "Do you want to stop the game? (yes/no): "; //to stop the game
			    cin >> stop;
			    if(stop=='y' || stop=='Y')
			    {
			    	//writes into a text file
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
					cout << "Your total score is: " << scores << endl; //shows score
					if (scores>=25)
					{
						ch.winGame(); //text if won
					}
					else
					{
						ch.loseGame(); //text if lose
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
		cout << "Enter your previous category(food, country, celebration): "; //to find category
		cin >> category;
		if (category=="food"||category=="FOOD"||category=="Food")
		{
			F.open("text.txt");
			while(F)
			{
				getline(F,line); //if same name
				if(line==name)
				{
					cout << "Name: " << line << endl; //output name
					getline(F,line); 
					if(line==category) //if same category
					{
						cout << "Category: " << line << endl; //output category
						getline(F,line);
						cout << "Scores: " << line << endl;
						cout << "Your next kingdom is Country" << endl; //goes to next kingdom
						//country game
						ch.countryIntro();
					    c.countryGame(scores);
					    string category = "country";
					    cout << "Do you want to stop the game? (y/n): "; //stop game
					    cin >> stop;
					    if(stop=='y' || stop=='Y')
					    {
					    	//writes into text file
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
							ch.celebrationIntro(); //from chapter class for intro
					    	cl.celebrationGame(scores);	//from celebration class to play game
					    	string category = "celebration";
					    	cout << "Do you want to stop the game? (y/n): "; // to stop
						    cin >> stop;
						    if(stop=='y' || stop=='Y')
						    {
						    	//writes into text file
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
				if(line==name) //same name
				{
					cout << "Name: " << line << endl; //output name
					getline(F,line);
					if(line==category) //same category
					{
						cout << "Category: " << line << endl; //output category
						getline(F,line);
						cout << "Scores: " << line << endl;
						cout << "Your next kingdom is Celebration" << endl;
						
						//celebration game
						ch.celebrationIntro(); //from chapter class for intro	
					    cl.celebrationGame(scores);	//from celebration class to play game
					    string category = "celebration";
					    cout << "Do you want to stop the game? (y/n): "; //to stop
						cin >> stop;
						if(stop=='y' || stop=='Y')
						{
							//writes into textfile
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
							cout << "Your total score is: " << scores << endl; //score
							if (scores>=25)
							{
								ch.winGame();//text if win
							}
							else
							{
								ch.loseGame();//text if lose
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
				if(line==name) //same name
				{
					cout << "Name: " << line << endl; //output name
					getline(F,line);
					if(line==category) //same category
					{
						cout << "Category: " << line << endl; //output category
						getline(F,line);
						cout << "Scores: " << line << endl;
						cout << "Your total score is: " << scores << endl; //score
						if (scores>=25)
						{
							ch.winGame(); //text if win
						}
						else
						{
							ch.loseGame();//text if lose
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
