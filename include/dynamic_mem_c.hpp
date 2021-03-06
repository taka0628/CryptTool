#ifndef ___DYNAMIC_MEM_HPP
#define ___DYNAMIC_MEM_HPP

#include <memory.h>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <sstream>

#include "macro.hpp"

class dynamic_mem_c
{
private:
    dynamic_mem_c(const dynamic_mem_c &);
    uint size;

public:
    dynamic_mem_c();
    ~dynamic_mem_c();

    unsigned char *mem;

    void d_new(uint size);
    void d_free();
    int get_size() const;
    void copy(std::string &dest, const uint size) const;
    bool set_data(const u_char *in, const uint size);
    void print_data() const;
    void clear();
    std::string to_string() const;
};

#endif