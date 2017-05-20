//AT&T Syntax - Followed by GCC - inst source dest

//#include <stdio.h>
#include <iostream>
#include <string>
#include "sysCPU.h"
int main()
{
	uint32_t _eax, _ebx, _ecx, _edx;
	uint32_t _op=0;
	std::string vendorID;
	sysCPU s;

	int a = 01000111;
	int b = 01100101;
	int c = 01101110;
	int d = 01110101;

	asm("cpuid"
		: "=a" (_eax),
		  "=b" (_ebx),
		  "=c" (_ecx),
		  "=d" (_edx)
		: "a" (_op));

	s.setVendorIDfromHex(_ebx, _edx, _ecx);

	vendorID = s.getVendorID();

	std::cout<<"\n Output : "<<vendorID;
	
	return 0;

}