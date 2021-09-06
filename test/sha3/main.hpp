#ifndef ___MAIN_HPP
#define ___MAIN_HPP

#include "../../include/sha_c.hpp"
#include "../../include/dynamic_mem_c.hpp"

#include "gtest/gtest.h"
#include "openssl/rand.h"

#define TEST_COMMENT(comment) \
    cout << "[TEST CASE]\n\t" << comment << endl

#define TEST_OUTPUT(out) \
    cout << "[TEST OUT]\n\t" << out << endl

#endif
