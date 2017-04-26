#ifndef IO_H
#define IO_H

#include "stdint.h"

void     outb(uint16_t port, uint8_t value);
uint8_t  inb(uint16_t port);
uint16_t inw(uint16_t port);

#endif /* IO_H */
/*
#ifndef INCLUDE_IO_H
    #define INCLUDE_IO_H

#include "stdint.h"

     outb:
     *  Sends the given data to the given I/O port. Defined in io.s
     *
     *  @param port The I/O port to send the data to
     *  @param data The data to send to the I/O port
     
// void outb(unsigned short port, unsigned char data);

// #endif  INCLUDE_IO_H 
     in file io.h 

     inb:
     *  Read a byte from an I/O port.
     *
     *  @param  port The address of the I/O port
     *  @return      The read byte
     
    unsigned char inb(unsigned short port);

//    int write(char *buf, unsigned int len);

    void outb(unsigned short port, unsigned char data);

uint16_t inw(uint16_t port);

#endif //io.h end

*/
