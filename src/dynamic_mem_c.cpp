#include "../include/dynamic_mem_c.hpp"

dynamic_mem_c::dynamic_mem_c()
{
    this->size = 0;
    this->mem = nullptr;
}

dynamic_mem_c::~dynamic_mem_c()
{
    if (this->mem)
    {
        delete this->mem;
    }
}

using namespace std;

void dynamic_mem_c::d_new(uint size)
{
    if (size == 0)
    {
        return;
    }
    if (this->mem != nullptr)
    {
        delete this->mem;
        this->mem = nullptr;
    }
    try
    {
        this->mem = new unsigned char[size];
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return;
    }

    this->size = size;
    memset(this->mem, 0, this->size);
}

void dynamic_mem_c::d_free()
{
    if (this->mem)
    {
        delete this->mem;
        this->mem = nullptr;
    }
    this->size = 0;
}

int dynamic_mem_c::get_size() const
{
    return this->size;
}

void dynamic_mem_c::copy(string &dest, const uint size) const
{
    if (this->mem)
    {
        for (uint i = 0; i < size; i++)
        {
            dest.push_back(this->mem[i]);
        }
    }
}

bool dynamic_mem_c::set_data(const u_char *in, const uint size)
{
    if (size == 0 || this->size < size)
    {
        ERROR_NO_COMMENT;
        return false;
    }
    for (size_t i = 0; i < size; i++)
    {
        this->mem[i] = in[i];
    }
    return true;
}

void dynamic_mem_c::print_data() const
{
    if (this->get_size() == 0 || this->mem == nullptr)
    {
        return;
    }
    for (auto i = 0; i < this->get_size(); i++)
    {
        printf("%0xd", this->mem[i]);
    }
    cout << endl;
}

void dynamic_mem_c::clear()
{
    if (this->mem == nullptr || this->get_size() == 0)
    {
        return;
    }
    memset(this->mem, 0, this->get_size());
}

std::string dynamic_mem_c::to_string() const
{
    if (this->size == 0 || this->mem == nullptr)
    {
        return "";
    }
    string buf;
    for (size_t i = 0; i < this->get_size(); i++)
    {
        buf += this->mem[i];
    }
    return buf;
}
