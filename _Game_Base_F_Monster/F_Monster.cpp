#include "..\FUObjectArray.hpp"
#include "F_Monster.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Base_F_Monster::F_Monster::get_Name_2_479A0D4C4F967C7DABC8CEB136021773() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Game_Base_F_Monster::F_Monster::get_Class_5_C3F3B52044350ECF3564EAB7B63E3C11() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Game_Base_F_Monster::F_Monster::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Base/F_Monster.F_Monster");
    return result;
}
