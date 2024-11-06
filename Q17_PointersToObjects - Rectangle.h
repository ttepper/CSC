#pragma once
// Rectangle structure
struct Rectangle
{
public:
	Rectangle() // Default constructor
	{
		width = -1;
		height = -1;
	}
	Rectangle(int w, int h) // Overloaded constructor
	{
		width = w;
		height = h;

	}
	int width, height;

	int getWidth() { return width; }
	int getHeight() { return height; }
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }
};
