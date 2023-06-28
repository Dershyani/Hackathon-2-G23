#include "ChapterL.h"
#include <iostream>
#include <conio.h>

using namespace std;

void Chapter :: startGame()
{
	cout << "**********************************************************************************************" << endl;
	cout << "BOOOOOMMMMMMMMMM!!!!!" << endl;
	cout << "All the lights went off. It is totally dark in the palace right now." << endl;
	cout << "Press any key to listen to what the royal staffs are saying" << endl;
	cout << "**********************************************************************************************\n" << endl;
	
	getch();
	cout << "Staff 1: What was that noice?" << endl;
	cout << "Staff 2: GUARDSS!!!! THE PRINCESS IS MISSINGGG!!!!!" << endl;
	
	cout << "\n**********************************************************************************************" << endl;
	cout << "Everyone had a heart attack upon hearing the news." << endl;
	cout << "The only heir to the country is now missing and the KING and QUEEN are worried" << endl;
	cout << "Press any key to know what the KING has to say" << endl;
	cout << "**********************************************************************************************\n" << endl;
	
	getch();	
	cout << "KING: The princess is now missing! Whoever gets the princess will be given the lands in the South direction!" << endl;
	cout << "Staff 3: My lord. I found a clue under the princess's bed regarding her location" << endl;
	cout << "KING: Make sure everyone in this kingdom to have this clue and start finding my daughter." << endl; 
	
	cout << "\n**********************************************************************************************" << endl;
	cout << "You have heard about this news. You would like to tackle the challenge and save the princess." << endl;
	cout << "Are you ready to face the challenge and retrieve the princess??" << endl;
	cout << "Because it will definitely be a very veryyyy difficult task. But don't worry, I'll be here to help you." <<  endl;
	cout << "Just make sure that the scores you obtain are enough to save the princess at last." << endl;
	cout << "Press any key to start the game." << endl;
	cout << "**********************************************************************************************\n" << endl;
	getch();
}

void Chapter :: foodIntro()
{
	cout << "\n**************************************** FOOD KINGDOM ****************************************" << endl;
	cout << "You are now in the FOOD KINGDOM!" << endl;
	cout << "Be careful warrior as it is a kingdom full of food. DO NOT BE TEMPTED WITH IT!" << endl;
	cout << "FOOD KINGDOM is known to manipulate whoever enters with its delicious aromatic food halucinations" << endl;
	cout << "Just remind yourself that it is all a halucination... It is not the reality." << endl;
	cout << "**********************************************************************************************\n" << endl;
	
	cout << "**********************************************************************************************" << endl;
	cout << "Can you see it warrior?? Can you see the beautiful table that is served with 5 different food word search?" << endl;
	cout << "That is your first challenge my dear friend." << endl;
	cout << "Press any key to move further to the table warrior. Take a deep breath and move forward." << endl;
	cout << "**********************************************************************************************\n" << endl;
	getch();
	
	cout << "**********************************************************************************************" << endl;
	cout << "Now your job is to find all 5 food that are hidden in each word search. All the best warrior!!" << endl;
	cout << "Don't forget about the scores warrior.." << endl;
	cout << "Click a key to finish up your first task" << endl;
	cout << "**********************************************************************************************\n" << endl;
	getch();
}

void Chapter::countryIntro()
{
	cout << "\nCONGRATS warrior!! You have successfully finished the task in FOOD KINGDOM." << endl;
	cout << "Now lets move on to the next kingdom. This kingdom is high on the mountain." << endl;
	cout << "Let's climb this mountain warrior. Press any key to proceed climbing." << endl;
	getch();
	
	cout << "\n************************************** COUNTRY KINGDOM ***************************************" << endl;
	cout << "You are now in the COUNTRY KINGDOM!" << endl;
	cout << "You have to be extra careful here warrior because this kingdom has great sculptures and buildings that are breathtaking!" << endl;
	cout << "WOW!! Look at your left! What an amazing design........................................" << endl;
	cout << "Press any key to stop daydreaming" << endl;
	cout << "**********************************************************************************************\n" << endl;
	getch();
	
	cout << "**********************************************************************************************" << endl;
	cout << "OH MY LORD!! I am so sorry warrior. Even I couldn't resist the mind boggling designs of the buildings" << endl;
	cout << "Look over there my friend. The pyramid over there has some hieroglyphs that look familiar, aren't they?" << endl;
	cout << "YES!! YES!! That is definitely your next challenge my dear friend." << endl;
	cout << "Its 5 word search that contain the name of 5 different countries. Try to earn scores as high as possible." << endl;	
	cout << "Now your job is to find all 5 countries that are hidden in each word search. You can do this warrior!!" << endl;
	cout << "Well, you can start finding the first word by clicking on any keys warrior" << endl;
	cout << "**********************************************************************************************\n" << endl;
	cout << getch();
}

