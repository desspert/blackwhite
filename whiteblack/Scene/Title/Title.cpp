#include "Title.h"


Title::Title(){
    setup();
}
void Title::update(){
    //�^�C�g���̃A�j���[�V�����Ƃ����Ƃ��ɏ����������邩������Ȃ�

}
void Title::draw(){
    //�^�C�g���̕`��
}
void Title::setup(){

}

SCENE Title::shift(){
    if (env.isPushKey(GLFW_KEY_ENTER)){
        return SCENE::STAGESELECT;
    }
    return SCENE::TITLE;
}

