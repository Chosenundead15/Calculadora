#ifndef NUMBER_H
#define NUMBER_H

#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
#include <string>

class Number : public Fl_Button
{
public:
	Number(int x, int y, int w, int h, std::string label, Fl_Output *out);
	
private:
	static void write_cb(Fl_Widget *w, void *v);
	std::string _label;
};

#endif //NUMBER_H