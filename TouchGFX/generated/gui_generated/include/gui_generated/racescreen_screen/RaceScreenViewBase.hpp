/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef RACESCREENVIEWBASE_HPP
#define RACESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/racescreen_screen/RaceScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class RaceScreenViewBase : public touchgfx::View<RaceScreenPresenter>
{
public:
    RaceScreenViewBase();
    virtual ~RaceScreenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box road;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::Line line2;
    touchgfx::PainterRGB565 line2Painter;
    touchgfx::Line line3;
    touchgfx::PainterRGB565 line3Painter;
    touchgfx::MoveAnimator< touchgfx::Image > auto2;
    touchgfx::MoveAnimator< touchgfx::Image > auto1;
    touchgfx::MoveAnimator< touchgfx::Image > auto3;
    touchgfx::MoveAnimator< touchgfx::Image > auto4;
    touchgfx::MoveAnimator< touchgfx::Image > car;
    touchgfx::Container scoreContainer;
    touchgfx::Box scoreBox;
    touchgfx::TextAreaWithOneWildcard scoreCounter;
    touchgfx::TextArea ScoreText;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCORECOUNTER_SIZE = 10;
    touchgfx::Unicode::UnicodeChar scoreCounterBuffer[SCORECOUNTER_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // RACESCREENVIEWBASE_HPP
