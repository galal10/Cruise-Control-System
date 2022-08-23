
#include "button.h"



EN_ERRORSTATE_t BUTTON_init(uint8_t buttonPort, uint8_t buttonPin)
{
	if(DIO_setPinDirection(buttonPort, buttonPin, LOW) == 0)
	{
		return E_OK;
	}
	return E_ERROR;
}

EN_ERRORSTATE_t BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value)
{
	*value = DIO_getPin(buttonPort, buttonPin);
	return E_OK;
}


EN_ERRORSTATE_t BUTTON_start()
{
	BUTTON_init(PORT_speed,BUTTON_INC);
	BUTTON_init(PORT_speed,BUTTON_DEC);
	BUTTON_init(PORT_control,BUTTON_BRAIKE);

	return E_OK;
}
