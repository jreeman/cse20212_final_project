/*
Person.cpp
Jeremy Doyle
cse20210
March 24, 2015
purpose: Function definitions for Person class
*/

#include"Person.h"
using namespace std;

Person::Person(){
	speed=1;
	Width(1);
	Height(1);
	position(0,0);
	srand(unsigned(time(NULL)));
}

void Person::move(char direction){
	
}

int Person::getSpeed(){
	return speed;
}

void Person::setSpeed(int newSpeed){
	speed = newSpeed;
}

int Person::getX(){
	return x;
}

int Person::getY(){
	return y;
}

void Person::position(int Xcoord, int Ycoord){
	int x=Xcoord;
	int y=Ycoord;
}

int Person::getWidth(){
	return width;
}

int Person::getHeight(){
	return height;
}

void Person::Height(int h){
	height=h;
}

void Person::Width(int w){
	width=w;
}

void Person::erase(){
	isTextureLoaded=0;
}

void Person::random(){
	int n=rand()%4;
	if (n==1){
		y++;
	}
	if (n==2){
		y--;
	}
	if (n==3){
		x++;
	}
	if (n==4){
		x--;
	}
}

void Person::drinking(){
	while(1){
			
	}
}
