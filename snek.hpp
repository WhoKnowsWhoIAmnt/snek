#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>

//all the stuff to write "Cobra" code
#define code_snippet auto
#define let auto
#define next ;
#define is ==
#define isnot !=
#define isgreaterthan >
#define islessthan <
#define subtract -=
#define becomes =
#define stop break
#define the (
#define then )
#define towords std::to_string
#define tonumber stoi
#define we {
#define end }
#define at [
#define position ]
#define part .
#define loop(range) for (int i = 0; i < range; i++) {
#define start_loop(min, range) (int i = min; i < range; i++)
#define start_loop_step(min, range, step) (int i = min; i < range; i += step)
#define gathering struct
#define words std::string
#define number int
#define letter char
#define decimal double
#define truth bool
#define get return
#define start_code int main() {
#define actually &
#define but *
#define magic ->
#define nothing nullptr
#define comment(x) // nothing
#define plus +
#define minus -
#define times *
#define over /
#define compare switch
#define isit case
#define ifso :
#define ifnothing default
#define with ,
#define name_numbers enum class
#define list(type) std::vector<type>
#define redtext "\033[31m"
#define bluetext "\033[34m"
#define clearformat "\033[0m"
#define force_end_code exit(0);

void write(const auto& print) {
    std::cout << print << std::endl;
}

auto input(const std::string& prompt) {
    std::string input;
    while (true) {
        std::cout << prompt << std::endl;
        if (std::cin >> input) {
            return input;
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

std::random_device rd;
std::mt19937 gen(rd());

int randomnumber(int min, int max) {
    std::uniform_int_distribution<> dist(min, max);
    int randomNum = dist(gen);
    return randomNum;
}
