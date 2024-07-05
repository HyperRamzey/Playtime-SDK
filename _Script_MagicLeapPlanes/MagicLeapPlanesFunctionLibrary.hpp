#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_MagicLeapPlanes {
struct MagicLeapPlanesQuery;
}
namespace _Script_MagicLeapPlanes {
struct MagicLeapPlaneResult;
}
namespace _Script_MagicLeapPlanes {
#pragma pack(push, 1)
struct MagicLeapPlanesFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ReorderPlaneFlags(void*& InPriority, void*& InFlagsToReorder, void*& OutReorderedFlags);
    bool RemovePersistentQuery(_Script_CoreUObject::Guid Handle);
    void RemoveFlagsNotInQuery(void*& InQueryFlags, void*& InResultFlags, void*& OutFlags);
    bool PlanesQueryBeginAsync(_Script_MagicLeapPlanes::MagicLeapPlanesQuery& Query, void*& ResultDelegate);
    bool PlanesPersistentQueryBeginAsync(_Script_MagicLeapPlanes::MagicLeapPlanesQuery& Query, _Script_CoreUObject::Guid& Handle, void*& ResultDelegate);
    bool IsTrackerValid();
    _Script_CoreUObject::Transform GetContentScale(_Script_Engine::Actor* ContentActor, _Script_MagicLeapPlanes::MagicLeapPlaneResult& PlaneResult);
    bool DestroyTracker();
    bool CreateTracker();
    _Script_CoreUObject::Guid AddPersistentQuery(void* PersistentQueryType);
}; // Size: 0x28
#pragma pack(pop)
}
