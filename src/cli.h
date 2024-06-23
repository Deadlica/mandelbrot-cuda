#ifndef CLI_H
#define CLI_H

#include <string>
#include <unordered_map>

struct coord {
    double x;
    double y;
};

struct goal {
    coord min;
    coord max;
};

extern std::unordered_map<std::string, goal> goals;

void cli_help();
void cli_error(const std::string& message);
void cli_cast_to_num(char* argv[], int i, int& dst, std::string flag);
void cli_cast_to_num(char* argv[], int i, double& dst, std::string flag);
void parse_cli_args(int argc, char* argv[], int& width, int& height,
                    std::string& pattern, int& max_iter, double& zoom_factor,
                    bool& smooth);

#endif // CLI_H