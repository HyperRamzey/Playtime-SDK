#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\OnlineEngineInterface.hpp"
#include "OnlineEngineInterfaceImpl.hpp"
void* _Script_OnlineSubsystemUtils::OnlineEngineInterfaceImpl::get_MappedUniqueNetIdTypes() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_OnlineSubsystemUtils::OnlineEngineInterfaceImpl::get_CompatibleUniqueNetIdTypes() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineEngineInterfaceImpl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
    return result;
}
void* _Script_OnlineSubsystemUtils::OnlineEngineInterfaceImpl::get_VoiceSubsystemNameOverride() {
    return (void*)((uintptr_t)this + 0x88);
}
