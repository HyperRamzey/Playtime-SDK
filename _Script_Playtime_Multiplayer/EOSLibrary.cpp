#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "EOSLibrary.hpp"
bool _Script_Playtime_Multiplayer::EOSLibrary::CheckAntiCheat() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::EOSLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.EOSLibrary");
    return result;
}
