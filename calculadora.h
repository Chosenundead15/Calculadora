#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <FL/Fl_Window.H>
#include <vector>
#include "number.h"

class Calculadora : public Fl_Window
{
public:
	Calculadora(int w, int h, const char *t);
	Fl_Output *result;
	Number    *number[3][3];
	Number    *zero;
};
#endif