#pragma once
#include<vector>

//配列をシャフルする
void Shuffle(std::vector<int>& indices);

//ランダムな番号配列を作成する
std::vector<int> CreateRandomIndices(int n);

//間違った番号の配列を作成する(全ての答えから正しい答えを除外した配列)
//n				作成する番号の範囲
//correctIndex	正解の番号
std::vector<int> CreateWrongIndices(int n, int correctIndex);