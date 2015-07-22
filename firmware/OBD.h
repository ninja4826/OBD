/*
  OBD.h - Library for reading data from an OBD-II device.
  Created by Russell Hueske, July 22, 2015.
  Released into the public domain.
*/
#ifndef OBD_h
#define OBD_h

class OBD {
  public:
    OBD();
    bool begin();
    void end();
    char[] read();
  private:
    void getResponse(void);
    char[] rxData;
}