#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct ServerFilter : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void* GetFilters();
    void AddFilterWhitelisted();
    void AddFilterVersion(void* Value);
    void AddFilterSecure();
    void AddFilterProxy();
    void AddFilterPassword();
    void AddFilterOr(void* Value);
    void AddFilterNotFull();
    void AddFilterNotAppId(void* Value);
    void AddFilterNor(void* Value);
    void AddFilterNoPlayers();
    void AddFilterNand(void* Value);
    void AddFilterName(void* Value);
    void AddFilterMap(void* Value);
    void AddFilterLinux();
    void AddFilterHasPlayers();
    void AddFilterGameTagsNor(void* Value);
    void AddFilterGameTagsAnd(void* Value);
    void AddFilterGameDataOr(void* Value);
    void AddFilterGameDataNor(void* Value);
    void AddFilterGameDataAnd(void* Value);
    void AddFilterGameAddr(void* Value);
    void AddFilterDedicated();
    void AddFilterAnd(void* Value);
}; // Size: 0x38
#pragma pack(pop)
}
