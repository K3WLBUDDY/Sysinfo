#ifndef SYSCPU_H
#define SYSCPU_H

#include <string>
#include <stdint.h>

class sysCPU
{
private:
	std::string _vendorID;
	std::string _brandString;
	uint32_t _brandID;
	uint32_t _signature;
	uint32_t _family;
	uint32_t _extFamily;
	uint32_t _stepping;
	uint32_t _model;
	uint32_t _extModel;

public:

	void setVendorID();
	void setSignature();

	std::string getVendorID() const;
	uint32_t getFamily() const;
	uint32_t getSignature() const;
	uint32_t getExtFamily() const;
	uint32_t getStepping() const;
	uint32_t getModel() const;
	uint32_t getExtModel() const;
	void generateBrandString();
};

#endif