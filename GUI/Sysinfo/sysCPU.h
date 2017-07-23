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
    uint32_t _logicalCount;
    uint32_t _smtFlag;
    uint32_t _mmxFlag;
    uint32_t _L1Size;


public:
    void setVendorID();
    void setSignature();
    void setBrandString();
    void setL1Cache();

    std::string getVendorID() const;
    std::string getBrandString() const;
    uint32_t getFamily() const;
    uint32_t getSignature() const;
    uint32_t getExtFamily() const;
    uint32_t getStepping() const;
    uint32_t getModel() const;
    uint32_t getExtModel() const;


};

#endif
