#include "file_data_frame.h"

int main(int argc, char const *argv[])
{
    FileDataFrame data_frame("data/test_data");
    data_frame.get_raw_data();
    data_frame.output_raw_data();
    return 0;
}