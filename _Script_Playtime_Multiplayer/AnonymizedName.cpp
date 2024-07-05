#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "AnonymizedName.hpp"
float& _Script_Playtime_Multiplayer::AnonymizedName::get_Probability() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::AnonymizedName::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::AnonymizedName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.AnonymizedName");
    return result;
}
