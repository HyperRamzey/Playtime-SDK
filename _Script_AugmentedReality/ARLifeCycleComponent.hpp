#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
struct ARActor;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARLifeCycleComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x30]; public:
    void* get_OnARActorSpawnedDelegate();
    void* get_OnARActorToBeDestroyedDelegate();
    static _Script_CoreUObject::Class* static_class();
    void ServerSpawnARActor(void* ComponentClass, _Script_CoreUObject::Guid NativeID);
    void ServerDestroyARActor(_Script_AugmentedReality::ARActor* Actor);
}; // Size: 0x230
#pragma pack(pop)
}
