#pragma once
#pragma once
#include<string>


class TreeNodee {
public:
    std::string text;
    TreeNodee* yes_ans;
    TreeNodee* no_ans;
    TreeNodee();
    typedef TreeNodee* TreeNodePtr;
};



