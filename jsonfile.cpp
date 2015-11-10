#include "jsonfile.h"
#include <fstream>

using std::ifstream;
using std::ofstream;

#define PARSE_FAIL 2
#define OPEN_FAIL 1
#define OPEN_SUCCESS 0

#define SAVE_FAIL 1
#define SAVE_SUCCESS 0

JSONFile::JSONFile()
{
    altered_ = false;
    opened_ = false;
}

int JSONFile::Open(std::string _path)
{
    ifstream file(_path);
    if (!file.is_open())
    {
        return OPEN_FAIL;
    }
    Json::Reader reader;
    if (!reader.parse(&file,&root_))
    {
        root_ = Json::Value::null;
        return PARSE_FAIL;
    }
    opened_ = true;

    return OPEN_SUCCESS;
}
int JSONFile::Save(std::string _path = location_)
{
    ofstream file(_path);
    Json::StyledStreamWriter writer;
    if(!writer.write(&file,&root_))
    {
        return SAVE_FAIL;
    }
    altered_ = false;
    return SAVE_SUCCESS;
}
int JSONFile::Close(){
    opened_ = false;
    root_ = Json::Value::null;
}

