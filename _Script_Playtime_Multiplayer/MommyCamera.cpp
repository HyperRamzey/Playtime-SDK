#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "MommyCamera.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MommyCamera::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MommyCamera");
    return result;
}
_Script_Engine::CameraComponent*& _Script_Playtime_Multiplayer::MommyCamera::get_CameraComponent() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x220);
}
