#include "..\FUObjectArray.hpp"
#include "S_NavElementArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Interface_NavSystem_Blueprints_Structures_S_NavElementArray::S_NavElementArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/Interface/NavSystem/Blueprints/Structures/S_NavElementArray.S_NavElementArray");
    return result;
}
void* _Game_Interface_NavSystem_Blueprints_Structures_S_NavElementArray::S_NavElementArray::get_Array_10_E8CAEAAA4D6BA4778B05BE81B5CB5947() {
    return (void*)((uintptr_t)this + 0x0);
}
