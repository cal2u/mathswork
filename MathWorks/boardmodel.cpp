/*
 * BoardModel.cpp
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */

#include "boardmodel.h"
#include <assert.h>


GameBoardModel::GameBoardModel(int width, int height)
{
    this->width = width;
    this->height = height;

    this->blocks = new int[width*height];
    this->selected = new bool[width*height];

    for (int i = 0; i < width*height; i++)
    {
        this->blocks[i] = -1;
    	this->selected[i] = false;
    }
}

GameBoardModel::~GameBoardModel()
{
    delete(this->blocks);
    delete(this->selected);
}

// Returns the number of blocks that arent filled
int GameBoardModel::num_empty_blocks()
{
    int count = 0;
    for (size_t i = 0; i < width*height; i++)
    {
        if (blocks[i] != -1)
        {
            count++;
        }
    }
    return count;
}

int GameBoardModel::get_gridsize()
{
	return width*height;
}

int GameBoardModel::get_blocks(int index)
{
	return blocks[index];//I need to be able to check every block
}

int GameBoardModel::get_block(int row, int col)
{
    assert(row >= 0 && col >= 0 && row < height && col < width);
    return blocks[row*width+col];
}

void GameBoardModel::set_block(int row, int col, int value)
{
    assert(row >= 0 && col >= 0 && row < height && col < width);
    blocks[row*width+col] = value;
}

void GameBoardModel::clear_block(int row, int col)
{
    assert(row >= 0 && col >= 0 && row < height && col < width);
    blocks[row*width+col] = -1;
    selected[row*width+col] = false;
}

void GameBoardModel::select_block(int row, int col)
{
    assert(row >= 0 && col >= 0 && row < height && col < width);
    selected[row*width+col] = true;
}

bool GameBoardModel::is_selected(int row, int col) {
    return selected[row*width+col];
}

void GameBoardModel::deselect_block(int row, int col)
{
    assert(row >= 0 && col >= 0 && row < height && col < width);
    selected[row*width+col] = false;
}
 /* namespace std */
