#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct TOPNetwork : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    int32_t& get_NodeId();
    void* get_NodeName();
    void* get_NodePath();
    void* get_AllTOPNodes();
    int32_t& get_SelectedTOPIndex();
    void* get_ParentName();
    bool get_bShowResults();
    void set_bShowResults(bool value);
    bool get_bAutoLoadResults();
    void set_bAutoLoadResults(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
