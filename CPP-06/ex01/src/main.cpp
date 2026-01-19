#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"

int main()
{
    Data* original = new Data();
    uintptr_t serialized = Serializer::serialize(original);
    Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "Original Data pointer: " << original << std::endl;
    std::cout << "Serialized uintptr_t: " << serialized << std::endl;
    std::cout << "Deserialized Data pointer: " << deserialized << std::endl;

    delete original;
    return 0;
}