#include "number.h"
#include <FL/Fl_Output.H>
#include <string>
#include <cstring>

Number::Number(int x, int y, int w, int h, std::string label, Fl_Output *out)
      : Fl_Button(x, y, w, h, label.c_str())
{
	_label = label;
	callback(write_cb, out);
}

void Number::write_cb(Fl_Widget *w, void *v)
{
	Number *num = (Number*)w;
	Fl_Output *out = (Fl_Output*)v;
	
	std::string output(out->value(), strlen(out->value()));
	output.append(num->_label);
	out->value(output.c_str());
}