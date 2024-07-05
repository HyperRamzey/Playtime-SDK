#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "ShutDownTarget.hpp"
void _Script_Playtime_Multiplayer::ShutDownTarget::Re_Activate(float FixDuration) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ShutDownTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ShutDownTarget");
    return result;
}
void _Script_Playtime_Multiplayer::ShutDownTarget::Sabotage() {
    return;
}
