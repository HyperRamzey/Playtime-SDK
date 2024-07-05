#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "NinjaPhysicsVolume.hpp"
#include "NinjaPhysicsVolumeSpline.hpp"
_Script_Engine::SplineComponent*& _Script_NinjaCharacter::NinjaPhysicsVolumeSpline::get_SplineComponent() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Script_NinjaCharacter::NinjaPhysicsVolumeSpline::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NinjaCharacter.NinjaPhysicsVolumeSpline");
    return result;
}
