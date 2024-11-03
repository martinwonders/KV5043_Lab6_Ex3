#pragma once
#include <SDL.h>
#include <string>
#include <vector>
#include <iostream>
#include "HtKeyboard.h"

struct Vec2D
{
	float x;
	float y;
};

struct Colour
{
	Uint8 red;
	Uint8 green;
	Uint8 blue;
	Uint8 alpha;
};

//ToDo: Exercise 1: Create an enum named ObjectType with UNKNOWN, PLAYER and BALL 


//ToDo: Exercise 3: Create a struct named GameObject with the following member variables to store the following: Object type, x position,
// y position, width, height, Colour and velocity

struct Window
{
public:
	Window();
	void Run();
	void setName(const std::string& name);
	void setLocation(int x, int y);
	void setDimensions(int width, int height);
	void setWindowColour(Colour &colour);
	//This needs a GameObject struct
	void addGameObject(GameObject& rect);
	bool showFrameRate;
	~Window();
	
private:
	bool Initialise();
	void Render();
	bool isRunning;
	Uint32 tickCount;
	Uint16 frameRate;
	float frameTime;
	Uint16 deltaTimeMillis;
	SDL_Window* window;
	SDL_Renderer* renderer;
	int windowX;
	int windowY;
	int windowWidth;
	int windowHeight;
	std::string windowName;
	Colour windowColour;

	//A vector of Game Objects, needs a GameObject struct
	std::vector<GameObject> GameObjectsToRender;
};