
#include "../Top/Top.h"
#include "../Block/BlockBase.h"
#include "../Block/NormalBlock.h"
#include "../Block/MoveBlock.h"
#include "../Block/FallBlock.h"
#include "../Block/DoubleBlock.h"



class Map
{
public:
    Map();
    void update();
    void draw();
	//�v���C����stage�̔ԍ���stage��map_chip�̐��������ɂ�������
    void setup(int, Vec2i);

	Vec2f getPlayerStartPos() const;

	//struct�^��player��player��condition�������ł������
	//block�ɂ߂荞�񂾕��̒l��(�{)�̒l�ŕԂ��܂�
	Vec2f isHitPlayerToBlock(Object, CONDITION);

	//�I������Ă���}�b�v�`�b�v�̍��W�������Ŋl������
	//�g�����点��
	void selected(Vec2i);

	//�I������Ă���}�b�v�`�b�v�̍��W��
	//�����Ŋl�����ċz�����܂�
	bool sucked(Vec2i);

	//�I������Ă���}�b�v�`�b�v�̍��W��
	//�����Ŋl�����ĕ��o���܂�
	bool released(Vec2i);

private:

	std::vector<std::vector<BlockBase*>> map_chip;
	Vec2f player_start_pos;

	void mapDelete();
    
};


