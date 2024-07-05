#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PerlinNoiseShaker.hpp"
float& _Script_GameplayCameras::PerlinNoiseShaker::get_Amplitude() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_GameplayCameras::PerlinNoiseShaker::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_GameplayCameras::PerlinNoiseShaker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayCameras.PerlinNoiseShaker");
    return result;
}
