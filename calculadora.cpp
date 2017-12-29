#include <FL/Fl.H>
#include <string>
#include "calculadora.h"

Calculadora::Calculadora(int w, int h, const char *t) : Fl_Window(w, h, t)
{
	result = new Fl_Output(10, 5, 180, 30, " ");
	
	std::string num[3][3] = {
								{"1", "2", "3"},
								{"4", "5", "6"},
								{"7", "8", "9"}
							};
		
	for ( int i = 0; i < 3; i++ ) {
		for ( int j = 0; j < 3; j++ ) {
			number[j][i] = new Number((i * 60) + 10, (j * 60) + 40 , 
			                          60, 60, num[j][i].c_str(), result);
		}
	}
	
	zero = new Number(130, 220, 60, 60, "0", result);
	end();
	resizable(this);
	show();
}