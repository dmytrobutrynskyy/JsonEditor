#include "stringfile.h"

using std::vector;
using std::string;

StringFile::StringFile() {
}
StringFile::StringFile(std::vector<std::string> _lines) {
    file_ = new vector<string>(_lines);
}
StringFile::StringFile(StringFile&& _F) {
    file = _F.file_;
    _F.file_ = nullptr;
}
StringFile::~StringFile() {
    delete file_;
}
