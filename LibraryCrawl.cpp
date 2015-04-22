/*
Library Crawl Game interface

Jack Klamer

4/7/2015
*/


#include <SDL2/SDL.h>
#include <SDL/SDL_image.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<stdio.h>
#include<vector>
#include<time.h>
#include "Level.h"

using namespace std;

const int SCREEN_WIDTH = 1200;
const int SCREEN_HEIGHT = 700;

const string LEVEL1("./Levels/Level1.txt");

int main( int argc, char* args[])
{

	
	Level gameLevel(1,1,1,LEVEL1);
	
	//gameLevel.print();
	SDL_Delay(5000);
	
	return EXIT_SUCCESS;
}





	
