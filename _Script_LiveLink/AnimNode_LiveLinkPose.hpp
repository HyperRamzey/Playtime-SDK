#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_LiveLink {
struct LiveLinkRetargetAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct AnimNode_LiveLinkPose : public _Script_Engine::AnimNode_Base {
    private: char pad_10[0x40]; public:
    void* get_InputPose();
    void* get_LiveLinkSubjectName();
    void* get_RetargetAsset();
    _Script_LiveLink::LiveLinkRetargetAsset*& get_CurrentRetargetAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
