#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectName.hpp"
namespace _Script_LiveLink {
struct LiveLinkRetargetAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkInstance : public _Script_Engine::AnimInstance {
    _Script_LiveLink::LiveLinkRetargetAsset*& get_CurrentRetargetAsset();
    static _Script_CoreUObject::Class* static_class();
    void SetSubject(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName);
    void SetRetargetAsset(void* RetargetAsset);
}; // Size: 0x2c0
#pragma pack(pop)
}
