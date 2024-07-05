#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct TOPWorkResultObject {
    private: char pad_0[0x58]; public:
    void* get_Name();
    void* get_FilePath();
    void* get_State();
    int32_t& get_WorkItemResultInfoIndex();
    void* get_ResultOutputs();
    bool get_bAutoBakedSinceLastLoad();
    void set_bAutoBakedSinceLastLoad(bool value);
    void* get_OutputActorOwner();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
