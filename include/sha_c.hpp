#ifndef ___SHA1_HPP
#define ___SHA1_HPP

#include "openssl/aes.h"
#include "openssl/evp.h"
#include "openssl/sha.h"
#include <openssl/rand.h>

#include <memory.h>
#include <stdio.h>
#include <ctype.h>

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <memory>
#include <string>
#include <sstream>

#include "dynamic_mem_c.hpp"
#include "macro.hpp"

class SHA_c
{
private:
    SHA_c(const SHA_c &);

public:
    SHA_c();
    ~SHA_c();
    enum class SHA2_bit
    {
        SHA_224,
        SHA_256,
        SHA_384,
        SHA_512,
    };
    enum class SHA3_bit
    {
        SHA_224,
        SHA_256,
        SHA_384,
        SHA_512,
        SHAKE_128,
        SHAKE_256,
    };

    std::string
    sha1_cal(const std::string &src, const bool isHex) const;
    std::string sha2_cal(const std::string &src, const SHA2_bit bit) const;
    bool sha2_cal(const std::string &hex, dynamic_mem_c &out, const SHA2_bit bit) const;
    bool sha3_cal(const std::string &src, dynamic_mem_c &out, const SHA3_bit mode, const bool isHex) const;

    std::string str2hex(const std::string &src) const;
    std::string str2hex(const dynamic_mem_c &src) const;
    bool hex2bin(const std::string hex, dynamic_mem_c &out) const;
    bool isHex(const std::string hex) const;
};

#endif