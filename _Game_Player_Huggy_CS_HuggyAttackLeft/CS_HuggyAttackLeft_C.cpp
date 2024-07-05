#include "..\FUObjectArray.hpp"
#include "CS_HuggyAttackLeft_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayCameras\MatineeCameraShake.hpp"
_Script_CoreUObject::Class* _Game_Player_Huggy_CS_HuggyAttackLeft::CS_HuggyAttackLeft_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/CS_HuggyAttackLeft.CS_HuggyAttackLeft_C");
    return result;
}
