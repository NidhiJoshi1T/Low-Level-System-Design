#include "strategy.h"
class SortContext {
private:
    SortingStrategy* strategy;
public:
    void setStrategy(SortingStrategy* strategy) {
        this->strategy = strategy;
    }

    void executeStrategy(std::vector<int>& arr){
        strategy->sort(arr);
    }
};