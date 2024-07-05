#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundDebugEntry.hpp"
void* _Script_Engine::SoundDebugEntry::get_DebugName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SoundDebugEntry::get_Sound() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SoundDebugEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundDebugEntry");
    return result;
}
