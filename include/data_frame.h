#ifndef __MLLIB_DATA_FRAME_H__
#define __MLLIB_DATA_FRAME_H__

#include <iostream>
#include <string>
#include <vector>

class DataFrame 
{
public:
    DataFrame() {};
    virtual ~DataFrame() {};

    virtual int get_raw_data() = 0;
    virtual int output_raw_data()
    {
        for (size_t i = 0; i < raw_data_buffer_.size(); ++i)
        {
            std::cout << raw_data_buffer_[i] << std::endl;
        }
    }

protected:
    std::vector<std::string> raw_data_buffer_;
    
};

#endif