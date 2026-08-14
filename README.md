This blossomed from me initially asking myself, "How close to Python can I make C++ syntax look without directly editing the compiler?"

The question turned into Cobra, a separate little mini language that I tried to make as close to Python syntax as possible using C++ macros and some helper functions.

Then I wondered, "How far can I take #define and some helper functions? What if a theoretical programmer thought, 'I want to write a programming language that's as readable as possible' but ended up creating a mess?"

The answer: **snek**, a deviation of Cobra which is in itself a deviation of C++,

Snek syntax (as compared to C++):
| Snek | C++ |
|----------|----------|
| `start_code` | `int main() {` |
| `we` | `{` |
| `end` | `}` |
| `the` | `(` |
| `then` | `)` |
| `next` | `;` |
| `becomes` | `=` |
| `is` | `==` |
| `plus` | `+` |
| `part` | `.` (for objects) |
| `actually` | `&` (for pointers/references) |
| `but` | `*` (for pointers) |
| `magic` | `->` |
| `nothing` | `nullptr` |
| `words` | `std::string` |
| `number` | `int` |
| `code_snippet` | `auto` (used for functions) |
| `let` | `auto` (used for variables) |
| `towords` | `std::to_string` |
| `stop` | `break` |
| `loop(range)` | `for (int i = 0; i < range; i++)` |
| `start_loop(start, range)` | `for (int i = start; i < range; i++)` |
| `start_loop_step(start, range, step)` | `for (int i = start; i < range; i += step)` |
| `gathering` | `struct` |
| `get` | `return` |
| `compare` | `switch` |
| `isit` | `case` |
| `ifso` | `:` (for switch/case statements) |
| `ifnothing` | `default` |
| `write the x then` (`write(x)`) | `std::cout << x << std::endl` |
| `comment(x)` | `// x` |
| `input the prompt then` (`input(prompt)`) | `std::cout << prompt << std::endl; std::string input; std::getline(std::cin, input); return input;` (essentially just get user input with a prompt) |

IMPORTANT: In order to properly use code_snippet, your C++ compiler should be C++ 20 or later! It still technically works on older versions, but it's not as safe.
