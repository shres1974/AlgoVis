#pragma once

#include <SFML/Graphics.hpp>
class StateManager;

/**
 * @file EventManager.hpp
 * @brief Manages input events and user interactions
 */

/**
 * @class EventManager
 * @brief Handles all input events and maintains input state
 * 
 * The EventManager class processes user input including mouse and keyboard events,
 * maintaining the current state of various input controls.
 */
class EventManager
{
public:
    /**
     * @brief Constructor
     * @param applicationStateManager Pointer to the application's state manager
     */
    EventManager(StateManager *applicationStateManager);
    
    /** @brief Destructor */
    ~EventManager();
    
    /**
     * @brief Updates the event manager state
     */
    void update();
    
    /**
     * @brief Gets the current mouse position
     * @return Vector containing mouse x,y coordinates
     */
    sf::Vector2i getMousePosition();
    
    /**
     * @brief Checks if left mouse button was just pressed
     * @return True if left button was just pressed
     */
    bool isLeftKeyPressed();
    
    /**
     * @brief Checks if left mouse button was just released
     * @return True if left button was just released
     */
    bool isLeftKeyReleased();
    
    /**
     * @brief Checks if left mouse button is being held down
     * @return True if left button is held down
     */
    bool isLeftKeyHeld();
    
    /**
     * @brief Checks if right mouse button was just pressed
     * @return True if right button was just pressed
     */
    bool isRightKeyPressed();
    
    /**
     * @brief Checks if right mouse button was just released
     * @return True if right button was just released
     */
    bool isRightKeyReleased();
    
    /**
     * @brief Checks if right mouse button is being held down
     * @return True if right button is held down
     */
    bool isRightKeyHeld();
    
    /**
     * @brief Gets the current keyboard key being pressed
     * @return String representing the current key
     */
    std::string getCurrentKey();
    
private:
    StateManager *stateManager;      ///< Pointer to application state manager
    std::string lastKey;            ///< Last keyboard key pressed
    bool leftButtonPressed;         ///< Left mouse button pressed state
    bool leftButtonReleased;        ///< Left mouse button released state
    bool leftButtonHeld;            ///< Left mouse button held state
    bool rightButtonPressed;        ///< Right mouse button pressed state
    bool rightButtonReleased;       ///< Right mouse button released state
    bool rightButtonHeld;           ///< Right mouse button held state
    sf::Clock inputClock;          ///< Clock for timing input events
    static float inputDelay;       ///< Delay between input checks
};
