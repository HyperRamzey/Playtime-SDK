#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_HoudiniEngineRuntime {
struct HoudiniHandleParameter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniHandleComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x30]; public:
    void* get_XformParms();
    _Script_HoudiniEngineRuntime::HoudiniHandleParameter*& get_RSTParm();
    _Script_HoudiniEngineRuntime::HoudiniHandleParameter*& get_RotOrderParm();
    void* get_HandleType();
    void* get_HandleName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x230
#pragma pack(pop)
}
