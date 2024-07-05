#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KShapeElem.hpp"
#include "KTaperedCapsuleElem.hpp"
float& _Script_Engine::KTaperedCapsuleElem::get_Radius1() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::KTaperedCapsuleElem::get_Rotation() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_Engine::KTaperedCapsuleElem::get_Center() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::KTaperedCapsuleElem::get_Radius0() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::KTaperedCapsuleElem::get_Length() {
    return *(float*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::KTaperedCapsuleElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KTaperedCapsuleElem");
    return result;
}
