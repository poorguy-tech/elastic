//
// Created by pg on 2021/4/18.
//

#ifndef ELASTIC_STATE_H
#define ELASTIC_STATE_H

#include <unordered_map>

class State {
private
    static int idCounter = 0;
    int id;
    int stateType;
    std::unordered_map<std::string,State> map={};
public

    State() {
        this.id = idCounter++;
    }
};


#endif //ELASTIC_STATE_H
