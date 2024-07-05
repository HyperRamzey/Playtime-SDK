#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PlaytimeBezier.hpp"
void* _Script_Playtime_Multiplayer::PlaytimeBezier::get_LinearPoints() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::PlaytimeBezier::get_ControlPoints() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeBezier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeBezier");
    return result;
}
