#include "../include/sha_c.hpp"

SHA_c::SHA_c()
{
}

SHA_c::~SHA_c()
{
}

using namespace std;

string SHA_c::sha1_cal(const string &src) const
{

    SHA_CTX sha_ctx;
    if (!(SHA1_Init(&sha_ctx)))
    {
        ERROR("SHA1_Init");
        return nullptr;
    }
    if (!(SHA1_Update(&sha_ctx, (void *)src.c_str(), src.length())))
    {
        ERROR("SHA1_Update");
        return nullptr;
    }

    string result;
    unsigned char *buf = static_cast<unsigned char *>(calloc(sizeof(unsigned char), SHA_DIGEST_LENGTH + 1));
    if (!(SHA1_Final(buf, &sha_ctx)))
    {
        ERROR("SHA1_Final");
        return nullptr;
    }

    for (int i = 0; i < SHA_DIGEST_LENGTH; i++)
    {
        result.push_back(buf[i]);
    }
    return result;
}

string SHA_c::sha2_cal(const string &src, const SHA_c::SHA2_bit bit) const
{
    string result;
    if (bit == SHA_c::SHA2_bit::SHA_224)
    {
        SHA256_CTX ctx;
        unsigned char *buf = static_cast<unsigned char *>(calloc(sizeof(unsigned char), SHA224_DIGEST_LENGTH + 1));
        if (!SHA224_Init(&ctx))
        {
            ERROR("SHA224_Init");
            return nullptr;
        }

        if (!SHA224_Update(&ctx, src.c_str(), src.length()))
        {
            ERROR("SHA224_Update");
            return nullptr;
        }
        if (!SHA224_Final(buf, &ctx))
        {
            ERROR("SHA224_Final");
            return nullptr;
        }

        for (int i = 0; i < SHA224_DIGEST_LENGTH; i++)
        {
            result.push_back(buf[i]);
        }
        free(buf);
        buf = nullptr;
        return result;
    }
    if (bit == SHA_c::SHA2_bit::SHA_256)
    {
        SHA256_CTX ctx;
        unsigned char *buf = static_cast<unsigned char *>(calloc(sizeof(unsigned char), SHA256_DIGEST_LENGTH + 1));
        if (!SHA256_Init(&ctx))
        {
            ERROR("SHA256_Init");
            return nullptr;
        }
        if (!SHA256_Update(&ctx, src.c_str(), src.length()))
        {
            ERROR("SHA256_Update");
            return nullptr;
        }
        if (!SHA256_Final(buf, &ctx))
        {
            ERROR("SHA256_Final");
            return nullptr;
        }
        for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        {
            result.push_back(buf[i]);
        }
        free(buf);
        buf = nullptr;
        return result;
    }
    if (bit == SHA_c::SHA2_bit::SHA_384)
    {
        SHA512_CTX ctx;
        unsigned char *buf = static_cast<unsigned char *>(calloc(sizeof(unsigned char), SHA384_DIGEST_LENGTH + 1));
        if (!SHA384_Init(&ctx))
        {
            ERROR("SHA384_Init");
            return nullptr;
        }
        if (!SHA384_Update(&ctx, src.c_str(), src.length()))
        {
            ERROR("SHA384_Update");
            return nullptr;
        }
        if (!SHA384_Final(buf, &ctx))
        {
            ERROR("SHA384_Final");
            return nullptr;
        }
        for (int i = 0; i < SHA384_DIGEST_LENGTH; i++)
        {
            result.push_back(buf[i]);
        }
        free(buf);
        buf = nullptr;
        return result;
    }
    if (bit == SHA_c::SHA2_bit::SHA_512)
    {
        SHA512_CTX ctx;
        unsigned char *buf = static_cast<unsigned char *>(calloc(sizeof(unsigned char), SHA512_DIGEST_LENGTH + 1));
        SHA512_Init(&ctx);
        SHA512_Update(&ctx, src.c_str(), src.length());
        SHA512_Final(buf, &ctx);
        if (!SHA512_Init(&ctx))
        {
            ERROR("SHA512_Init");
            return nullptr;
        }
        if (!SHA512_Update(&ctx, src.c_str(), src.length()))
        {
            ERROR("SHA512_Update");
            return nullptr;
        }
        if (!SHA512_Final(buf, &ctx))
        {
            ERROR("SHA512_Final");
            return nullptr;
        }

        for (int i = 0; i < SHA512_DIGEST_LENGTH; i++)
        {
            result.push_back(buf[i]);
        }
        free(buf);
        buf = nullptr;
        return result;
    }

    return nullptr;
}

