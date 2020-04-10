#include "Event.h"


Event::Event( QGraphicsView *parent)
	:QGraphicsView(parent)
{

}
Event::~Event()
{
	
}
void Event::push_event()
{
	XController controler;
	Controller player;
	if (controler.isUpdated)
	{
		if (player.BTN_A)
		{
			emit marioJump();
		}
		if(player.BTN_X)
		{
			emit hitBarrel();
		}
		if (player.LThumbStickX < 0)
		{
			emit run(LEFT);
		}
		else
		{
			emit run(RIGHT);
		}
		if (player.LThumbStickY < 0)
		{
			emit goDown();
		}
		else
		{
			emit climb();
		}
	}
	else
	{
		return;
	}
}

