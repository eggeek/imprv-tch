//
// Created by Bojie Shen on 8/8/20.
//

#ifndef KATCH_RANGE_H
#define KATCH_RANGE_H

template<class Iter>
struct Range{

    Iter begin()const{return begin_;}
    Iter end()const{return end_;}

    Iter begin_, end_;
};

template<class Iter>
Range<Iter>make_range(Iter begin, Iter end){
    return {begin, end};
}

#endif //KATCH_RANGE_H
