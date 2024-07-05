#include "..\FUObjectArray.hpp"
#include "BP_NetworkFist_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkFist.hpp"
_Script_CoreUObject::Class* _Game_Player_Boxy_BP_NetworkFist::BP_NetworkFist_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Boxy/BP_NetworkFist.BP_NetworkFist_C");
    return result;
}
