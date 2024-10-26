#include <managers/state_manager.hpp>
#include <states/state.hpp>
#include <state_elements/button.hpp>
#include <state_elements/panel.hpp>
#include <state_elements/text_form.hpp>

State::State(StateManager *applicationStateManager)
{
    this->stateManager = applicationStateManager;
}

State::~State()
{
}

void State::render()
{
    if (stateManager == nullptr || stateManager->getApplicationWindow() == nullptr)
        return; // Avoid rendering if stateManager or applicationWindow is null

    for (auto stateElement : stateElementList)
    {
        if (stateElement == nullptr) continue; // Avoid null state elements

        auto drawableList = stateElement->getDrawableList();
        if (drawableList != nullptr) {
            for (auto drawable : *drawableList)
                stateManager->getApplicationWindow()->render(*drawable);
        }

        auto temporaryDrawableList = stateElement->getTemporaryDrawableList();
        if (temporaryDrawableList != nullptr) {
            for (auto drawable : *temporaryDrawableList)
                stateManager->getApplicationWindow()->render(*drawable);
        }
    }
}


void State::update()
{
    for (auto stateElement : stateElementList)
    {
        if (stateElement != nullptr) // Check for null before calling update
        {
            stateElement->update();
        }
    }
}


void State::addStateElement(StateElement *newElement)
{
    this->stateElementList.push_back(newElement);
}

SketchContainer *State::getSketchContainer()
{
    return (sketchContainer != nullptr) ? sketchContainer : nullptr;  // Safely return sketchContainer
}

TextForm *State::getTextForm()
{
    return (stateTextForm != nullptr) ? stateTextForm : nullptr;  // Safely return stateTextForm
}
