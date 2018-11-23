#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

class Program

{
public:

	Program(int width, int height);
	int mainLoop();

private:

	sf::RenderWindow window;
	int w, h;
};