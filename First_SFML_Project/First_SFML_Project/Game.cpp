#include "Game.h"

//Private functions
void Game::InitVariables()
{
	//window
	this->window = nullptr;

}

void Game::InitWindow()
{
	this->videoMode.width = 800;
	this->videoMode.height = 600;
	this->window = new sf::RenderWindow(this->videoMode, "Super-Mario", sf::Style::Titlebar | sf::Style::Close);
}

//Constructors / Destructors
Game::Game()
{
	this->InitVariables();
	this->InitWindow();
}

Game::~Game()
{
	delete this->window;
}


//Accessors
const bool Game::Running() const // I don't know why I have to use 'const'
{
	return this->window->isOpen();
}

//Public Functions
void Game::PollEvents()
{
	//Event polling
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

void Game::Update()
{
	this->PollEvents();
}

void Game::Render()
{
	//Clear old frame
	this->window->clear(sf::Color(126, 162, 255, 255));
	
	interactiveObj.Render(*this->window);
	player.Render(*this->window);


	//Display frame in window
	this->window->display();
}
