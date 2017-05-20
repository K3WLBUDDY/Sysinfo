#ifndef SYSCPU_H
#define SYSCPU_H

#include <string>
#include <stdint.h>

class sysCPU
{
private:
	std::string _brand, _vendorID;
	std::string setBrand(std::string);

public:

	void setVendorIDfromHex(uint32_t, uint32_t, uint32_t);

	std::string getVendorID() const;
};

#endif