#pragma once

#include <state_elements/state_element.hpp>

/**
 * @file TextForm.hpp
 * @brief Text input form element for state management
 */

/**
 * @class TextForm
 * @brief A form element that handles text input from the keyboard
 * 
 * TextForm is a specialized StateElement that provides text input functionality.
 * It captures keyboard input and provides methods to retrieve and process the entered text.
 * Inherits from StateElement to integrate with the state management system.
 */
class TextForm : public StateElement
{
public:
    /**
     * @brief Constructor for creating a text form element
     * @param applicationStateManager Pointer to the state manager
     * @param x X-coordinate position of the text form
     * @param y Y-coordinate position of the text form
     * @param width Width of the text form
     * @param height Height of the text form
     * @param fontSize Size of the font to be used
     * @param color Color of the text
     */
    TextForm(StateManager *applicationStateManager, float x, float y, float width, float height, int fontSize, sf::Color color);
    
    /** @brief Destructor */
    ~TextForm();
    
    /**
     * @brief Updates the text form state
     * 
     * Processes keyboard input and updates the form's contents for the current frame
     */
    void update();
    
    /**
     * @brief Retrieves the current text content
     * @return String containing the current text input
     */
    std::string getText();
    
    /**
     * @brief Extracts numerical values from the text input
     * @return Vector of integers parsed from the text input
     */
    std::vector<int> extractValues();
    
private:
    std::string keyboardInput;    ///< Stores the current keyboard input text
};