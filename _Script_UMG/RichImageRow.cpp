#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RichImageRow.hpp"
void* _Script_UMG::RichImageRow::get_Brush() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_UMG::RichImageRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.RichImageRow");
    return result;
}