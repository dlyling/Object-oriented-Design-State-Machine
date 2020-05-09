/**
 * \file Floor.cpp
 *
 * \author lynndai
 */

#include "pch.h"
#include "Floor.h"
#include "Controller.h"


/**
 * Constructor
 */
CFloor::CFloor()
{
}


/**
 * Destructor
 */
CFloor::~CFloor()
{
}


/** Set the value of Up for a floor.
 * \param s The new value for mUp
 */
void CFloor::SetUp(bool s)
{
	mUp = s;
	mController->SetCallLight(mFloor, CElevatorController::Up, mUp);
}


/**
 * Going down setter
 * \param d 
 */
void CFloor::SetDown(bool d)
{
	mDown = d;
	mController->SetCallLight(mFloor, CElevatorController::Down, mDown);
}


/** Set the value of Panel for a floor.
 * \param p The new value for mPanel
 */
void CFloor::SetPanel(bool p)
{
	mPanel = p;
	mController->SetPanelFloorLight(mFloor, mPanel);
}
