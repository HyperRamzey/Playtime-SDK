#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DefaultAudioBusSettings.hpp"
void* _Script_Engine::DefaultAudioBusSettings::get_AudioBus() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::DefaultAudioBusSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DefaultAudioBusSettings");
    return result;
}
