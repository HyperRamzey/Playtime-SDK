#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LiveLinkInterface\LiveLinkVirtualSubject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkBaseStaticData;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkBaseFrameData;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkBlueprintVirtualSubject : public _Script_LiveLinkInterface::LiveLinkVirtualSubject {
    private: char pad_160[0x28]; public:
    static _Script_CoreUObject::Class* static_class();
    bool UpdateVirtualSubjectStaticData_Internal(_Script_LiveLinkInterface::LiveLinkBaseStaticData& InStruct);
    bool UpdateVirtualSubjectFrameData_Internal(_Script_LiveLinkInterface::LiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
    void OnUpdate();
    void OnInitialize();
}; // Size: 0x188
#pragma pack(pop)
}
