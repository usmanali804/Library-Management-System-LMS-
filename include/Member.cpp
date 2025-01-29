#include "Member.h"

Member::Member(int id, const std::string& name) : memberID(id), name(name) {}

int Member::getMemberID() const {
    return memberID;
}

std::string Member::getName() const {
    return name;
}
