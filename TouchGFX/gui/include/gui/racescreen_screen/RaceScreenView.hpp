#ifndef RACESCREENVIEW_HPP
#define RACESCREENVIEW_HPP

#include <gui_generated/racescreen_screen/RaceScreenViewBase.hpp>
#include <gui/racescreen_screen/RaceScreenPresenter.hpp>

#include "main.h"
#include "cmsis_os.h"
#include "app_touchgfx.h"
#include "Components/ili9341/ili9341.h"

class RaceScreenView : public RaceScreenViewBase
{
public:
    RaceScreenView();
    virtual ~RaceScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    virtual void movingTheCar(int adc[2]);
protected:
    uint16_t carX, carY;
    int moveDirection, score;


};

#endif // RACESCREENVIEW_HPP
