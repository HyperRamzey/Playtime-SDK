#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NoEscapeTarget.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NoEscapeTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NoEscapeTarget");
    return result;
}
void _Script_Playtime_Multiplayer::NoEscapeTarget::Sabotage(float Duration) {
    return;
}
