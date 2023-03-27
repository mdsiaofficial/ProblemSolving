#include <iostream>
using namespace std;

void maze_generation(string[20][20]);
void field(string[20][20]);

/*
Original maze was a 20 by 20, but phone size does not fit. Shrinked it to 20 by 17.
*/

int main()
{
    string array[20][20];
    
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            array[i][j] = "  ";
        }
    }

    maze_generation(array);

    field(array);

    return 0;
}

void maze_generation(string array[20][20])
{
    array[0][1] = " |";        array[1][1] = " |";     array[2][1] = " |";     array[3][3] = " |";
    array[0][5] = " |";        array[1][3] = " |";        array[2][3] = " |";        array[3][7] = " |";
    array[0][12] = " |";    array[1][5] = " |";        array[2][5] = " |";        array[3][10] = " |";
    array[0][14] = " |";    array[1][7] = " -";        array[2][7] = " |";        array[3][16] = " |";
    array[0][15] = "--";    array[1][8] = "--";        array[2][10] = " |";
    array[0][16] = "--";    array[1][9] = "--";        array[2][12] = " -";
    array[0][17] = "--";    array[1][10] = "--";    array[2][13] = "--";
    array[0][18] = "-|";    array[1][12] = " |";    array[2][14] = "--";
                            array[1][18] = " |";    array[2][16] = " |";
                                                    array[2][18] = " |";
        
    array[4][0] = "--";        array[5][3] = " |";        array[6][1] = " -";        array[7][1] = " |"; 
    array[4][1] = "--";        array[5][5] = " |";        array[6][2] = "--";        array[7][3] = " |";
    array[4][3] = " |";        array[5][12] = " |";    array[6][3] = "-|";        array[7][7] = " |";
    array[4][5] = " -";        array[5][14] = " |";    array[6][5] = " -";        array[7][9] = " |";
    array[4][6] = "--";                                array[6][6] = "--";        array[7][11] = " |";
    array[4][7] = "--";                                array[6][7] = "--";        array[7][15] = " |";
    array[4][8] = "--";                                array[6][9] = " -";
    array[4][10] = " -";                            array[6][11] = " -";
    array[4][12] = " |";                            array[6][12] = "--";
    array[4][14] = " -";                            array[6][14] = " -";
    array[4][15] = "--";                            array[6][15] = "--";
    array[4][16] = "--";                            array[6][16] = "--";
    array[4][17] = "--";                            array[6][18] = " -";
    array[4][18] = "--";                            array[6][19] = "--";
        
    array[8][1] = " |";        array[9][5] = " |";        array[10][1] = " -";     array[11][1] = " |";    
    array[8][3] = " -";        array[9][9] = " |";        array[10][2] = "--";     array[11][5] = " |";
    array[8][4] = "--";        array[9][11] = " |";    array[10][3] = "--";     array[11][11] = " |";
    array[8][5] = "--";        array[9][13] = " |";    array[10][5] = " |";     array[11][13] = " |";
    array[8][7] = " |";        array[9][15] = " |";    array[10][6] = "--";     array[11][15] = " |";
    array[8][9] = " |";                                array[10][7] = "--";
    array[8][11] = " |";                            array[10][8] = "--";
    array[8][12] = "--";                            array[10][9] = "--";
    array[8][13] = "--";                            array[10][11] = " |";
    array[8][15] = " |";                            array[10][13] = " |";
    array[8][16] = "--";                            array[10][15] = " |";
    array[8][17] = "--";                            array[10][17] = " -";
    array[8][18] = "--";                            array[10][18] = "--";
                                                    array[10][19] = "--";
    
    array[12][1] = " |";     array[13][1] = " |";    array[14][1] = " |";    array[15][3] = " |";
    array[12][3] = " -";     array[13][3] = " |";    array[14][3] = " |";    array[15][5] = " |";
    array[12][4] = "--";     array[13][7] = " |";    array[14][5] = " -";    array[15][7] = " |";
    array[12][5] = "--";     array[13][13] = " |";    array[14][6] = "--";    array[15][9] = " |";
    array[12][7] = " -";     array[13][15] = " -";    array[14][7] = "-|";    array[15][11] = " |";
    array[12][8] = "--";     array[13][16] = "--";    array[14][9] = " -";    array[15][13] = " -";
    array[12][9] = "--";     array[13][17] = "-|";    array[14][10] = "--";    array[15][14] = "--";
    array[12][10] = "--";                            array[14][11] = "--";    array[15][15] = "--";
    array[12][11] = "--";                            array[14][12] = "--";    array[15][17] = " |";
    array[12][13] = " |";                            array[14][13] = "-|";
    array[12][15] = " |";                            array[14][17] = " |";
    array[12][17] = " |";                            array[14][18] = "--";
    array[12][19] = " -";
    
    array[16][0] = "--";    array[17][5] = " |";    array[18][1] = " -";    array[19][7] = " |";
    array[16][1] = "--";    array[17][7] = " -";    array[18][2] = "--";    array[19][15] = " |";
    array[16][2] = "--";    array[17][9] = " |";    array[18][3] = "--";    array[19][18] = " |";
    array[16][3] = "--";    array[17][13] = " |";    array[18][4] = "--";
    array[16][5] = " |";    array[17][15] = " |";    array[18][5] = "--";
    array[16][9] = " |";    array[17][17] = " |";    array[18][7] = " |";
    array[16][11] = " |";                            array[18][9] = " -";
    array[16][15] = " |";                            array[18][10] = "--";
    array[16][17] = " |";                            array[18][11] = "--";
    array[16][19] = " -";                            array[18][12] = "--";
                                                    array[18][13] = "--";
                                                    array[18][15] = " |";
                                                    array[18][17] = " -";
                                                    array[18][18] = "--";
}

void field(string array[20][20])
{
    cout << "  -------------------------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "  |";
        
        for (int j = 0; j < 17; j++)
        {
            cout << array[i][j];
        }
        cout << " | "; cout << endl;
    }
    cout << "  -------------------------------------";
}