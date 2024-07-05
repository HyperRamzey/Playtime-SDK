#include "..\FUObjectArray.hpp"
#include "CS_HuggyBash_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayCameras\MatineeCameraShake.hpp"
_Script_CoreUObject::Class* _Game_Player_Huggy_CS_HuggyBash::CS_HuggyBash_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/CS_HuggyBash.CS_HuggyBash_C");
    return result;
}
