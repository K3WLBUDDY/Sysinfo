//AT&T Syntax - Followed by GCC - inst source dest

//#include <stdio.h>
#include <iostream>
#include <string>
#include "sysCPU.h"
int main()
{
	std::string vendorID;
	sysCPU s;

	s.setVendorIDfromHex();

	vendorID = s.getVendorID();

	std::cout<<"\n Output : "<<vendorID;
	
	return 0;

}