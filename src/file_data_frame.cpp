#include <iostream>
#include <fstream>
#include <string>
#include "file_data_frame.h"

FileDataFrame::FileDataFrame(const std::string& filename)
        :filename_(filename)
{}

FileDataFrame::~FileDataFrame()
{}

int FileDataFrame::get_raw_data()
{
    std::ifstream infile;
    std::string line;
    infile.open(filename_);
    while (getline(infile, line))   
    {
        raw_data_buffer_.push_back(line);
    }
    infile.close();
    return 0;
}