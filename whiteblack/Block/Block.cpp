#include "Block.h"


Block::Block(){
    setup();
    
}

void Block::update(){
    switch (status)
    {
    case BLOCK::FALL_:
        break;
    case BLOCK::MOVE_:
        break;
    default:


        break;
    }
    
}

void Block::draw(){

}

void Block::setup(){
    block.size = Vec2f((float)BLOCKSIZE::WIDTH, 
        (float)BLOCKSIZE::HEIGTH);
    block.vec = Vec2f(0, 0);

}
///ブロックのポジションのセット
void Block::setPos(Vec2f _pos){
    block.pos = _pos;
}
//ブロックのステータスのセット
void Block::setStatus(BLOCK _status){
    status = _status;
}

//プレイヤーの情報
//上のブロックの情報
//下のブロックの情報
//動かすときの向き
//何マス動かすのか？
Vec2f Block::Collision(Object _player, 
    BLOCK _up, BLOCK _down,
    DIRECTION _direction,
    int move_vector ){



    switch (status)
    {
    case BLOCK::FALL_:
        break;
    case BLOCK::MOVE_:
        break;
    default:
        break;
    }







    return Vec2f(0,0);
}

