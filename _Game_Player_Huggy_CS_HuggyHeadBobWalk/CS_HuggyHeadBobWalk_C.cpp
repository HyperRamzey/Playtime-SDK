#include "..\FUObjectArray.hpp"
#include "CS_HuggyHeadBobWalk_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayCameras\MatineeCameraShake.hpp"
_Script_CoreUObject::Class* _Game_Player_Huggy_CS_HuggyHeadBobWalk::CS_HuggyHeadBobWalk_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/CS_HuggyHeadBobWalk.CS_HuggyHeadBobWalk_C");
    return result;
}
