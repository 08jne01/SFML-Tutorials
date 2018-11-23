#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Program

{
public:

	Program(int width, int height);
	int mainLoop();
	void draw();

private:

	sf::RenderWindow window;
	int w, h;
};