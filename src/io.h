#ifndef IO_H
#define IO_H

extern int digital_buttonPin;
extern int ledPin;

extern int analog_buttonPin;
extern int analog_ledPin;

void init_io_setup();
void loop_io();

#endif