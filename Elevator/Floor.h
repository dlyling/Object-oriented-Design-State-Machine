/**
 * \file Floor.h
 *
 * \author lynndai
 *
 * The floor class. 
 */

#pragma once

class CController;

/**
 *  The floor class. 
 */
class CFloor
{
public:
	/** Constructor */
	CFloor();
	/** Destructor */
	virtual ~CFloor();

	/* Going up setter
	 * \param s */
	void SetUp(bool s);

	/** Going down setter
	 * \param d */
	void SetDown(bool d);

	/** Panel setter
	 * \param p */
	void SetPanel(bool p);

	/** Floor setter
	* \param floor */
	void SetFloor(int floor) { mFloor = floor; }

	/** Is up
	* \return mIsUp is up */
	bool IsUp() { return mUp; }

	/** Is panel
	* \return mIsPanel is panel */
	bool IsPanel() { return mPanel; }

	/** Is down
	* \return mIsDown is down */
	bool IsDown() { return mDown; }

	/** Controller setter
	* \param controller */
	void SetController(CController* controller) { mController = controller; }

private:
	bool mUp = false; 	///< Going Up
	bool mDown = false; 	///< Going Down
	bool mPanel = false;  	///< Panel
	int mFloor = 0;  	///< Floor
	CController* mController = nullptr;   ///< Controller for this object
};

