#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Tools_Game_Events_BP_MenuEventPreview {
#pragma pack(push, 1)
struct BP_MenuEventPreview_C : public _Script_Engine::Actor {
    private: char pad_220[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_Handle();
    void* get_Debug();
    bool get_bPreview();
    void set_bPreview(bool value);
    void* get_Event();
    static _Script_CoreUObject::Class* static_class();
    void ChangeMenu();
    void ExecuteUbergraph_BP_MenuEventPreview(int32_t EntryPoint);
    void Debug__DelegateSignature();
}; // Size: 0x248
#pragma pack(pop)
}
