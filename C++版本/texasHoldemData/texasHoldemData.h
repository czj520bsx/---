#ifndef TEXASHOLDEMDATA_H
#define TEXASHOLDEMDATA_H

#include <vector>
#include <cstdlib>
#include <array>
#include <string>
#include <algorithm>
#include "D:\c++ѧϰ\�½��ļ��� (2)\��������Ĵ�����ܲ�����˿�\C++�汾\Poker\Poker.h"
#include "D:\c++ѧϰ\�½��ļ��� (2)\��������Ĵ�����ܲ�����˿�\C++�汾\OnHand\OnHand.h"


class TexasHoldemData {
    static const int SMALLBLINDAMOUNT = 50; //Сäǰע
    static const int BIGBLINDAMOUNT = 100;  //��äǰע
    std::vector<int> unUsedPks;
    int startPos;
    std::vector<int> onTableMoneys;        //������Ǯ
    std::vector<bool> bAlive;
    std::vector<PorkersCombineType> porkersTypes;

public:
    static int iPlayerCount;                   //�������
    int bonus;                          //������
    int iAliveCount;
    std::vector<int> moneys;
    std::vector<int> thisTurnMoneys;
    std::vector<OnHand> onHands;
    int blindpos;
    std::vector<Poker> CommonPorkers;
   
    TexasHoldemData(int ipc, const std::vector<int>& initMoney);
    void Abort();
    void Init(int ipc, const std::vector<int>& initMoney);
    [[nodiscard]] const std::vector<OnHand>& getOnHands() const;
    void Preflop();
    void Preflop_After(const std::vector<Poker>& pks);
    void PreflopMoneyInit(int ipc);
    void Flop();
    void Flop_After(const std::vector<Poker>& pks);
    void Turn();
    void Turn_After(const Poker& pk);
    void River();
    void River_After(const Poker& pk);
    Poker RandomGetAPorker();
    void NewGame();
    void Call(int n);
    Poker RandomPopAPorker();
    void AddThisTurnMoneyToBonus();
    void Fold(int n);
    void Allin(int n);
    void Check(int n);
    void Bet(int n, int amount);
    void Raise(int n, int amount);
    int EndGame();
    void CalcPorkersType();
    int JudgeWhoWin(int x, int y);
    int JudgeWin(int x, int y);
    void CalcPorkersCombineTypeByPorkers(int x);
    PorkersCombineType GetPorkersCombineTypeByPksAndHs(std::vector<int> pksa, std::vector<int> hsa);
};
#endif  // TEXASHOLDEMDATA_H
