#include"location.h"
int main()
{
	location a(10,20);
	point b(20,30);
	circle c(2,40,50);
	a.display();
	a.move();
	b.draw();
	b.display();
	b.move();
	c.draw( );
	c.display();
	c.move();

}