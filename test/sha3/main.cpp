#include "main.hpp"

using namespace std;

TEST(Sha3Test, ErrorTest)
{
    SHA_c sha;
    string test_data = "hoge";
    dynamic_mem_c out;
    TEST_COMMENT("出力サイズ0");
    EXPECT_FALSE(sha.sha3_cal(test_data, out, SHA_c::SHA3_bit::SHA_224));

    out.d_new(SHA224_DIGEST_LENGTH);
    TEST_COMMENT("出力サイズ不足");
    EXPECT_FALSE(sha.sha3_cal(test_data, out, SHA_c::SHA3_bit::SHA_512));
}

TEST(Sha3Test, Sha224Test)
{
    SHA_c sha;
    string test_data = "hoge";
    dynamic_mem_c out;
    out.d_new(SHA224_DIGEST_LENGTH);
    EXPECT_TRUE(sha.sha3_cal(test_data, out, SHA_c::SHA3_bit::SHA_224));
    out.d_free();
}
TEST(Sha3Test, Sha256Test)
{
    SHA_c sha;
    string test_data = "hoge";
    dynamic_mem_c out;
    out.d_new(SHA256_DIGEST_LENGTH);
    EXPECT_TRUE(sha.sha3_cal(test_data, out, SHA_c::SHA3_bit::SHA_256));
    out.d_free();
}
TEST(Sha3Test, Sha384Test)
{
    SHA_c sha;
    string test_data = "hoge";
    dynamic_mem_c out;
    out.d_new(SHA384_DIGEST_LENGTH);
    EXPECT_TRUE(sha.sha3_cal(test_data, out, SHA_c::SHA3_bit::SHA_384));
    out.d_free();
}
TEST(Sha3Test, Sha512Test)
{
    SHA_c sha;
    string test_data = "hoge";
    dynamic_mem_c out;
    out.d_new(SHA512_DIGEST_LENGTH);
    EXPECT_TRUE(sha.sha3_cal(test_data, out, SHA_c::SHA3_bit::SHA_512));
    out.d_free();
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