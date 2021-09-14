#include "main.hpp"

using namespace std;

TEST(sha2Test, hashTest)
{
    SHA_c sha;
    string test_data("hoge"), out;
    dynamic_mem_c temp;
    temp.d_new(SHA256_DIGEST_LENGTH);
    out = sha.sha2_cal(test_data, SHA_c::SHA2_bit::SHA_256);
    cout << "hex: " << sha.str2hex(out) << endl;

    EXPECT_TRUE(sha.sha2_cal(out, temp, SHA_c::SHA2_bit::SHA_256));
    cout << "hex: ";
    temp.print_data();
}

TEST(hexTest, hex2bin)
{
    string hex("a");
    SHA_c sha;
    dynamic_mem_c bin;
    bin.d_new(10);
    ASSERT_TRUE(sha.hex2bin(hex, bin));
    printf("hex: %d\n", bin.mem[0]);

    hex.clear();
    hex += "A";
    ASSERT_TRUE(sha.hex2bin(hex, bin));

    printf("hex: %d\n", bin.mem[0]);
}