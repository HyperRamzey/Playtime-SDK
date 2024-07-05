#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaIOOutputConfiguration.hpp"
void* _Script_MediaIOCore::MediaIOOutputConfiguration::get_MediaConfiguration() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaIOOutputConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaIOOutputConfiguration");
    return result;
}
void* _Script_MediaIOCore::MediaIOOutputConfiguration::get_OutputType() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_MediaIOCore::MediaIOOutputConfiguration::get_OutputReference() {
    return (void*)((uintptr_t)this + 0x44);
}
int32_t& _Script_MediaIOCore::MediaIOOutputConfiguration::get_KeyPortIdentifier() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_MediaIOCore::MediaIOOutputConfiguration::get_ReferencePortIdentifier() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
