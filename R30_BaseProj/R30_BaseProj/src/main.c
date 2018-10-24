/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# Minimal main function that starts with a call to system_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */
#include <asf.h>
#include "debugUart.h"

int main (void)
{
	system_init();
	configure_console();
	
	printf("R30 Base Project\r\n");

	while(1)
	{
		if(port_pin_get_input_level(SW0))
		{
			port_pin_set_output_level(LED0, LED_ON);
		}
		else
		{
			port_pin_set_output_level(LED0,LED_OFF);
		}
	}
}
