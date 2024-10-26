#pragma once

#include <string>
#include <SFML/Graphics.hpp>

/**
 * @file WindowManager.hpp
 * @brief Manages application window and rendering
 */

/**
 * @class WindowManager
 * @brief Handles window creation, management and rendering
 * 
 * The WindowManager class manages the application window, including
 * creation, updates, and rendering operations.
 */
class WindowManager
{
public:
    /** @brief Default constructor */
    WindowManager();
    
    /**
     * @brief Constructor with window parameters
     * @param windowTitle Title of the window
     * @param windowWidth Width of the window
     * @param windowHeight Height of the window
     */
    WindowManager(const std::string &windowTitle, unsigned int windowWidth, unsigned int windowHeight);
    
    /** @brief Destructor */
    ~WindowManager();
    
    /**
     * @brief Checks if window is running
     * @return True if window is active
     */
    bool isRunning();
    
    /** @brief Clears the window for current frame */
    void clearWindow();
    
    /** @brief Displays the current frame */
    void displayWindow();
    
    /** @brief Updates window state */
    void update();
    
    /**
     * @brief Gets SFML render window pointer
     * @return Pointer to SFML RenderWindow
     */
    sf::RenderWindow *getRenderWindow();
    
    /**
     * @brief Renders a drawable object
     * @param drawable SFML drawable object to render
     */
    void render(const sf::Drawable &drawable);
    
    /** @brief Terminates the window */
    void terminateWindow();
    
    /**
     * @brief Changes window FPS
     * @param delta Change in FPS value
     */
    void changeFPS(int delta);
    
private:
    /**
     * @brief Sets up window parameters
     * @param windowTitle Title of the window
     * @param windowWidth Width of the window
     * @param windowHeight Height of the window
     */
    void setupWindow(const std::string &windowTitle, unsigned int windowWidth, unsigned int windowHeight);
    
    /** @brief Creates the SFML window */
    void createWindow();
    
    unsigned int fps;              ///< Current FPS setting
    sf::RenderWindow window;       ///< SFML render window
    sf::Vector2u windowSize;       ///< Window dimensions
    std::string windowTitle;       ///< Window title
    bool running;                  ///< Window running state
};