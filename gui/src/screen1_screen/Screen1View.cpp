#include <gui/screen1_screen/Screen1View.hpp>
#include <stm32746g_discovery_qspi.h>
#include "cmsis_os.h"

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::functionOK()
{
	// Set all numbers in first position
	number_0 = 0;
	number_1 = 0;
	number_2 = 0;
	number_3 = 0;
	number_4 = 0;
	number_5 = 0;
	number_6 = 0;
	number_7 = 0;
	number_8 = 0;
	number_9 = 0;
	number_0 = 0;
	ready = 0;

	// Reset all Leds
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);							//Led_Green_1
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);							//Led_Green_2
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);							//Led_Green_3
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_RESET);							//Led_Green_4
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);							//Led_Red_1
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_RESET);							//Led_Red_2
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);							//Led_Red_3
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);							//Led_Red_4

	// Blink RGB Leds routine
	if((textArea1Buffer[0] == '0') && (textArea2Buffer[0] == '6') && (textArea3Buffer[0] == '2') && (textArea4Buffer[0] == '5'))
	{
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);							//Led_Green_1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);						//Led_Green_2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);							//Led_Green_3
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);							//Led_Green_4
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);						//Led_Green_1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);						//Led_Green_2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);						//Led_Green_3
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_RESET);						//Led_Green_4
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);							//Led_Green_1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);						//Led_Green_2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);							//Led_Green_3
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);							//Led_Green_4
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);						//Led_Green_1
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);						//Led_Green_2
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);						//Led_Green_3
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_RESET);						//Led_Green_4
		ready = 1;
	}
	else
	{
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);							//Led_Red_1
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_SET);							//Led_Red_2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);						//Led_Red_3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);						//Led_Red_4
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);						//Led_Red_1
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_RESET);						//Led_Red_2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);						//Led_Red_3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);						//Led_Red_4
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET);							//Led_Red_1
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_SET);							//Led_Red_2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);						//Led_Red_3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);						//Led_Red_4
		HAL_Delay(500);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET);						//Led_Red_1
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_1, GPIO_PIN_RESET);						//Led_Red_2
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_RESET);						//Led_Red_3
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);						//Led_Red_4
		ready = 1;
	}

	// Set all TextAreas as "-"
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%c", '-');
	textArea1.invalidate();
	Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%c", '-');
	textArea2.invalidate();
	Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%c", '-');
	textArea3.invalidate();
	Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%c", '-');
	textArea4.invalidate();
}

void Screen1View::functionDELETE()
{
	if(ready)
	{
		switch(text_area)
		{
			case 0:
				if(textArea4Buffer[0] != '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%c", '-');	// Write "-" in TextArea
					textArea4.invalidate();
					number_0 = 3;
					number_1 = 3;
					number_2 = 3;
					number_3 = 3;
					number_4 = 3;
					number_5 = 3;
					number_6 = 3;
					number_7 = 3;
					number_8 = 3;
					number_9 = 3;													// set all numbers in last position
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_RESET);			// Led_Green_4 off
					break;
				}
				else
					text_area = 1;
			case 1:
				if(textArea3Buffer[0] != '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE,"%c", '-');	// Write "-" in TextArea
					textArea3.invalidate();
					number_0 = 2;
					number_1 = 2;
					number_2 = 2;
					number_3 = 2;
					number_4 = 2;
					number_5 = 2;
					number_6 = 2;
					number_7 = 2;
					number_8 = 2;
					number_9 = 2;													// set all numbers in third position
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);			// Led_Green_3 off
					break;
				}
				else
					text_area = 2;
			case 2:
				if(textArea2Buffer[0] != '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%c", '-');	// Write "-" in TextArea
					textArea2.invalidate();
					number_0 = 1;
					number_1 = 1;
					number_2 = 1;
					number_3 = 1;
					number_4 = 1;
					number_5 = 1;
					number_6 = 1;
					number_7 = 1;
					number_8 = 1;
					number_9 = 1;													// set all numbers in second position
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET);			// Led_Green_2 off
					break;
				}
				else
					text_area = 3;
			case 3:
				if(textArea1Buffer[0] != '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%c", '-');	// Write "-" in TextArea
					textArea1.invalidate();
					number_0 = 0;
					number_1 = 0;
					number_2 = 0;
					number_3 = 0;
					number_4 = 0;
					number_5 = 0;
					number_6 = 0;
					number_7 = 0;
					number_8 = 0;
					number_9 = 0;
					number_0 = 0;													// set all numbers in first position
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET);			// Led_Green_1 off
					break;
				}
				text_area = 0;
				break;
		}
	}
}

