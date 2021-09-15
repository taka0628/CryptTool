#include "main.hpp"

using namespace std;

TEST(sha2Test, hashTest)
{
    SHA_c sha;
    string test_data("hoge"), out;
    dynamic_mem_c temp;
    temp.d_new(SHA256_DIGEST_LENGTH);
    out = sha.sha2_cal(test_data, SHA_c::SHA2_bit::SHA_256);
    out = sha.str2hex(out);
    cout << "hex: " << out << endl;

    EXPECT_TRUE(sha.sha2_cal(out, temp, SHA_c::SHA2_bit::SHA_256));
    cout << "hex: " << sha.str2hex(temp) << endl;
}

TEST(isHexTest, isHex)
{
    SHA_c sha;
    EXPECT_TRUE(sha.isHex("1"));
    EXPECT_TRUE(sha.isHex("a"));
    EXPECT_TRUE(sha.isHex("A"));
    EXPECT_FALSE(sha.isHex("z"));
    EXPECT_TRUE(sha.isHex("ecb666d778725ec97307044d642bf4d160aabb76f56c0069c71ea25b1e926825"));
}

TEST(hexTest, hex2bin)
{
    string hex("58");
    SHA_c sha;
    dynamic_mem_c bin;
    bin.d_new(hex.size());
    ASSERT_TRUE(sha.hex2bin(hex, bin));
    for (size_t i = 0; i < bin.get_size(); i++)
    {
        cout << bin.mem[i];
    }
    cout << endl;

    hex.clear();
    hex += "A";
    ASSERT_TRUE(sha.hex2bin(hex, bin));

    printf("hex: %0xd\n", bin.mem[0]);
}