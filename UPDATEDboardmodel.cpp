/*
 * BoardModel.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */

#include "BoardModel.h"
#include <assert.h>


GameBoardModel::GameBoardModel( int width, int height) {
	this->width = width;
	this->height = height;

	this->blocks[width*height];
	this->selected[width*height];

	for (int i = 0; i < width*height; i++) {
		this->blocks[i] = -1;
		this->selected[i] = false;
	}
}

GameBoardModel::~GameBoardModel() {
	delete(this->blocks);
	delete(this->selected);
}

// Returns the number of blocks that arent filled
int GameBoardModel::get_num_blocks() {
	return num_blocks;
}

int GameBoardModel::get_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	return blocks[row*width+col];
}

void GameBoardModel::set_block(int row, int col, int value) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	blocks[row*width+col] = value;
}

void GameBoardModel::clear_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	blocks[row*width+col] = -1;
	selected[row*width+col] = false;
}

void GameBoardModel::select_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	selected[row*width+col] = true;
}

void GameBoardModel::deselect_block(int row, int col) {
	assert(row >= 0 && col >= 0 && row < height && col < width);
	selected[row*width+col] = false;
}
 /* namespace std */
