#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniParameterString : public HoudiniParameter {
    private: char pad_108[0x38]; public:
    void* get_Values();
    void* get_DefaultValues();
    void* get_ChosenAssets();
    bool get_bIsAssetRef();
    void set_bIsAssetRef(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
