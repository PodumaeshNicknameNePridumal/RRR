/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/racescreen_screen/RaceScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


RaceScreenViewBase::RaceScreenViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    road.setPosition(0, 0, 240, 320);
    road.setColor(touchgfx::Color::getColorFromRGB(79, 79, 79));

    line1.setPosition(0, 0, 240, 320);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(120, 0);
    line1.setEnd(120, 320);
    line1.setLineWidth(2);
    line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    line2.setPosition(0, 0, 100, 320);
    line2Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line2.setPainter(line2Painter);
    line2.setStart(60, 0);
    line2.setEnd(60, 320);
    line2.setLineWidth(2);
    line2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    line3.setPosition(0, 0, 240, 320);
    line3Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line3.setPainter(line3Painter);
    line3.setStart(180, 0);
    line3.setEnd(180, 320);
    line3.setLineWidth(2);
    line3.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);

    car.setXY(14, 223);
    car.setBitmap(touchgfx::Bitmap(BITMAP_AUTO_ID));

    add(__background);
    add(road);
    add(line1);
    add(line2);
    add(line3);
    add(car);
}

void RaceScreenViewBase::setupScreen()
{

}
