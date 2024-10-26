
#pragma once
#include <iostream>
#include <managers/window_manager.hpp>
#include <managers/state_manager.hpp>
#include <managers/event_manager.hpp>
#include <managers/resource_manager.hpp>
/**
 * @file Application.hpp
 * @brief Main application class that manages the core functionality of the program
 */

/**
 * @class Application
 * @brief Core application class that coordinates window, state, event and resource management
 * 
 * The Application class serves as the main controller for the application,
 * managing the game loop and coordinating between different manager classes.
 */
class Application
{
public:
    /** @brief Default constructor */
    Application();
    
    /** @brief Destructor */
    ~Application();
    
    /**
     * @brief Main application loop wrapper
     * 
     * Handles the main application loop including updates and rendering
     */
    void run();
    
    /**
     * @brief Updates application state for current tick
     */
    void update();
    
    /**
     * @brief Renders current frame using window manager
     */
    void render();
    
private:
    WindowManager windowManager;     ///< Manages application window and rendering
    StateManager stateManager;       ///< Manages application states and transitions
    EventManager eventManager;       ///< Handles input events and user interactions
    ResourceManager resourceManager; ///< Manages application resources
};
