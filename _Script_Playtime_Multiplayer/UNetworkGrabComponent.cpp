#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "UNetworkGrabComponent.hpp"
float& _Script_Playtime_Multiplayer::UNetworkGrabComponent::get_Padding() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_Playtime_Multiplayer::UNetworkGrabComponent::get_OnAttachmentStateChange() {
    return (void*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_Playtime_Multiplayer::UNetworkGrabComponent::get_MaxAttachedHands() {
    return *(int32_t*)((uintptr_t)this + 0xcc);
}
int32_t& _Script_Playtime_Multiplayer::UNetworkGrabComponent::get_CurrentAttachedHands() {
    return *(int32_t*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::UNetworkGrabComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.UNetworkGrabComponent");
    return result;
}
