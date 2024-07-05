#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaIOMode.hpp"
int32_t& _Script_MediaIOCore::MediaIOMode::get_DeviceModeIdentifier() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_MediaIOCore::MediaIOMode::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MediaIOCore::MediaIOMode::get_Standard() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MediaIOCore::MediaIOMode::get_Resolution() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaIOMode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaIOMode");
    return result;
}
