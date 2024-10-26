#include <states/credits_menu.hpp>

#include <state_elements/button.hpp>
#include <state_elements/panel.hpp>

CreditsMenu::CreditsMenu(StateManager *applicationStateManager) : State(applicationStateManager)
{
    stateElementList.push_back(new Panel(this->stateManager, 10, 10, 1180, 50, "Credits", 32, sf::Color(200, 200, 200), 0));
    stateElementList.push_back(new Panel(this->stateManager, 10, 10, 1180, 730, "AlgoVis is created by Nischal Shrestha \n as a part of personal OOP project.\n\nThe project is licensed under the MIT Open Source License", 36, sf::Color(100, 100, 100, 0), 0));
    stateElementList.push_back(new Button(this->stateManager, 902.5, 740, 287.5, 50, "Back", Action::ChangeToMainMenu));
}

CreditsMenu::~CreditsMenu() {}