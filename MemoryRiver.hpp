#ifndef BPT_MEMORYRIVER_HPP
#define BPT_MEMORYRIVER_HPP

#include <fstream>
#include <string>

using std::string;
using std::fstream;
using std::ifstream;
using std::ofstream;

template<class T, int info_len = 2>
class MemoryRiver {
public:
    MemoryRiver() = default;
    MemoryRiver(const string& file_name) {}
    void initialise(string FN = "") {}
    void get_info(int &tmp, int n) { tmp = 0; }
    void write_info(int tmp, int n) {}
    int write(T &t) { return 0; }
    void update(T &t, const int index) {}
    void read(T &t, const int index) {}
    void Delete(int index) {}
};

#endif //BPT_MEMORYRIVER_HPP
