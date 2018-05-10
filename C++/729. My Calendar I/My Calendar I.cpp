//
// Created by 韩正博 on 18/5/9.
//
#include "../header.h"

class MyCalendar {
public:
    MyCalendar() {

    }

    bool book(int s, int e) {
        auto next = books.lower_bound(
                {s, e}); // first element with key not go before k (i.e., either it is equivalent or goes after).
        if (next != books.end() && next->first < e) return false; // a existing book started within the new book (next)
        if (next != books.begin() && s < (--next)->second)
            return false; // new book started within a existing book (prev)
        books.insert({s, e});
        return true;
    }

private:
    set<pair<int, int>> books;
};
