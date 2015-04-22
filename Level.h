#ifndef LEVEL_H
#define LEVEL_H

/*
class definition for level class of each level
*/
#include<iostream>
#include<string>
#include<vector>
#include <SDL2/SDL.h>
#include <SDL/SDL_image.h>
using namespace std;


class Level
{
	public:
		Level(int, int, int, string);
		~Level();
		void print();
		void update();
		void loadLevel(string);
		void loadImages();
		int playLevel(string);
		int menu();
		int charSelectScreen();
		int endScreen();
		
		
		
	private:
		int levelHeight;
		int levelWidth;
		int charSelect;
		int carbLevel;
		int levelNum;
		int floorArray[20][20];
		SDL_Rect squareSpecs;
		string levelFile;
		vector<SDL_Surface * > images;
		vector<SDL_Texture *> textures;
		SDL_Window * gameWindow=NULL;
		SDL_Surface * screen=NULL;
		SDL_Renderer * renderer1=NULL;
		SDL_Surface * bookshelf=NULL;
		SDL_Surface * floor=NULL;
		SDL_Surface * wall=NULL;
		SDL_Texture * Biz=NULL;
		SDL_Surface * bizRaw=NULL;
		SDL_Texture * consum=NULL;
		SDL_Surface * consumRaw=NULL;
		SDL_Texture * recycle=NULL;
		SDL_Surface * recycleRaw=NULL;	
		SDL_Texture * librarian=NULL;
		SDL_Surface * librarianRaw=NULL;
		
		
		
		
		
		bool rendererCheck;
};
			
#endif
