#include "Program.h"

Program::Program(int width, int height): w(width), h(height), window(sf::VideoMode(width, height), "Moving Shape")

{

}

int Program::mainLoop()

{

	sf::Event events;

	if (!window.isOpen())

	{
		std::cout << "WINDOW DID NOT OPEN" << std::endl;
		return EXIT_FAILURE;
	}

	while (window.isOpen())

	{
		while (window.pollEvent(events))

		{
			if (events.type == sf::Event::EventType::Closed)

			{
				window.close();
			}
		}

		//Clear Window
		window.clear(sf::Color::Black);
		//Draw Here



		//Display
		window.display();
	}
}