#include "..\FUObjectArray.hpp"
#include "ChaosClothWeightedValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ChaosCloth::ChaosClothWeightedValue::get_High() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ChaosCloth::ChaosClothWeightedValue::get_Low() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ChaosCloth::ChaosClothWeightedValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ChaosCloth.ChaosClothWeightedValue");
    return result;
}
