//
//  main.cpp
//  Gomoku
//
//  Created by Chenhao on 8/11/20
//  Copyright (c) 2020 ga. All rights reserved.
//

#ifndef __Gomoku__Computer__
#define __Gomoku__Computer__

#include <stdio.h>
#include <iostream>
#include <vector>
#include "Board.h"
#include <vector>
#include <unordered_map>

using namespace std;

class Computer{
	private:
	unordered_map<string, int> hashMap;
		
	public:
	vector<int> nextMove(Board &) ;
	vector<int> nextMoveAlphaBeta(Board &) ;
	int minimax(Board &, int, bool, int, int) ;
	int minimaxAlphaBeta(Board &, int, bool, int, int , int , int );
	int evaluation (Board &, bool);
	bool adjacentPlaced(Board &, int, int);
	bool checkVisitedBoard(Board &);
	int getEvaluation(Board & );
	void insertToHashMap(Board &, int);
};

#endif /* defined(__Gomoku__Computer__) */
