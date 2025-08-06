#ifndef I_ANALOG_READER_H
#define I_ANALOG_READER_H

#include <stdint.h>

class IAnalogReader {
public:
    virtual ~IAnalogReader() {}
    // Lê um valor analógico, retorna true se sucesso
    virtual bool read(uint16_t &value) = 0;
    virtual bool readMeans(uint16_t &value) = 0;
};

#endif // I_ANALOG_READER_H
