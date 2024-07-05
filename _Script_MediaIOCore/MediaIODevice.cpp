#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaIODevice.hpp"
void* _Script_MediaIOCore::MediaIODevice::get_DeviceName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaIODevice::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaIODevice");
    return result;
}
int32_t& _Script_MediaIOCore::MediaIODevice::get_DeviceIdentifier() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
