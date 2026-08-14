#include <iostream>
#include <string>

//all the stuff to write "Cobra" code
#define code_snippet auto
#define let auto
#define next ;
#define is ==
#define becomes =
#define stop break
#define the (
#define then )
#define str std::to_string
#define we {
#define end }
#define part .
#define elif else if
#define loop(range) for (int i = 0; i < range; i++) {
#define j_in_range(min, range) (int j = min; j < range; j++)
#define k_in_range(min, range, step) (int k = min; k < range; k += step)
#define True true
#define False false
#define gathering struct
#define words std::string
#define number int
#define get return
#define start_code int main() {
#define actually &
#define but *
#define magic ->
#define nothing nullptr
#define comment(x)

void write(const auto& print) {
    std::cout << print << std::endl;
}

auto input(const std::string& prompt) {
    std::cout << prompt;
    std::string input;
    std::getline(std::cin, input);
    return input;
}