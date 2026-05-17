#include<iostream>
typedef enum {
	Start,
	end,
	menu,
}
GameOver
;

void enumeration()
{
	enum direction {
		NORTH
		,SOUTH
		,EAST,
		WEST
	};

	//enum is basically creating a data type consisting of int  and than 
	//setting than remmeber they always return a int

	direction n=NORTH;
	std::cout << n<<std::
		endl;
}
