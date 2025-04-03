#pragma once

#include <stack>
#include <memory>

#include "state.h"

typedef std::unique_ptr<State> StatePtr;

class StateMachine {
private:
	// -- State machine variables
	std::stack<StatePtr> states;
public:
	void pushState(State* state);
	void popState();
	void changeState(State* state);

	StatePtr& getState();
};