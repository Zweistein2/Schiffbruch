#pragma once

#include "headers.hpp"
#include "extern.hpp"

#include <SFML/Graphics.hpp>

#include <string>

class Application
{
public:
	Application(const std::string& name, HINSTANCE instance_handle);

	void run();
	void update();

private:
	void process_events();

private:
	sf::Window m_window;

	std::string m_name;
	std::time_t m_time; // Beginning of the second
};