bool SHA_c::sha2_cal(const std::string &hex_in, dynamic_mem_c &out, const SHA2_bit bit) const
{
    if (this->isHex(hex_in) == false || out.get_size() < hex_in.size())
    {
        cout << hex_in.size() << endl
             << out.get_size() << endl;

        ERROR_NO_COMMENT;
        return false;
    }
    dynamic_mem_c hex;
    hex.d_new(hex_in.size());
    this->hex2bin(hex_in, hex);

    if (bit == SHA_c::SHA2_bit::SHA_224)
    {
        SHA256_CTX ctx;
        dynamic_mem_c buf;
        buf.d_new(SHA224_DIGEST_LENGTH);

        if (!SHA224_Init(&ctx))
        {
            ERROR("SHA224_Init");
            return false;
        }

        if (!SHA224_Update(&ctx, hex.mem, hex.get_size()))
        {
            ERROR("SHA224_Update");
            return false;
        }
        if (!SHA224_Final(buf.mem, &ctx))
        {
            ERROR("SHA224_Final");
            return false;
        }

        for (int i = 0; i < SHA224_DIGEST_LENGTH; i++)
        {
            out.mem[i] = buf.mem[i];
        }
    }
    if (bit == SHA_c::SHA2_bit::SHA_256)
    {
        SHA256_CTX ctx;
        dynamic_mem_c buf;
        buf.d_new(SHA256_DIGEST_LENGTH);

        if (!SHA256_Init(&ctx))
        {
            ERROR("SHA256_Init");
            return false;
        }

        if (!SHA256_Update(&ctx, hex.mem, hex.get_size()))
        {
            ERROR("SHA256_Update");
            return false;
        }
        if (!SHA256_Final(buf.mem, &ctx))
        {
            ERROR("SHA256_Final");
            return false;
        }

        for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        {
            out.mem[i] = buf.mem[i];
        }
    }
    if (bit == SHA_c::SHA2_bit::SHA_384)
    {
        SHA512_CTX ctx;
        dynamic_mem_c buf;
        buf.d_new(SHA384_DIGEST_LENGTH);

        if (!SHA384_Init(&ctx))
        {
            ERROR("SHA384_Init");
            return false;
        }

        if (!SHA384_Update(&ctx, hex.mem, hex.get_size()))
        {
            ERROR("SHA384_Update");
            return false;
        }
        if (!SHA384_Final(buf.mem, &ctx))
        {
            ERROR("SHA384_Final");
            return false;
        }

        for (int i = 0; i < SHA384_DIGEST_LENGTH; i++)
        {
            out.mem[i] = buf.mem[i];
        }
    }
    if (bit == SHA_c::SHA2_bit::SHA_512)
    {
        SHA512_CTX ctx;
        dynamic_mem_c buf;
        buf.d_new(SHA512_DIGEST_LENGTH);

        if (!SHA512_Init(&ctx))
        {
            ERROR("SHA512_Init");
            return false;
        }

        if (!SHA512_Update(&ctx, hex.mem, hex.get_size()))
        {
            ERROR("SHA512_Update");
            return false;
        }
        if (!SHA512_Final(buf.mem, &ctx))
        {
            ERROR("SHA512_Final");
            return false;
        }

        for (int i = 0; i < SHA512_DIGEST_LENGTH; i++)
        {
            out.mem[i] = buf.mem[i];
        }
    }
    else
    {
        ERROR_NO_COMMENT;
        return false;
    }

    return true;
}

bool SHA_c::sha3_cal(const std::string &src, dynamic_mem_c &out, const SHA_c::SHA3_bit mode) const
{
    if (src.size() == 0 || out.get_size() == 0)
    {
        ERROR_NO_COMMENT;
        return false;
    }

    const EVP_MD *md;
    dynamic_mem_c buffer;

    switch (mode)
    {
    case SHA_c::SHA3_bit::SHA_224:

        md = EVP_sha3_224();
        buffer.d_new(SHA224_DIGEST_LENGTH);

        break;

    case SHA_c::SHA3_bit::SHA_256:
        md = EVP_sha3_256();
        buffer.d_new(SHA256_DIGEST_LENGTH);

        break;

    case SHA_c::SHA3_bit::SHA_384:
        md = EVP_sha3_384();
        buffer.d_new(SHA384_DIGEST_LENGTH);

        break;

    case SHA_c::SHA3_bit::SHA_512:
        md = EVP_sha3_512();
        buffer.d_new(SHA512_DIGEST_LENGTH);

        break;

    default:
        break;
    }

    EVP_MD_CTX *hashctx;
    hashctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(hashctx, md, NULL);
    EVP_DigestUpdate(hashctx, src.c_str(), src.size());
    unsigned int outlen;
    EVP_DigestFinal_ex(hashctx, buffer.mem, &outlen);

    if (out.set_data(buffer.mem, outlen) == false)
    {
        ERROR_NO_COMMENT;
        return false;
    }

    return true;
}

string SHA_c::str2hex(const string &src) const
{
    stringstream buf;
    char p[10];
    for (uint i = 0; i < src.size(); i++)
    {
        sprintf(p, "%02x", (unsigned char)src[i]);
        buf << p;
    }
    return buf.str();
}

string SHA_c::str2hex(const dynamic_mem_c &src) const
{
    stringstream buf;
    char p[10];
    for (uint i = 0; i < src.get_size(); i++)
    {
        sprintf(p, "%02x", src.mem[i]);
        buf << p;
    }
    return buf.str();
}

bool SHA_c::hex2bin(const std::string hex, dynamic_mem_c &out) const
{
    if (this->isHex(hex) == false || out.get_size() < hex.size())
    {
        ERROR_NO_COMMENT;
        return false;
    }
    for (size_t i = 0; i < hex.size(); i += 2)
    {
        out.mem[i] = stol(hex, nullptr, 16);
    }
    return true;
}

bool SHA_c::isHex(const std::string hex) const
{
    if (hex.empty())
    {
        return false;
    }
    string buf;
    for (size_t i = 0; i < hex.size(); i++)
    {
        buf = hex[i];
        if (isxdigit(stoi(buf, nullptr, 10)) == 0)
        {
            return false;
        }
    }
    return true;
}
