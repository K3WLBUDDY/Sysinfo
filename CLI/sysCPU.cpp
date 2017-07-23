#include "sysCPU.h"
#include <iostream>
void sysCPU::setVendorID()
{
	uint32_t eax, ebx, ecx, edx;
	uint32_t op=0;

	asm("cpuid"
		: "=a" (eax),
		  "=b" (ebx),
		  "=c" (ecx),
		  "=d" (edx)
		: "a" (op));

  _vendorID = ebx & 0xff;
	_vendorID += (ebx >> 8) & 0xff;
	_vendorID += (ebx >> 16) & 0xff;
	_vendorID += (ebx >> 24) & 0xff;
	_vendorID += edx & 0xff;
	_vendorID += (edx >> 8) & 0xff;
	_vendorID += (edx >> 16) & 0xff;
	_vendorID += (edx >> 24) & 0xff;
	_vendorID += ecx & 0xff;
	_vendorID += (ecx >> 8) & 0xff;
	_vendorID += (ecx >> 16) & 0xff;
	_vendorID += (ecx >> 24) & 0xff;

}

std::string sysCPU::getVendorID() const
{
	return _vendorID;
}

void sysCPU::setBrandString()
{
	uint32_t op = 0x80000002;
	uint32_t edx, eax, ebx, ecx;

	asm("cpuid"
		: "=a" (eax),
		  "=b" (ebx),
		  "=c" (ecx),
		  "=d" (edx)
		: "a" (op));

	_brandString = eax & 0xff;
	_brandString += (eax >> 8) & 0xff;
	_brandString += (eax >> 16) & 0xff;
	_brandString += (eax >> 24) & 0xff;
	_brandString += ebx & 0xff;
	_brandString += (ebx >> 8) & 0xff;
	_brandString += (ebx >> 16) & 0xff;
	_brandString += (ebx >> 24) & 0xff;
	_brandString += ecx & 0xff;
	_brandString += (ecx >> 8) & 0xff;
	_brandString += (ecx >> 16) & 0xff;
	_brandString += (ecx >> 24) & 0xff;
	_brandString += edx & 0xff;
	_brandString += (edx >> 8) & 0xff;
	_brandString += (edx >> 16) & 0xff;
	_brandString += (edx >> 24) & 0xff;
	
	

	op = 0x80000003;

	asm("cpuid"
		: "=a" (eax),
		  "=b" (ebx),
		  "=c" (ecx),
		  "=d" (edx)
		: "a" (op));

	_brandString += eax & 0xff;
	_brandString += (eax >> 8) & 0xff;
	_brandString += (eax >> 16) & 0xff;
	_brandString += (eax >> 24) & 0xff;
	_brandString += ebx & 0xff;
	_brandString += (ebx >> 8) & 0xff;
	_brandString += (ebx >> 16) & 0xff;
	_brandString += (ebx >> 24) & 0xff;
	_brandString += ecx & 0xff;
	_brandString += (ecx >> 8) & 0xff;
	_brandString += (ecx >> 16) & 0xff;
	_brandString += (ecx >> 24) & 0xff;
	_brandString += edx & 0xff;
	_brandString += (edx >> 8) & 0xff;
	_brandString += (edx >> 16) & 0xff;
	_brandString += (edx >> 24) & 0xff;

	op = 0x80000004;

	asm("cpuid"
		: "=a" (eax),
		  "=b" (ebx),
		  "=c" (ecx),
		  "=d" (edx)
		: "a" (op));

	_brandString += eax & 0xff;
	_brandString += (eax >> 8) & 0xff;
	_brandString += (eax >> 16) & 0xff;
	_brandString += (eax >> 24) & 0xff;
	_brandString += ebx & 0xff;
	_brandString += (ebx >> 8) & 0xff;
	_brandString += (ebx >> 16) & 0xff;
	_brandString += (ebx >> 24) & 0xff;
	_brandString += ecx & 0xff;
	_brandString += (ecx >> 8) & 0xff;
	_brandString += (ecx >> 16) & 0xff;
	_brandString += (ecx >> 24) & 0xff;
	_brandString += edx & 0xff;
	_brandString += (edx >> 8) & 0xff;
	_brandString += (edx >> 16) & 0xff;
	_brandString += (edx >> 24) & 0xff;
}

void sysCPU::setSignature()
{
	uint32_t eax,ebx,edx;
	uint32_t op=1;

	asm("cpuid"
		: "=a" (eax),
		  "=b" (ebx),
		  "=d" (edx)
		: "a" (op));

	_stepping = eax & 0xF;
	_family = (eax >> 8) & 0xF;
	_extFamily = (eax >> 20) & 0xFF;
	_model = (eax >> 4) & 0xF;
	_extModel = (eax >> 16) & 0xF;

	_logicalCount = (ebx >>16) & 0xFF;
	std::cout<<"\n Logical Count: "<<_logicalCount;

	_smtFlag = (edx>>28) & 0x1;
	std::cout<<"\n SMT Flag : "<<_smtFlag;

	_mmxFlag = (edx >> 23) & 0x1;

	std::cout<<"\n MMX Flag : "<<_mmxFlag;

}

void sysCPU::setL1Cache()
{
	uint32_t op = 0x80000005;
	uint32_t eax, ebx, ecx, edx;

	asm("cpuid"
		: "=a" (eax),
		  "=b" (ebx),
		  "=d" (edx)
		: "a" (op));

	_L1Size = (ecx >> 24) & 0xF;
	std::cout<<"\n L1 Size : "<<_L1Size;

		
}

uint32_t sysCPU::getSignature() const
{
	return _signature;
}

uint32_t sysCPU::getFamily() const
{
	return _family;
}

uint32_t sysCPU::getExtFamily() const
{
	return _extFamily;
}

uint32_t sysCPU::getStepping() const
{
	return _stepping;
}

uint32_t sysCPU::getModel() const
{
	return _model;
}

uint32_t sysCPU::getExtModel() const
{
	return _extModel;
}

std::string sysCPU::getBrandString() const
{
	return _brandString;
}