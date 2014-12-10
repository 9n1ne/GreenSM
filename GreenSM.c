/* AVR - GSM project
 * Target AVR:ATmega8
 * Clock: 16MHz
 *
 * This will receive a signal from WFEWS rx board and send SMS.
 *
 * TODO
 * *Read 10 numbers from SIM card. 
 * *Listen constantly in a port for alert.
 * *If triggered fire SMS to the numbers.
 *
 */

#include <avr/io.h>

#define UART_NO_DATA 0x0100
int main(void)
{
	//UART init.
	//port init.
	for(;;)
	{
	
	}
	return 0;
}
