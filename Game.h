//
//  main.cpp
//  Gomoku
//
//  Created by Chenhao on 8/11/20
//  Copyright (c) 2020 ga. All rights reserved.
//

#ifndef __Gomoku__Game__
#define __Gomoku__Game__

#include <stdio.h>
#include "Board.h"
#include <vector>


class Game{
	private:
	Board board;

	
	public:
	Game();
	void playConsole();

	char getCurrentSymbol(int);

	void run();
};

#endif /* defined(__Gomoku__Game__) */
