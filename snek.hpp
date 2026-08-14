#include <iostream>
#include <string>

//all the stuff to write "snek" code
#define code_snippet auto
#define let auto
#define next ;
#define is ==
#define becomes =
#define stop break
#define the (
#define then )
#define towords std::to_string
#define we {
#define end }
#define with ,
#define part .
#define loop(range) for (int i = 0; i < range; i++) {
#define start_loop(min, range) (int i = min; i < range; i++)
#define start_loop_step(min, range, step) (int i = min; i < range; i += step)
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
#define plus +
#define compare switch
#define isit case
#define ifso :
#define ifnothing default

void write(const auto& print) {
    std::cout << print << std::endl;
}

auto input(const std::string& prompt) {
    std::cout << prompt;
    std::string input;
    std::getline(std::cin, input);
    return input;
}
