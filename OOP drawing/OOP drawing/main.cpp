#include <GLFW/glfw3.h>
#include <cstring>
#include <stdlib.h>		  // srand, rand
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "math.h"
#include<time.h>
#include"Geometry.h"
#include<iostream>
#include"Geometry.h"
#include"Icon.h"
int main(void)
{
	Geometry * main = new Geometry(1800, 480);

	Icon_t1 _icon1(100, 100, 100, 100, 1, 0, 0);
	Icon_t1 _icon11(100, 300, 100, 100, 1, 0, 0);
	Icon_t2 _icon2(250, 100, 100, 100, 1, 0, 0);
	Icon_t2 _icon22(250, 300, 100, 100, 1, 0, 0);
	Icon_t3 _icon3(400, 100, 100, 100, 1, 0, 0);
	Icon_t3 _icon33(400, 300, 100, 100, 1, 0, 0);
	Icon_t4 _icon4(550, 100, 100, 100, 1, 0, 0);
	Icon_t4 _icon44(550, 300, 100, 100, 1, 0, 0);
	Icon_t5 _icon5(700, 100, 100, 100, 1, 0, 0);
	Icon_t5 _icon55(700, 300, 100, 100, 1, 0, 0);
	Icon_t6 _icon6(850, 100, 100, 100, 1, 0, 0);
	Icon_t6 _icon66(850, 300, 100, 100, 1, 0, 0);
	Icon_t7 _icon7(1000, 100, 100, 100, 1, 0, 0);
	Icon_t7 _icon77(1000, 300, 100, 100, 1, 0, 0);
	Icon_t8 _icon8(1150, 100, 100, 100, 1, 0, 0);
	Icon_t8 _icon88(1150, 300, 100, 100, 1, 0, 0);
	Icon_t9 _icon9(1300, 100, 100, 100, 1, 0, 0);
	Icon_t9 _icon99(1300, 300, 100, 100, 1, 0, 0);
	Icon_t10 _icon10(1450, 100, 100, 100, 1, 0, 0);
	Icon_t10 _icon100(1450, 300, 100, 100, 1, 0, 0);

	main->pushicon(_icon1);
	main->pushicon(_icon11);
	main->pushicon(_icon2);
	main->pushicon(_icon22);
	main->pushicon(_icon3);
	main->pushicon(_icon33);
	main->pushicon(_icon4);
	main->pushicon(_icon44);
	main->pushicon(_icon5);
	main->pushicon(_icon55);
	main->pushicon(_icon6);
	main->pushicon(_icon66);
	main->pushicon(_icon7);
	main->pushicon(_icon77);
	main->pushicon(_icon8);
	main->pushicon(_icon88);
	main->pushicon(_icon9);
	main->pushicon(_icon99);
	main->pushicon(_icon10);
	main->pushicon(_icon100);

	if (!main->initiate())
	{
		std::cout << "init error! " << std::endl;
		exit(1);
	}

	while (main->run());

	if (!main->terminate())
	{
		std::cout << "destroy erroy! " << std::endl;
	}
	delete main;
	return 0;
}