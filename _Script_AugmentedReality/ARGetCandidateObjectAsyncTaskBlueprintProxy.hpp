#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARBaseAsyncTaskBlueprintProxy.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARGetCandidateObjectAsyncTaskBlueprintProxy : public ARBaseAsyncTaskBlueprintProxy {
    private: char pad_50[0x48]; public:
    void* get_OnSuccess();
    void* get_OnFailed();
    static _Script_CoreUObject::Class* static_class();
    _Script_AugmentedReality::ARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Extent);
}; // Size: 0x98
#pragma pack(pop)
}
