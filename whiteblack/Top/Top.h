#pragma once
#include "����.h"
#include "GamePad.h"

//����
//�g���Ƃ��͌^�w������Ă�����
enum class DIRECTION
{
    UP,
    DOWN,
    LEFT,
    RIGHT,
    NON
};
//�u���b�N�̑傫��
enum class BLOCKSIZE
{
    WIDTH = 150,
    HEIGTH = 200
};
//��ʑ傫��
enum WINDOW
{
    WIDTH = 1920,
    HEIGHT = 1080,
};
///�V�[��
enum class SCENE
{
    TITLE,
    STAGESELECT,
    GAME,
};
//�u���b�N�̎��
enum class BLOCK
{
    NORMAL_ = 1,
    WHITE = 2,
    BLACK_ =3,
    MOVE_=4,
    FALL_=5,
    DOUBLE_W = 6,
    DOUBLE_B = 7,

};
//�v���C���[�̏��
enum class CONDITION{
    BLACK,
    WHITE
};


//�ʒu
//�傫��
//�ړ���
struct Object
{
    Vec2f pos;
    Vec2f size;
    Vec2f vec;
};


//env�̃V���O���g��
class App
{
public:
    static AppEnv& get()
    {
        static AppEnv env(WIDTH, HEIGHT/*, false, true*/);

        return env;
    }
};

#define env App::get()

//�����_���̃V���O���g��
class _Random
{
public:
    static Random& get()
    {
        static Random rand;
        return rand;
    }
};
#define random _Random::get()
