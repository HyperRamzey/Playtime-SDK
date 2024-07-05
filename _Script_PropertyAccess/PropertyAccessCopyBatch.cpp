#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PropertyAccessCopyBatch.hpp"
_Script_CoreUObject::Class* _Script_PropertyAccess::PropertyAccessCopyBatch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyAccess.PropertyAccessCopyBatch");
    return result;
}
void* _Script_PropertyAccess::PropertyAccessCopyBatch::get_Copies() {
    return (void*)((uintptr_t)this + 0x0);
}
