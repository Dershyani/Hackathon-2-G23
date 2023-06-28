#include <iostream>
#ifndef CHAPTER_H
#define CHAPTER_H

using namespace std;

class Chapter
{
	private:
		string f_move;
		string c_move;
		string cl_move;
	public:
		void startGame();
		void foodIntro();	
		void countryIntro();
		void celebrationIntro();
		void winGame();
		void loseGame();
};
#endif
