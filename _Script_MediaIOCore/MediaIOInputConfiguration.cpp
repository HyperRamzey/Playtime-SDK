#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MediaIOInputConfiguration.hpp"
void* _Script_MediaIOCore::MediaIOInputConfiguration::get_MediaConfiguration() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MediaIOCore::MediaIOInputConfiguration::get_InputType() {
    return (void*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_MediaIOCore::MediaIOInputConfiguration::get_KeyPortIdentifier() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MediaIOCore::MediaIOInputConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaIOCore.MediaIOInputConfiguration");
    return result;
}
