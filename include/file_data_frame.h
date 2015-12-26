#ifndef __MLLIB_FILE_DATA_FRAME_H__
#define __MLLIB_FILE_DATA_FRAME_H__

#include "data_frame.h"

class FileDataFrame : public DataFrame
{
public:
    FileDataFrame(const std::string& filename);
    ~FileDataFrame();

    virtual int get_raw_data();

private:
    const std::string filename_;
};

#endif