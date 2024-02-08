/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler),
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_WAVES_ID));
    add(image1);

    flexButton1.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setText(TypedText(T___SINGLEUSE_17CQ));
    flexButton1.setTextPosition(0, 12, 50, 50);
    flexButton1.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(14, 23, 50, 50);
    add(flexButton1);

    flexButton2.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setText(TypedText(T___SINGLEUSE_KPVV));
    flexButton2.setTextPosition(0, 12, 50, 50);
    flexButton2.setTextColors(touchgfx::Color::getColorFromRGB(250, 245, 245), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton2.setAction(flexButtonCallback);
    flexButton2.setPosition(72, 23, 50, 50);
    add(flexButton2);

    flexButton3.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton3.setBorderSize(5);
    flexButton3.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton3.setText(TypedText(T___SINGLEUSE_HK11));
    flexButton3.setTextPosition(0, 12, 50, 50);
    flexButton3.setTextColors(touchgfx::Color::getColorFromRGB(250, 245, 245), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton3.setAction(flexButtonCallback);
    flexButton3.setPosition(131, 23, 50, 50);
    add(flexButton3);

    flexButton4.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton4.setBorderSize(5);
    flexButton4.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton4.setText(TypedText(T___SINGLEUSE_B0C0));
    flexButton4.setTextPosition(0, 12, 50, 50);
    flexButton4.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton4.setAction(flexButtonCallback);
    flexButton4.setPosition(14, 81, 50, 50);
    add(flexButton4);

    flexButton5.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton5.setBorderSize(5);
    flexButton5.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton5.setText(TypedText(T___SINGLEUSE_5J28));
    flexButton5.setTextPosition(0, 12, 50, 50);
    flexButton5.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton5.setAction(flexButtonCallback);
    flexButton5.setPosition(72, 81, 50, 50);
    add(flexButton5);

    flexButton6.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton6.setBorderSize(5);
    flexButton6.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton6.setText(TypedText(T___SINGLEUSE_RTAJ));
    flexButton6.setTextPosition(0, 12, 50, 50);
    flexButton6.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton6.setAction(flexButtonCallback);
    flexButton6.setPosition(131, 81, 50, 50);
    add(flexButton6);

    flexButton7.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton7.setBorderSize(5);
    flexButton7.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton7.setText(TypedText(T___SINGLEUSE_H0A7));
    flexButton7.setTextPosition(0, 12, 50, 50);
    flexButton7.setTextColors(touchgfx::Color::getColorFromRGB(245, 242, 242), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton7.setAction(flexButtonCallback);
    flexButton7.setPosition(14, 140, 50, 50);
    add(flexButton7);

    flexButton8.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton8.setBorderSize(5);
    flexButton8.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton8.setText(TypedText(T___SINGLEUSE_LS8W));
    flexButton8.setTextPosition(0, 12, 50, 50);
    flexButton8.setTextColors(touchgfx::Color::getColorFromRGB(245, 242, 242), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton8.setAction(flexButtonCallback);
    flexButton8.setPosition(72, 140, 50, 50);
    add(flexButton8);

    flexButton9.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton9.setBorderSize(5);
    flexButton9.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton9.setText(TypedText(T___SINGLEUSE_E3G5));
    flexButton9.setTextPosition(0, 12, 50, 50);
    flexButton9.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton9.setAction(flexButtonCallback);
    flexButton9.setPosition(131, 140, 50, 50);
    add(flexButton9);

    flexButton0.setBoxWithBorderPosition(0, 0, 50, 50);
    flexButton0.setBorderSize(5);
    flexButton0.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton0.setText(TypedText(T___SINGLEUSE_Z0H0));
    flexButton0.setTextPosition(0, 12, 50, 50);
    flexButton0.setTextColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(10, 10, 10));
    flexButton0.setAction(flexButtonCallback);
    flexButton0.setPosition(72, 199, 50, 50);
    add(flexButton0);

    boxWithBorder1.setPosition(208, 90, 247, 50);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    boxWithBorder1.setBorderSize(5);
    add(boxWithBorder1);

    textArea1.setPosition(240, 105, 23, 21);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JTLM).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2WHV));
    add(textArea1);

    textArea2.setPosition(297, 105, 21, 21);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_W5YW).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Q0LN));
    add(textArea2);

    textArea3.setPosition(358, 105, 20, 21);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2B61).getText());
    textArea3.setWildcard(textArea3Buffer);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6XPS));
    add(textArea3);

    textArea4.setPosition(412, 105, 18, 21);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_LF3L).getText());
    textArea4.setWildcard(textArea4Buffer);
    textArea4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PZSV));
    add(textArea4);

    buttonWithLabelOK.setXY(345, 174);
    buttonWithLabelOK.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_PRESSED_ID));
    buttonWithLabelOK.setLabelText(touchgfx::TypedText(T___SINGLEUSE_OCI9));
    buttonWithLabelOK.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelOK.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelOK.setAction(buttonCallback);
    add(buttonWithLabelOK);

    buttonWithLabelDELETE.setXY(208, 174);
    buttonWithLabelDELETE.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_PRESSED_ID));
    buttonWithLabelDELETE.setLabelText(touchgfx::TypedText(T___SINGLEUSE_J89I));
    buttonWithLabelDELETE.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelDELETE.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabelDELETE.setAction(buttonCallback);
    add(buttonWithLabelDELETE);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked call virtual function
        //Call function1
        function1();
    }
    if (&src == &flexButton2)
    {
        //Interaction2
        //When flexButton2 clicked call virtual function
        //Call function2
        function2();
    }
    if (&src == &flexButton3)
    {
        //Interaction3
        //When flexButton3 clicked call virtual function
        //Call function3
        function3();
    }
    if (&src == &flexButton4)
    {
        //Interaction4
        //When flexButton4 clicked call virtual function
        //Call function4
        function4();
    }
    if (&src == &flexButton5)
    {
        //Interaction5
        //When flexButton5 clicked call virtual function
        //Call function5
        function5();
    }
    if (&src == &flexButton6)
    {
        //Interaction6
        //When flexButton6 clicked call virtual function
        //Call function6
        function6();
    }
    if (&src == &flexButton7)
    {
        //Interaction7
        //When flexButton7 clicked call virtual function
        //Call function7
        function7();
    }
    if (&src == &flexButton8)
    {
        //Interaction8
        //When flexButton8 clicked call virtual function
        //Call function8
        function8();
    }
    if (&src == &flexButton9)
    {
        //Interaction9
        //When flexButton9 clicked call virtual function
        //Call function9
        function9();
    }
    if (&src == &flexButton0)
    {
        //Interaction0
        //When flexButton0 clicked call virtual function
        //Call function0
        function0();
    }
}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabelOK)
    {
        //InteractionOK
        //When buttonWithLabelOK clicked call virtual function
        //Call functionOK
        functionOK();
    }
    if (&src == &buttonWithLabelDELETE)
    {
        //InteractionDELETE
        //When buttonWithLabelDELETE clicked call virtual function
        //Call functionDELETE
        functionDELETE();
    }
}
