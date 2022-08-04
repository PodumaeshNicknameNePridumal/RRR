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

}

void RaceScreenView::tearDownScreen()
{
    RaceScreenViewBase::tearDownScreen();
}

void RaceScreenView::handleTickEvent() {


		carX++;
		carY--;
	car.startMoveAnimation(carX, carY, 45);

}