void Chapter::celebrationIntro()
{
	cout << "\nYOU ARE ABOUT THERE WARRIOR!! You have successfully finished the task in COUNTRY KINGDOM." << endl;
	cout << "Now lets move on to the next kingdom. This final kingdom is on the other side of the sea." << endl;
	cout << "Are you ready to conquer the largest ocean around, The Solar Ocean? Press any key to cross the sea." << endl;
	getch();
	
	cout << "\n*********************************** CELEBRATION KINGDOM **************************************" << endl;
	cout << "You are now in the final kingdom, CELEBRATION KINGDOM!" << endl;
	cout << "The princess is just right up there in the tower. Do you see the tower?" << endl;
	cout << "Press any key if you can see the tower in front of you." << endl;
	cout << "**********************************************************************************************\n" << endl;
	getch();
	
	cout << "**********************************************************************************************" << endl;
	cout << "The final kingdom is the hardest of all warrior!" << endl;
	cout << "This kingdom is filled with laughter, colours, firecrackers and tears of joy" << endl;
	cout << "The whole kingdom is crowded and you can't even walk...." << endl;
	cout << "BOOMM!!" << endl;
	cout << "OH MY! Are you alright my friend.. Here you go, take my hand." << endl;
	cout << "All your senses should be heightened here because it is not easy to travel in this kingdom." << endl;
	cout << "**********************************************************************************************\n" << endl;
	
	cout << "**********************************************************************************************" << endl;
	cout << "Look the small girl wants to talk to you. Listen carefully to what she says." << endl;
	cout << "It could be some clue" << endl;
	cout << "Girl: Are you here for the princess? Well, before getting to her, there is a task that you need to finish." << endl;
	cout << "Girl: Here you go. There are 5 word search in these presents. Each contain a celebration." << endl;	
	cout << "Girl: You have to find the words and make sure your scores are enough to save the princess... BYE!!!" << endl;
	cout << "What are you waiting for warrior?? Press any key to complete the task and save the princess!" << endl;
	cout << "**********************************************************************************************\n" << endl;
	getch();
}

void Chapter::winGame()
{
	cout << "\n**********************************************************************************************" << endl;
	cout << "You have scored enough to save the princess!! Congratulations, you're a true warrior!" << endl;
	cout << "The doors to the tower is now opened." << endl;
	cout << "**********************************************************************************************\n" << endl;
	
	cout << "**********************************************************************************************" << endl;
	cout << "You are back to your kingdom with the princess! The KING is very happy with your achievement." << endl;
	cout << "KING: Here you go warrior, the lands in South of the kingdom as I promised to you." << endl;
	cout << "**********************************************************************************************\n" << endl;
	
}

void Chapter::loseGame()
{
	cout << "\n**********************************************************************************************" << endl;
	cout << "OH NOO!!! You score is insufficient to save the princess." << endl;
	cout << "The doors to the tower is now locked. You need to leave without the princess." << endl;
	cout << "**********************************************************************************************\n" << endl;
	
	cout << "**********************************************************************************************" << endl;
	cout << "You are back to your kingdom BUT without the princess. The KING is very veryy upset with you." << endl;
	cout << "KING: You have dissappointed the whole kingdom!! GUARDSS!!!!" << endl;
	cout << "KING: BRING THIS TRAITOR TO THE DUNGEON!!!!!" << endl;
	cout << "**********************************************************************************************\n" << endl;
}
