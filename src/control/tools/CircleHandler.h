/*
 * Xournal++
 *
 * Handles input to draw circle
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

#pragma once

#include "BaseStrokeHandler.h"

class CircleHandler : public BaseStrokeHandler
{
public:
	CircleHandler(XournalView* xournal, XojPageView* redrawable, const PageRef& page, bool flipShift = false,
	              bool flipControl = false);
	virtual ~CircleHandler();

private:
	virtual void drawShape(Point& currentPoint, const PositionInputData& pos);
	
private:
	Point startPoint;
	bool started = false;
};

