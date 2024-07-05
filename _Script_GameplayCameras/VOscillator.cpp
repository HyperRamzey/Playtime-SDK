#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VOscillator.hpp"
void* _Script_GameplayCameras::VOscillator::get_X() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayCameras::VOscillator::get_Y() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_GameplayCameras::VOscillator::get_Z() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::VOscillator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayCameras.VOscillator");
    return result;
}
