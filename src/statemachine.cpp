#include "statemachine.h"
#include "state.h"

// -- State functions

void StateMachine::pushState(State* state)
{
	states.push(StatePtr(state));
	states.top()->enter();
}

void StateMachine::popState()
{
	if (!states.empty()) {
		states.top()->exit();
		states.pop();
	}
}

void StateMachine::changeState(State* state)
{
	popState();
	pushState(state);
}

StatePtr& StateMachine::getState()
{
	return states.top();
}