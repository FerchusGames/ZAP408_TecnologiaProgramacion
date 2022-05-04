#include <iostream>

void mostrarSudoku(int grid[9][9]);
bool resolverSudoku(int grid[9][9], int r, int c);

int main()
{
	int grid[9][9] = 
	{ 
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};

	std::cout << "El Sudoku sin resolver es: " << std::endl << std::endl;

	mostrarSudoku(grid);

	resolverSudoku(grid, 0, 0);

	std::cout << "\n\nEl Sudoku resuelto es: " << std::endl << std::endl;

	mostrarSudoku(grid);

}

void mostrarSudoku(int grid[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << grid[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

bool esValido(int grid[9][9], int r, int c, int k)
{
	bool notInRow = true;
	bool notInColumn = true;
	bool notInGrid = true;

	// Checar que el número no esté en la misma fila o columna
	for (int i = 0; i < 9; i++)
	{
		if (k == grid[r][i]) notInRow = false;
		if (k == grid[i][c]) notInColumn = false;
	}

	// Checar que el número no esté en el mismo grid
	for (int i = (r / 3) * 3; i < (r / 3) * 3 + 3; i++)
	{
		for (int j = (c / 3) * 3; j < (c / 3) * 3 + 3; j++)
		{
			if (k == grid[i][j]) notInGrid = false;
		}
	}

	if (notInRow && notInColumn && notInGrid)
		return true;

	else 
		return false;
}

bool resolverSudoku(int grid[9][9], int r, int c)
{
	if (r == 9) return true;
	else
		if (c == 9) resolverSudoku(grid, r + 1, 0);
	else 
		if (grid[r][c] != 0) resolverSudoku(grid, r, c + 1);
	else
		for (int k = 1; k < 10; k++)
		{
			if (esValido(grid, r, c, k))
			{
				grid[r][c] = k;
				if (resolverSudoku(grid, r, c + 1)) return true;
			//	else grid[r][c] = 0;
			}
		}
	return false;

}