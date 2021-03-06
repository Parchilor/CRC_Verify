#include <stdio.h>
#include "crc.h"

//unsigned char data[] = { 0x91, 0xA3, 0xB5, 0xC7, 0x8D, 0xEB, 0x2D, 0x4E };
uint8_t data[] = { 0x71, 0x7A, 0x02, 0x01, 0x01, 0x69 };
int main(int argc, char *argv[])
{
	printf("Module: Testing!\n");
	printf(
#ifdef POLY
			"POLY:0x%x  Verify:0x%x\n",
			POLY, 
#else
			"Verify:0x%x\n",
#endif
			crc8(data, sizeof(data))
			);
	return 0;
}
