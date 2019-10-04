//
// Created by Thoh Testarossa on 2019-04-05.
//

#include "../UtilServer.cpp"

#include "../../algo/BellmanFord/BellmanFord.cpp"
#include "../../algo/LabelPropagation/LabelPropagation.cpp"
#include "../../algo/PageRank/PageRank.cpp"

template class UtilServer<BellmanFord<double, double>, double, double>;
template class UtilServer<LabelPropagation<LPA_Value, std::pair<int, int>>, LPA_Value, std::pair<int, int>>;
template class UtilServer<PageRank<std::pair<double, double>, PRA_MSG>, std::pair<double, double>, PRA_MSG>;