#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QBrush>
#include "defines.h"

#define BLOCK_SIZE_X    (25 * GAMESCALE_FACTOR)
#define BLOCK_SIZE_Y    (25 * GAMESCALE_FACTOR)

#define BLOCK_MIDDLE_X(x) (x + (BLOCK_SIZE_X/2))
#define BLOCK_MIDDLE_Y(x) (x + (BLOCK_SIZE_Y/2))

enum s_blockbehavoir{
    MODE_SOLID = 0,
    MODE_DESTROYABLE,
    MODE_PATH,
    MODE_DEBUG,
    MODE_EXPLOSION
};
class Block :  public QGraphicsRectItem
{
public:
    Block();
    ~Block(){};
    Block(int XPos, int YPos, s_blockbehavoir blockmode);
    void set_Position(int XPos, int YPos);

    void current_hightlite(int PosX, int PosY);

    int istWalkable();
    void set_Blockbehavoir( s_blockbehavoir blockmode);
    void reset_Blockbehavoir();
    s_blockbehavoir get_Blockbehavoir();
    int exploding();

private:
    s_blockbehavoir Block_Behavoir;
    s_blockbehavoir Block_Behavoir_init;
};

#endif // BLOCK_H
