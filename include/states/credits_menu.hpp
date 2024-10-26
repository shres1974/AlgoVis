#pragma once
#include <states/state.hpp>

/**
 * @file CreditsMenu.hpp
 * @brief Credits menu state showing application attribution
 */

/**
 * @class CreditsMenu
 * @brief Menu state that displays credits and acknowledgments
 * 
 * CreditsMenu is a specialized State class that presents the application credits,
 * including information about developers, contributors, and any third-party
 * resources used in the application. Inherits from the base State class to
 * integrate with the state management system.
 */
class CreditsMenu : public State
{
public:
    /**
     * @brief Constructor for credits menu
     * @param applicationStateManager Pointer to the state manager handling the application states
     * 
     * Initializes the credits menu state and sets up the display of
     * credits information, including developer names, acknowledgments,
     * and any relevant attribution information
     */
    CreditsMenu(StateManager *applicationStateManager);
    
    /** 
     * @brief Destructor
     * 
     * Cleans up any resources allocated by the credits menu,
     * such as text elements and UI components
     */
    ~CreditsMenu();
};