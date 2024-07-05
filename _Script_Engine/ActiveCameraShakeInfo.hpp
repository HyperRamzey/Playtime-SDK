#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CameraShakeBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ActiveCameraShakeInfo {
    private: char pad_0[0x18]; public:
    _Script_Engine::CameraShakeBase*& get_ShakeInstance();
    void* get_ShakeSource();
    bool get_bIsCustomInitialized();
    void set_bIsCustomInitialized(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
