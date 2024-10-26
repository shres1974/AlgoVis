#pragma once

#include <states/state.hpp>

/**
 * @file ArraySketchMenu.hpp
 * @brief Menu state for array sketch operations
 */

/**
 * @class ArraySketchMenu
 * @brief Menu state that manages array sketching and visualization
 * 
 * ArraySketchMenu is a specialized State class that provides an interface for
 * creating, modifying, and visualizing array-based sketches. It manages the
 * interaction between user input and array visualization operations.
 * Inherits from the base State class to integrate with the state management system.
 */
class ArraySketchMenu : public State
{
public:
    /**
     * @brief Constructor for array sketch menu
     * @param applicationStateManager Pointer to the state manager handling the application states
     * @param action The action that triggered the creation of this menu state
     * 
     * Initializes the menu state and sets up the array sketch environment based on
     * the specified action. Creates necessary UI elements and sketch containers
     * for array visualization.
     */
    ArraySketchMenu(StateManager *applicationStateManager, Action action);
    
    /** 
     * @brief Destructor
     * 
     * Cleans up resources allocated by the array sketch menu, including
     * sketch containers and UI elements
     */
    ~ArraySketchMenu();
    
    /**
     * @brief Retrieves the sketch container
     * @return Pointer to the SketchContainer holding the current array visualization
     * 
     * Provides access to the sketch container that manages the array visualization
     * and its associated operations
     */
    SketchContainer *getSketchContainer();
};