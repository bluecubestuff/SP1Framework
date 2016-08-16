#include "Framework\console.h"
#include "generate_map.h"
#include "game.h"

#include <iostream>

string map(int level)
{

	switch (level)
	{
	case 1:
		return "map/map.txt";
		break;
	case 2:
		return "map/map2.txt";
		break;
	case 3:
		return"map/map3.txt";
		break;
	default:
		return"error";
		break;
	}

	return 0;
}
