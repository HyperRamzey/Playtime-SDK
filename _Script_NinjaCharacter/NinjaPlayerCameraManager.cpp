#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PlayerCameraManager.hpp"
#include "NinjaPlayerCameraManager.hpp"
_Script_CoreUObject::Class* _Script_NinjaCharacter::NinjaPlayerCameraManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NinjaCharacter.NinjaPlayerCameraManager");
    return result;
}
