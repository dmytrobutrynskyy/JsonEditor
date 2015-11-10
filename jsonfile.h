#ifndef JSONFILE_H
#define JSONFILE_H
#include <json/json.h>
#include "stringfile.h"
using std::string;
class JSONFile
{
private:
    bool opened_;
    bool altered_;
    Json::Value root_;
    string location_;
public:
    int Open(string _path);
    int Save(string _path = location_);
    int Close();
    int Get(string _path,Json::Value& _out);
    int Set(string _path,const Json::Value& _in);
    StringFile ToStringFile();
    JSONFile();
};

#endif // JSONFILE_H
