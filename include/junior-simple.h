#pragma once

#include "window.h"
#include "event.h"


namespace junior
{
	window& create_window(const wchar_t* title);
	void draw_line(const int x1, const int y1, const int x2, const int y2);
	void draw_circle(const int x, const int y, const int radius);
	void write(const wchar_t* text, const int x, const int y);
}

using junior::wait_for_event;
using junior::create_window;
using junior::draw_line;
using junior::draw_circle;
using junior::write;