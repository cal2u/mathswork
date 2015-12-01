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

	int blocks[];
	bool selected[];

	int		num_blocks; // Number of squares that are not empty

public:
	GameBoardModel(int width, int height);
	~GameBoardModel();

	int get_num_blocks(); // Maybe used for figuring
						  // out how many blocks to drop?

	int 	get_block(int row, int col);
	void 	set_block(int row, int col, int value);

	void	select_block(int row, int col); // Returns false if already selected
	void 	deselect_block(int row, int col); // Return false if not selected

	void 	clear_block(int row, int col);
};
 /* namespace std */

#endif /* BOARDMODEL_H_ */
