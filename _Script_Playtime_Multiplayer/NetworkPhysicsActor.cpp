#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NetworkPhysicsActor.hpp"
float& _Script_Playtime_Multiplayer::NetworkPhysicsActor::get_Tolerance() {
    return *(float*)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkPhysicsActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkPhysicsActor");
    return result;
}
void* _Script_Playtime_Multiplayer::NetworkPhysicsActor::get_Position() {
    return (void*)((uintptr_t)this + 0x24c);
}
void* _Script_Playtime_Multiplayer::NetworkPhysicsActor::get_Rotation() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Script_Playtime_Multiplayer::NetworkPhysicsActor::UpdateRotation() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkPhysicsActor::UpdatePosition() {
    return;
}
