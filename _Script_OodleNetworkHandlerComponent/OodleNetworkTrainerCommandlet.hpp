#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Commandlet.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OodleNetworkHandlerComponent {
#pragma pack(push, 1)
struct OodleNetworkTrainerCommandlet : public _Script_Engine::Commandlet {
    private: char pad_80[0x20]; public:
    bool get_bCompressionTest();
    void set_bCompressionTest(bool value);
    int32_t& get_HashTableSize();
    int32_t& get_DictionarySize();
    int32_t& get_DictionaryTrials();
    int32_t& get_TrialRandomness();
    int32_t& get_TrialGenerations();
    bool get_bNoTrials();
    void set_bNoTrials(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
