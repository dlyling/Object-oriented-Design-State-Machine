/**
 * \file Controller.h
 *
 * \author lynndai
 *
 * The controller class. 
 */

#pragma once
#include "ElevatorController.h"
#include "Floor.h"


/**
 * The controller class.
 */
class CController :
	public CElevatorController
{
public:
	CController();
	virtual ~CController();

	/** This function is called when the open button is pressed. */
	virtual void OnOpenPressed() override;

	/** This function is called when the door close button is pressed. */
	virtual void OnClosePressed() override;

	/// The state machine states
	enum States { Idle, DoorOpening, DoorOpen, DoorClosing, Moving, Stop };

	/** Elevator service function */
	virtual void Service() override;

	/** Elevator initialize function */
	virtual void Initialize() override;

	/** Panel floor pressed
	 * \param floor */
	void OnPanelFloorPressed(int floor);

	/** Call up pressed
	 * \param floor */
	void OnCallUpPressed(int floor);

	/** Call down pressed
	 * \param floor */
	void OnCallDownPressed(int floor);

	/** What floor up
	 * \returns */
	int WhatFloorUp();

	/** What floor to go to
	 * \returns */
	int WhatFloorToGoTo();

	/** What floor down
	 * \returns */
	int WhatFloorDown();

private:
	int    mFloor = 1;      ///< The current floor
	States mState = Idle;   ///< The current state

	void SetState(CController::States state);  ///< Set a state

	double mStateTime = 0;  ///< The time in a current state
	CFloor mFloors[NumFloors]; 	///< An object for each floor
	bool mGoingUp = true; ///< Going up
};

