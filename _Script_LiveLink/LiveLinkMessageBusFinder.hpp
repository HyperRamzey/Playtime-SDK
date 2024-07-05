#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLink {
struct ProviderPollResult;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkSourceHandle;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkMessageBusFinder : public _Script_CoreUObject::Object {
    private: char pad_28[0x58]; public:
    static _Script_CoreUObject::Class* static_class();
    void GetAvailableProviders(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo, float Duration, void*& AvailableProviders);
    _Script_LiveLink::LiveLinkMessageBusFinder* ConstructMessageBusFinder();
    void ConnectToProvider(_Script_LiveLink::ProviderPollResult& Provider, _Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
}; // Size: 0x80
#pragma pack(pop)
}
