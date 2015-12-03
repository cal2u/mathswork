/*
 * BoardModel.h
 *
 *  Created on: Nov 19, 2015
 *      Author: Matt
 */

#ifndef BOARDMODEL_H_
#define BOARDMODEL_H_

class GameBoardModel {
private:
	// Basic dimensions
	 int width;
	 int height;

	int  *blocks;
	bool *selected;

	int  num_blocks; // Number of squares that are not empty

public:
	GameBoardModel(int width, int height);
	~GameBoardModel();


	int get_blocks(int index);//NEW, added it because I just wanted to find the content of every block that had a number,
				//and didnt know how to use the get_block(row, column) form you had made.
	int get_gridsize();//NEW, added it to get the parameters of the grid size without trying to get it from the 'blocks' array.

    int get_width()  { return width; };
    int get_height() { return height; };

	int num_empty_blocks(); // Maybe used for figuring out how many blocks to drop?

	int 	get_block(int row, int col);
	void 	set_block(int row, int col, int value);

    bool    is_selected(int row, int col);

	void	select_block(int row, int col); // Returns false if already selected
	void 	deselect_block(int row, int col); // Return false if not selected

	void 	clear_block(int row, int col);
};
 /* namespace std */

#endif /* BOARDMODEL_H_ */
