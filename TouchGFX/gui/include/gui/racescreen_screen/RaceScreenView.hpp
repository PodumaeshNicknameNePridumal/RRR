#ifndef RACESCREENVIEW_HPP
#define RACESCREENVIEW_HPP

#include <gui_generated/racescreen_screen/RaceScreenViewBase.hpp>
#include <gui/racescreen_screen/RaceScreenPresenter.hpp>

class RaceScreenView : public RaceScreenViewBase
{
public:
    RaceScreenView();
    virtual ~RaceScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    uint16_t carX,carY;
    int counter;
    int move;
};

#endif // RACESCREENVIEW_HPP
