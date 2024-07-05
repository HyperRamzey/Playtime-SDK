#include "..\FUObjectArray.hpp"
#include "LandBob_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayCameras\MatineeCameraShake.hpp"
_Script_CoreUObject::Class* _Game_World_Effects_Camera_Shake_LandBob::LandBob_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/World/Effects/Camera_Shake/LandBob.LandBob_C");
    return result;
}
