#pragma once
#include<SFML/Graphics.hpp>
#include<vector>
#include<string>
#include<functional>

using EventHandler = std::function<void(const sf::Event&)>;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const std::string name = "Ventana";

class GameWindow {
private:
	static inline std::vector<EventHandler> handlers{};
public:
	static sf::RenderWindow& window() {
		static sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), name);
		return window;
	}

	static void pollEvents();
    static void addHandler(EventHandler h) { handlers.push_back(h); }

};