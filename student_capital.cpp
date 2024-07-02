#include <iostream>
#include <vector>
#include <algorithm>

struct Laptop {
    double price;
    double gain;
    bool done = false;
};

bool compare(Laptop& a, Laptop& b) {
    return a.gain > b.gain;
}


int main() {
    // reading data from is
    int K, N;
    double C;

    std::cin >> K >> N >> C;

    std::vector<Laptop> laptops(K);

    for (Laptop &l: laptops)
        std::cin >> l.gain;

    for (Laptop &l: laptops)
        std::cin >> l.price;

    // sorting by profit
    std::sort(laptops.begin(), laptops.end(), compare);

    // capital calculation
    while (N > 0){
        bool can_buy = false;   // flag against the eternal cycle when there is not enough money to buy

        // searching for a laptop for which student has enough money
        for (auto & laptop : laptops){
            if (C >= laptop.price && !laptop.done){
                // purchase, renovation, sale, capital increase
                C += laptop.gain;
                laptop.done = true;
                --N;
              
                can_buy = true;
                break;  // start for again because the capital has changed
            }
        }

        if (!can_buy) break;
    }

    std::cout << "capital at the end of the summer: " << C << std::endl;

    return 0;
}
