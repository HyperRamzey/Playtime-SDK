#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkComponents {
#pragma pack(push, 1)
struct LiveLinkComponentController : public _Script_Engine::ActorComponent {
    private: char pad_b0[0xa8]; public:
    void* get_SubjectRepresentation();
    void* get_ControllerMap();
    bool get_bUpdateInEditor();
    void set_bUpdateInEditor(bool value);
    void* get_OnLiveLinkUpdated();
    void* get_ComponentToControl();
    bool get_bDisableEvaluateLiveLinkWhenSpawnable();
    void set_bDisableEvaluateLiveLinkWhenSpawnable(bool value);
    bool get_bEvaluateLiveLink();
    void set_bEvaluateLiveLink(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
