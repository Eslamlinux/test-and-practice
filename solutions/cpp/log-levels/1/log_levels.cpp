#include <string>

namespace log_line {
std::string message(std::string line) {
    int pos = line.find(": ");
    return line.substr(pos+2);
}

std::string log_level(std::string line) {
    int pos1 = line.find("[");
    int pos2 = line.find("]");
    return line.substr(pos1+1,pos2-1);
}

std::string reformat(std::string line) {
    return (log_line::message(line) + " (" + log_line::log_level(line) + ")");
}
}  
