//AT&T Syntax - Followed by GCC - inst source dest

//#include <stdio.h>
#include <iostream>
#include <string>
#include "sysCPU.h"
int main()
{
	std::string vendorID;
	sysCPU s;
	uint32_t signature;
	uint32_t family;
	uint32_t extFamily;
	uint32_t stepping;
	uint32_t model;
	uint32_t extModel;

	s.setVendorID();
	s.setSignature();
	signature = s.getSignature();
	family = s.getFamily();
	extFamily = s.getExtFamily();
	vendorID = s.getVendorID();
	stepping = s.getStepping();
	model = s.getModel();
	extModel = s.getExtModel();

	if(family >= 15)
		family += extFamily;

	std::cout<<"\n Vendor ID : "<<vendorID;
	std::cout<<"\n CPU Family : "<<std::hex<<family<<"h";
	std::cout<<"\n CPU Stepping : "<<std::hex<<stepping;
	std::cout<<"\n Extended Model : "<<extModel<<model;
	std::cout<<"\n Model : "<<model;

	return 0;
}