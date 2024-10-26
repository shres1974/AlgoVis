#pragma once

#include <states/state.hpp>

/**
 * @file ArrayAlgorithmMenu.hpp
 * @brief Menu state for array algorithm selection
 */

/**
 * @class ArrayAlgorithmMenu
 * @brief Menu state that provides array algorithm selection options
 * 
 * ArrayAlgorithmMenu is a specialized State class that presents users with
 * various array algorithm choices for visualization and execution.
 * Inherits from the base State class to integrate with the state management system.
 */
class ArrayAlgorithmMenu : public State
{
public:
    /**
     * @brief Constructor for array algorithm menu
     * @param applicationStateManager Pointer to the state manager handling the application states
     * 
     * Initializes the menu state with various array algorithm options such as
     * sorting algorithms (e.g., bubble sort, insertion sort) and other array operations
     */
    ArrayAlgorithmMenu(StateManager *applicationStateManager);
    
    /** 
     * @brief Destructor
     * 
     * Cleans up any resources allocated by the array algorithm menu
     */
    ~ArrayAlgorithmMenu();
};