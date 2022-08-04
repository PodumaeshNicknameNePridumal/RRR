#include <gui/racescreen_screen/RaceScreenView.hpp>

RaceScreenView::RaceScreenView()
{

}

void RaceScreenView::setupScreen()
{
    RaceScreenViewBase::setupScreen();
    counter = 0;
    carX = car.getX();
    carY = car.getY();
    moveDirection = 2;

}

void RaceScreenView::tearDownScreen()
{
    RaceScreenViewBase::tearDownScreen();
}
// moveDirection 1 - up, 2 - up and right, 3 - right, 4 - right and down and continue...
void RaceScreenView::handleTickEvent() {
	car.cancelMoveAnimation();
	if (carX == 0) {
		if (moveDirection ==  8) moveDirection = 2;
		else if (moveDirection == 6) moveDirection = 4;
	}
	if (carX == 203) {
		if (moveDirection == 2) moveDirection = 8;
		else if (moveDirection == 4) moveDirection = 6;
	}
	if (carY == 0) {
		if(moveDirection == 2) moveDirection = 4;
		else if (moveDirection == 8) moveDirection = 6;
	}
	if (carY == 240) {
		if (moveDirection == 4) moveDirection = 2;
		else if (moveDirection == 6) moveDirection = 8;
	}


	switch(moveDirection) {
	case 1:
		carY--;
		break;
	case 2:
		carX++;
		carY--;
		break;
	case 3:
		carX++;
		break;
	case 4:
		carX++;
		carY++;
		break;
	case 5:
		carY++;
		break;
	case 6:
		carX--;
		carY++;
		break;
	case 7:
		carX--;
		break;
	case 8:
		carX--;
		carY--;
		break;
	default:
		break;
	}

	car.startMoveAnimation(carX, carY, 20);

}
