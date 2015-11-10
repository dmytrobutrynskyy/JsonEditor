#ifndef STRINGFILE_H
#define STRINGFILE_H

#include <string>
#include <vector>

class StringFile
{
    std::vector<std::string> * file_;
public:
    StringFile();
    StringFile(std::vector<std::string>);
    StringFile(StringFile&& F_);
    ~StringFile();
    const std::vector<std::string> OutputWithOffset(unsigned _row);
};

#endif // STRINGFILE_H
