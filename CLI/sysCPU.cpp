#include "sysCPU.h"

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

void sysCPU::setSignature()
{
	uint32_t eax;
	uint32_t op=1;

	asm("cpuid"
		: "=a" (eax)
		: "a" (op));

	_stepping = eax & 0xF;
	_family = (eax >> 8) & 0xF;
	_extFamily = (eax >> 20) & 0xFF;
	_model = (eax >> 4) & 0xF;
	_extModel = (eax >> 16) & 0xF;
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