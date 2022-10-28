#include <iostream>

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};

void getXML(int id, double weight, bool is_broken, double price) {
    std::printf("\t<MobilePhone id=\"%i\" weight=\"%.1f\" is_broken=\"%s\" price=\"%.2f\"/>\n", id, weight, (is_broken) ?  "true":"false", price);
}

int main() {
    int num = 0;
    std::cin >> num;
    double mobWeight, mobPrice;
    bool mobBrokenFlag;
    struct MobilePhone lst[num];
    for (int i = 0; i < num; i++) {
        std::cin >> mobWeight >> mobBrokenFlag >> mobPrice;
        lst[i].weight = mobWeight;
        lst[i].is_broken = mobBrokenFlag;
        lst[i].price = mobPrice;
    }
    std::cout << "<MobilePhones>\n";
    for (int i = 0; i < num; i++) {
        getXML(i, lst[i].weight, lst[i].is_broken, lst[i].price);
    }
    std::cout << "</MobilePhones>\n";
    return 0;
}