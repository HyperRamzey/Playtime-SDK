#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoneReference.hpp"
void* _Script_Engine::BoneReference::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::BoneReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BoneReference");
    return result;
}