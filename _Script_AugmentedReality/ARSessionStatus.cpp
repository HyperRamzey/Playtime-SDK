#include "..\FUObjectArray.hpp"
#include "ARSessionStatus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARSessionStatus::get_AdditionalInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARSessionStatus::get_Status() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSessionStatus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARSessionStatus");
    return result;
}
