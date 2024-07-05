#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeFloat.hpp"
#include "WaveScalar.hpp"
_Script_CoreUObject::Class* _Script_FieldSystemEngine::WaveScalar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/FieldSystemEngine.WaveScalar");
    return result;
}
float& _Script_FieldSystemEngine::WaveScalar::get_Magnitude() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_FieldSystemEngine::WaveScalar::get_Position() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_FieldSystemEngine::WaveScalar::get_Period() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_FieldSystemEngine::WaveScalar::get_Wavelength() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_FieldSystemEngine::WaveScalar::get_Function() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_FieldSystemEngine::WaveScalar::get_Falloff() {
    return (void*)((uintptr_t)this + 0xc9);
}
_Script_FieldSystemEngine::WaveScalar* _Script_FieldSystemEngine::WaveScalar::SetWaveScalar(float Magnitude, _Script_CoreUObject::Vector Position, float Wavelength, float Period, float Time, void* Function, void* Falloff) {
    return;
}