void Screen1View::function1()
{
	if(ready)
	{
		switch(number_1)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 1);	// Write "1" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1 on
					break;
				}
				else
					number_1 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 1);	// Write "1" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Green_2
					break;
				}
				else
					number_1 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 1);	// Write "1" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_1 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 1);	// Write "1" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_1 = 0;
				break;
		}
	}
}

void Screen1View::function2()
{
	if(ready)
	{
		switch(number_2)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 2);	// Write "2" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_2 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 2);	// Write "2" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_2 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 2);	// Write "2" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_2 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 2);	// Write "2" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_2 = 0;
				break;
		}
	}
}

void Screen1View::function3()
{
	if(ready)
	{
		switch(number_3)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 3);	// Write "3" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_3 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 3);	// Write "3" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_3 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 3);	// Write "3" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_3 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 3);	// Write "3" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_3 = 0;
				break;
		}
	}
}

void Screen1View::function4()
{
	if(ready)
	{
		switch(number_4)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 4);	// Write "4" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_4 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 4);	// Write "4" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_4 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 4);	// Write "4" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_4 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 4);	// Write "4" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_4 = 0;
				break;
		}
	}
}

void Screen1View::function5()
{
	if(ready)
	{
		switch(number_5)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 5);	// Write "5" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_5 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 5);	// Write "5" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_5 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 5);	// Write "5" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_5 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 5);	// Write "5" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_5 = 0;
				break;
		}
	}
}

void Screen1View::function6()
{
	if(ready)
	{
		switch(number_6)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 6);	// Write "6" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_6 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 6);	// Write "6" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_6 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 6);	// Write "6" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_6 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 6);	// Write "6" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_6 = 0;
				break;
		}
	}
}

void Screen1View::function7()
{
	if(ready)
	{
		switch(number_7)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 7);	// Write "7" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_7 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 7);	// Write "7" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_7 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 7);	// Write "7" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_7 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 7);	// Write "7" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_7 = 0;
				break;
		}
	}
}

void Screen1View::function8()
{
	if(ready)
	{
		switch(number_8)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 8);	// Write "8" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_8 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 8);	// Write "8" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_8 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 8);	// Write "8" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_8 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 8);	// Write "8" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_8 = 0;
				break;
		}
	}
}

void Screen1View::function9()
{
	if(ready)
	{
		switch(number_9)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 9);	// Write "9" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				// Led_Green_1
					break;
				}
				else
					number_9 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 9);	// Write "9" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_9 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 9);	// Write "9" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_9 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 9);	// Write "9" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_9 = 0;
				break;
		}
	}
}

void Screen1View::function0()
{
	if(ready)
	{
		switch(number_0)
		{
			case 0:
				if(textArea1Buffer[0] == '-')
				{
					Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 0);	// Write "0" in TextArea
					textArea1.invalidate();
					text_area = 3;													// Delete from first TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET);				//Led_Green_1
					break;
				}
				else
					number_0 = 1;
			case 1:
				if(textArea2Buffer[0] == '-')
				{
					Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%d", 0);	// Write "0" in TextArea
					textArea2.invalidate();
					text_area = 2;													// Delete from second TextArea
					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET);			// Led_Green_2
					break;
				}
				else
					number_0 = 2;
			case 2:
				if(textArea3Buffer[0] == '-')
				{
					Unicode::snprintf(textArea3Buffer, TEXTAREA3_SIZE, "%d", 0);	// Write "0" in TextArea
					textArea3.invalidate();
					text_area = 1;													// Delete from third TextArea
					HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);				// Led_Green_3
					break;
				}
				else
					number_0 = 3;
			case 3:
				if(textArea4Buffer[0] == '-')
				{
					Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%d", 0);	// Write "0" in TextArea
					textArea4.invalidate();
					text_area = 0;													// Delete from last TextArea
					HAL_GPIO_WritePin(GPIOI, GPIO_PIN_2, GPIO_PIN_SET);				// Led_Green_4
					break;
				}
				else
					number_0 = 0;
				break;
		}
	}
}
