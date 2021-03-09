#pragma once
#include "InteractiveObj.h"
#include "Entity.h"

class Game
{
private:
	//Start InteractiveObj engine
	InteractiveObj interactiveObj;
	Entity player;
	

	//Private Variables


	//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;

	//Private functions
	void InitVariables();
	void InitWindow();

public:
	//Constructors / Destructors
	Game();
	virtual ~Game();

	//Accessors
	const bool Running() const;

	//Functions
	void PollEvents();
	void Update();
	void Render();
};