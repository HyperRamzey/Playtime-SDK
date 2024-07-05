#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ANetworkHand.hpp"
#include "HandTimer.hpp"
_Script_Playtime_Multiplayer::ANetworkHand*& _Script_Playtime_Multiplayer::HandTimer::get_Hand() {
    return *(_Script_Playtime_Multiplayer::ANetworkHand**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HandTimer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.HandTimer");
    return result;
}
