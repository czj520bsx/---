#ifndef ONHAND_H
#define ONHAND_H

#include <vector>
#include "D:\c++ѧϰ\�½��ļ��� (2)\��������Ĵ�����ܲ�����˿�\C++�汾\Poker\Poker.h"

class OnHand {
public:
    std::vector<Poker> porkers;
    OnHand(const std::vector<Poker>& porkers);
    const std::vector<Poker>& getPorkers() const;
    void setPorkers(const std::vector<Poker>& porkers);
};

#endif  // ONHAND_H
