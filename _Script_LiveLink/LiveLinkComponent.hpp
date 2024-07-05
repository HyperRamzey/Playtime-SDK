#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
struct SubjectFrameHandle;
}
namespace _Script_CoreUObject {
struct Timecode;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkComponent : public _Script_Engine::ActorComponent {
    private: char pad_b0[0x20]; public:
    void* get_OnLiveLinkUpdated();
    static _Script_CoreUObject::Class* static_class();
    void GetSubjectDataAtWorldTime(void* SubjectName, float WorldTime, bool& bSuccess, _Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle);
    void GetSubjectDataAtSceneTime(void* SubjectName, _Script_CoreUObject::Timecode& SceneTime, bool& bSuccess, _Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle);
    void GetSubjectData(void* SubjectName, bool& bSuccess, _Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle);
    void GetAvailableSubjectNames(void*& SubjectNames);
}; // Size: 0xd0
#pragma pack(pop)
}
