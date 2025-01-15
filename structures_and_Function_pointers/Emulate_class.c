#include <stdio.h>

// Define teh Rectangle struct that contains pointers
// to functions as member functions

typedef struct Rect
{
	int w, h;
	void(*set)(struct Rect*, int, int);
	int (*area)(struct Rect*);
	void (*show)(struct Rect*);
} Rect;

// Function to find Area
int area(Rect* r)
{
	return r->w * r->h;
}

// function to print the dimensions

void show(Rect* r)
{
	printf("Rectangle's Width: %d, Height: %d\n", r->w, r->h);
}

// Functio to set width and height
void set(Rect* r, int w, int h)
{
	r->w = w;
	r->h = h;
}

// initializer/constructor for Rectangle
void constructRect(Rect* r)
{
	r->w = 0;
	r->h = 0;
	r->set = set;
	r->area = area;
	r->show = show;
}
int main(void)
{
	//create a Rectangle object
	Rect r;
	constructRect(&r);
	
	// use r as a Rectangle
	r.set(&r, 10, 5);
	r.show(&r);
	printf("Rectangle Area: %d\n", r.area(&r));
	
	return 0;
}
