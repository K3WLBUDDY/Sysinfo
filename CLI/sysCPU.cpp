#include "sysCPU.h"

void sysCPU::setVendorIDfromHex(uint32_t ebx, uint32_t edx, uint32_t ecx)
{
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