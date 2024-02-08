#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void function1();
    virtual void function2();
    virtual void function3();
	virtual void function4();
	virtual void function5();
	virtual void function6();
	virtual void function7();
	virtual void function8();
	virtual void function9();
	virtual void function0();
	virtual void functionOK();
	virtual void functionDELETE();
protected:
    unsigned char number_0 = 0, number_1 = 0, number_2 = 0, number_3 = 0, number_4 = 0, number_5 = 0, number_6 = 0, number_7 = 0, number_8 = 0, number_9 = 0, text_area = 0, ready = 1;
};

#endif // SCREEN1VIEW_HPP
