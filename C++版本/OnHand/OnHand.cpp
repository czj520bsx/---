#include "D:\c++ѧϰ\�½��ļ��� (2)\��������Ĵ�����ܲ�����˿�\C++�汾\OnHand\OnHand.h"
#include "D:\c++ѧϰ\�½��ļ��� (2)\��������Ĵ�����ܲ�����˿�\C++�汾\Poker\Poker.h"

OnHand::OnHand(const std::vector<Poker>& porkers) {
    this->porkers = porkers;
}

const std::vector<Poker>& OnHand::getPorkers() const {
    return porkers;
}

void OnHand::setPorkers(const std::vector<Poker>& porkers) {
    this->porkers = porkers;
}